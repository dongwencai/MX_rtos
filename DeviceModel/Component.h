#ifndef __COMPONENT_H__
#define __COMPONENT_H__
#include "variable.h"

typedef struct{
	char *componentName;
	char *componentInstance;
	int  connector;
	variable_t **variables;
}component_t;

#endif
