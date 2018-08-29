#include "usart.h"
#include "cmsis_os.h"
#include "debug.h"
#include "gprs.h"
#include <stdbool.h>
#include <stdarg.h>
static osMessageQId atResultMessageQId;
static UART_HandleTypeDef *puart;
uint8_t at_cmd[64];
uint8_t at_result[512];
struct{

	uint8_t protocol;
	uint8_t status;
	uint8_t flag;
	uint16_t port;
	osMessageQId messageQId;
}socket_mgr[5];

typedef struct {
	uint16_t len;
	uint8_t *data;
}ByteArray;

static void at_cmd_proc_task(void *param)
{
	
}

void M26_rx_proc()
{
//	   uint32_t isrflags   = READ_REG(puart->Instance->SR);
//	   uint32_t cr1its     = READ_REG(puart->Instance->CR1);
//	   uint32_t cr3its     = READ_REG(puart->Instance->CR3);
//      if(((isrflags & USART_SR_RXNE) != RESET) && ((cr1its & USART_CR1_RXNEIE) != RESET))
//      {
//        RTT_LOG("%c", (uint8_t)(puart->Instance->DR & (uint8_t)0x00FF));
//      }
}

static uint8_t at_cmd_send(char *cmd, ...)
{
	char cmd_str[64] = "AT+";
	uint8_t len;
	char *arg;
	va_list ap;
	va_start(ap, cmd);
	strcat(cmd_str, cmd);
	if(strcmp(arg = va_arg(ap, char *), VA_PARAM_END))
	{
		strcat(cmd_str, "=");
		strcat(cmd_str, arg);
		while(strcmp(arg = va_arg(ap, char *), VA_PARAM_END))
		{
			strcat(cmd_str, ",");
			strcat(cmd_str, arg);
		}
	}
	len = strlen(cmd_str);
	cmd_str[len ++] = 0x0D;
	cmd_str[len ++] = 0x0A;
	memcpy(at_cmd, cmd_str, len);
	memset(at_result, 0x00, 512);
	HAL_UART_Abort(puart);
	HAL_UART_Receive_IT(puart, at_result, 512);
	HAL_UART_Transmit_IT(puart, at_cmd, len);
	return len;
}
static uint8_t at_cmd_resp_check(char *cmd, char *expect, uint32_t timeout)
{
	uint32_t timeout_systick = osKernelSysTick() + timeout;
	while(true){
		if(osKernelSysTick() > timeout_systick){
			RTT_LOG(APP_NOTICE"cmd:%s timeout\r\n", cmd);
			
			return M26_TIMEOUT;
		}
		if((512 - puart->RxXferCount) > strlen(expect)){
			if(strstr(at_result, expect) != NULL){
				RTT_LOG(APP_INFO"cmd:%s %s\r\n", cmd, at_result);

				return M26_OK;
			}else{
				RTT_LOG(APP_ERR"cmd:%s %s\r\n", cmd, at_result);
				return M26_ERR;
			}
		}
		osDelay(10);
	}
	
}
void M26_reboot()
{
	HAL_GPIO_WritePin(GPRS4G_PWR_GPIO_Port, GPRS4G_PWR_Pin, GPIO_PIN_SET);
	osDelay(5000);
	HAL_GPIO_WritePin(GPRS4G_PWR_GPIO_Port, GPRS4G_PWR_Pin, GPIO_PIN_RESET);
	osDelay(1000);
	HAL_GPIO_WritePin(GPRS4G_ON_GPIO_Port, GPRS4G_ON_Pin, GPIO_PIN_RESET);
	osDelay(2000);
	HAL_GPIO_WritePin(GPRS4G_ON_GPIO_Port, GPRS4G_ON_Pin, GPIO_PIN_SET);
	osDelay(10000);
}

