#ifndef __GPRS_H__
#define __GPRS_H__

#define MAX_SOCKNUM 5
#define SOCKERR_SOCKNUM -1

#define TCP 0x01
#define UDP 0x02

#define SOCKNUM_CHECK(sn)   \
	   do{					  \
		  if(sn > MAX_SOCKNUM) return SOCKERR_SOCKNUM;	\
	   }while(0)

#endif
