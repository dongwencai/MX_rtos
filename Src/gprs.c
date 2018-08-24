#include "stm32f1xx_hal_uart.h"

static UART_HandleTypeDef *puart;
struct{

	uint8_t protocol;
	uint8_t status;
	uint8_t flag;
	uint16_t port;

}socket_mgr[5];

static char *at_cmd_pack(char *cmd, ...)
{
	static char cmd_str[64] = "AT+";
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
	return 0;
}
static int8_t gprs_init(UART_HandleTypeDef *huart)
{

}

static int8_t gprs_socket(uint8_t sn, uint8_t protocol, uint16_t port, uint8_t flag)
{
	SOCKNUM_CHECK(sn);
	socket_mgr[sn].port = port;
	socket_mgr[sn].protocol = protocol;
	return sn;
}

static int8_t gprs_connect(uint8_t sn, uint8_t *addr, uint16_t port)
{
	char sn_str[8];
	char port_str[8];
	char protocol_str[8];
	char ip_str[16];
	SOCKNUM_CHECK(sn);
	sprintf(sn_str, "%d", sn);
	sprintf(port_str, "%d", port);
	sprintf(protocol_str, "%s", socket_mgr[sn].protocol == TCP ? "\"TCP\"" : "\"UDP\"");
	sprintf(ip_str, "%d.%d.%d.%d", addr[0], addr[1], addr[2], addr[3]);
	at_cmd_pack("QIOPEN", sn_str, protocol_str, ip_str, port_str);
	//HAL_UART_Transmit_IT(puart,)
}

static int8_t gprs_disconnect(uint8_t sn)
{
	char sn_str[8];
	SOCKNUM_CHECK(sn);
	sprintf(sn_str, "%d", sn);
	at_cmd_pack("QICLOSE", sn);
	
}

static int32_t gprs_send(uint8_t sn, uint8_t * buf, uint16_t len)
{

}

static int32_t gprs_recv(uint8_t sn, uint8_t * buf, uint16_t len)
{

}