int8_t M26_init(UART_HandleTypeDef *huart)
{
	puart = huart;
reset:
	M26_reboot();
	osDelay(1000);
retry0:
	at_cmd_send("QISDE", "0", VA_PARAM_END);
	if(at_cmd_resp_check("QISDE", "OK", 1000) != M26_OK){
		goto retry0;
	}
	osDelay(1000);
	
	at_cmd_send("CPIN?", VA_PARAM_END);
	if(at_cmd_resp_check("CPIN", "READY", 100) != M26_OK){
		goto reset;
	}
	osDelay(50);

	at_cmd_send("CREG?", VA_PARAM_END);
	if(at_cmd_resp_check("CREG", "OK", 100) != M26_OK){
		goto reset;
	}
	osDelay(50);

	at_cmd_send("QIFGCNT", "1", VA_PARAM_END);
	if(at_cmd_resp_check("QIFGCNT", "OK", 100) != M26_OK){
		goto reset;
	}
	osDelay(50);
	
	at_cmd_send("QIDNSIP", "0", VA_PARAM_END);
	if(at_cmd_resp_check("QIDNSIP", "OK", 100) != M26_OK){
		goto reset;
	}
	osDelay(50);
	at_cmd_send("QIMODE", "0", VA_PARAM_END);
	if(at_cmd_resp_check("QIMODE", "OK", 100) != M26_OK){
		goto reset;
	}
	osDelay(50);
	
	at_cmd_send("QIHEAD", "0", VA_PARAM_END);
	if(at_cmd_resp_check("QIHEAD", "OK", 100) != M26_OK){
		goto reset;
	}
	osDelay(50);
	
	at_cmd_send("QINDI", "0", VA_PARAM_END);
	if(at_cmd_resp_check("QINDI", "OK", 100) != M26_OK){
		goto reset;
	}
	osDelay(50);

	at_cmd_send("QIMUX", "1", VA_PARAM_END);
	if(at_cmd_resp_check("QIMUX", "OK", 100) != M26_OK){
		goto reset;
	}
	osDelay(50);

	at_cmd_send("QIREGAPP", VA_PARAM_END);
	if(at_cmd_resp_check("QIREGAPP", "OK", 500) != M26_OK){
		goto reset;
	}
	osDelay(1000);
retry1:
	at_cmd_send("QIACT", VA_PARAM_END);
	if(at_cmd_resp_check("QIACT", "OK", 5000) != M26_OK){
		goto retry1;
	}
	return M26_OK;
}

int8_t M26_ioctl(int cmd, void *param)
{
	switch(cmd){
		case IO_SET_DNSIP:
			at_cmd_send("QIDNSIP", (char *)param, VA_PARAM_END);
			return at_cmd_resp_check("QIDNSIP", "OK", 100);
		case IO_GET_CSQ:
			at_cmd_send("CSQ", VA_PARAM_END);
			return at_cmd_resp_check("CSQ", "OK", 1000);
	}
}

int8_t M26_connect(uint8_t sn, uint8_t *addr, uint16_t port)
{
	char sn_str[8];
	char port_str[8];
	char protocol_str[8];
	char ip_str[16];
	SOCKNUM_CHECK(sn);
	sprintf(sn_str, "%d", sn);
	sprintf(port_str, "\"%d\"", port);
	sprintf(protocol_str, "%s", socket_mgr[sn].protocol == TCP ? "\"TCP\"" : "\"UDP\"");
	sprintf(ip_str, "\"%d.%d.%d.%d\"", addr[0], addr[1], addr[2], addr[3]);
	at_cmd_send("QIOPEN", sn_str, protocol_str, ip_str, port_str, VA_PARAM_END);
	return at_cmd_resp_check("QIOPEN", "OK", 5000);

}

int8_t M26_socket(uint8_t sn, uint8_t protocol, uint16_t port, uint8_t flag)
{
	char sn_str[8];
	sprintf(sn_str,"sn%d", sn);
	SOCKNUM_CHECK(sn);
	osMessageQDef(sn_str, 32, sizeof(ByteArray));
	socket_mgr[sn].port = port;
	socket_mgr[sn].protocol = protocol;
	socket_mgr[sn].messageQId = osMessageCreate(osMessageQ(sn_str), NULL);
	return sn;
}

int8_t M26_disconnect(uint8_t sn)
{
	char sn_str[8];
	SOCKNUM_CHECK(sn);
	sprintf(sn_str, "%d", sn);
	at_cmd_send("QICLOSE", sn, VA_PARAM_END);
	return at_cmd_resp_check("QICLOSE", "READY", 100);
}

int32_t M26_send(uint8_t sn, uint8_t * buf, uint16_t len)
{
	char sn_str[8];
	char len_str[8];
	sprintf(sn_str, "%d", sn);
	sprintf(len_str, "%d", len);
	at_cmd_send("QISEND", sn_str, len_str, VA_PARAM_END);
	if(at_cmd_resp_check("QISEND", ">", 1000) == M26_OK){
		HAL_UART_Transmit_IT(puart, buf, len);
	}

	at_cmd_resp_check("QISEND", "SEND OK", 2000);
	//HAL_UART_AbortReceive(puart);
//	HAL_UART_Receive_IT(puart, at_result, 512);
	return M26_OK;
}

int32_t M26_recv(uint8_t sn, uint8_t * buf, uint16_t len)
{
	osEvent event;
	ByteArray *pba;
	osMessageQId qid= socket_mgr[sn].messageQId;
	//event = osMessageGet(qid, 0);
	RTT_LOG(APP_NOTICE"recv: %s\r\n", at_result);
//	if(event.status == osEventMessage){
//		pba = event.value.p;
//		memcpy(buf, pba->data, pba->len);
//		return pba->len;
//	}
	return 0;
}