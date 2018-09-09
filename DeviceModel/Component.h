#ifndef __COMPONENT_H__
#define __COMPONENT_H__
#include "variable.h"
enum attributeEnumType{
	None = 0,
	Actual = 1,
	Target = 2,
	MinSet = 3,
	MaxSet = 4,
};

enum dataEnumType{
	String = 0,
	Decimal = 1,
	Integer = 2,
	DateTime = 3,
	Boolean = 4,
	OptionList = 5,
};

typedef struct{
	enum attributeEnumType attributeType;
	char *attributeValue;
	bool mutability;
	bool persistence;
}variableAttribute_t;

typedef struct{
	char *units;
	enum dataEnumType dataType;
	int  minLimit;
	int maxLimit;
	char **valuesList;
	bool supportsMonitoring;
}variableCharacteristics_t;

typedef struct{
	char *variableName;
	char *variableInstance;
	variableAttribute_t *variableAttributes;
	variableCharacteristics_t *variableCharactersitics;

}variable_t;

typedef struct{
	char *componentName;
	char *componentInstance;
	int  connector;
	variable_t *variables;
}component_t;

extern component_t temperatureSensor;
extern component_t EVSE;
extern component_t clock;
extern component_t controller;
extern component_t tiltSensor;
extern component_t radiolink;
extern component_t contactor;
extern component_t connector;

#endif
