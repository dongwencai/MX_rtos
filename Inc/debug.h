#ifndef _DEBUG_H
#define _DEBUG_H
#ifdef RTT_DEBUG
#include "segger_rtt.h"

#define RTT_LOG(str, ...) SEGGER_RTT_printf(0,  str, ##__VA_ARGS__)
#define APP_ALERT 	RTT_CTRL_TEXT_BRIGHT_RED
#define APP_ERR			RTT_CTRL_TEXT_BRIGHT_RED
#define APP_WARNING RTT_CTRL_TEXT_BRIGHT_GREEN
#define APP_NOTICE	RTT_CTRL_TEXT_BRIGHT_YELLOW
#define APP_INFO		RTT_CTRL_TEXT_BRIGHT_WHITE
#define APP_DEBUG		RTT_CTRL_TEXT_BRIGHT_BLUE
#define APP_DEFAULT RTT_CTRL_TEXT_BRIGHT_WHITE

#else

#define RTT_LOG(str, ...)
#define APP_ALERT
#define APP_ERR
#define APP_WARNING
#define APP_NOTICE
#define APP_INFO
#define APP_DEBUG
#define APP_DEFAULT 
#endif


#endif
