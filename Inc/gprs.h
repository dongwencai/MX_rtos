#ifndef __GPRS_H__
#define __GPRS_H__

#define MAX_SOCKNUM 5
#define SOCKERR_SOCKNUM -1
#define VA_PARAM_END "end\r\n"

#define TCP 0x01
#define UDP 0x02
#define SIG_QISDE (1 << 0)
#define SIG_CPIN  (1 << 1)
#define SIG_CREG  (1 << 2)
#define SIG_QIDNSIP (1 << 3)
#define SIG_QIFGCNT (1 << 4)
#define SIG_QIMODE (1 << 5)
#define SIG_QINDI  (1 << 6)
#define SIG_QIMUX  (1 << 7)
#define SIG_QIREGAPP (1 << 8)
#define SIG_QIOPEN  (1 << 9)
#define SIG_INVALID (0xffffffff)

#define IO_SET_DNSIP 	1
#define IO_GET_CSQ 		2	
#define IO_GET_STATUS 	3	


#define M26_OK 0
#define M26_ERR -1
#define M26_TIMEOUT -2

#define SOCKET_INIT 0
#define SOCKET_CONNECTED 1

#define SOCKNUM_CHECK(sn)   \
	   do{					  \
		  if(sn > MAX_SOCKNUM) return SOCKERR_SOCKNUM;	\
	   }while(0)

extern void M26_reboot();
extern int8_t M26_init(UART_HandleTypeDef *huart);
extern 	int8_t M26_reset();	  
extern int8_t M26_socket(uint8_t sn, uint8_t protocol, uint16_t port, uint8_t flag);
extern int8_t M26_connect(uint8_t sn, uint8_t *addr, uint16_t port);
extern int8_t M26_ioctl(int cmd, void *param);
extern int32_t M26_recv(uint8_t sn, uint8_t * buf, uint16_t len);
#endif
