#ifndef __DEVICE_MODEL_H__
#define __DEVICE_MODEL_H__

enum attributeEnumType{
	Actual = 0,
	Target = 1,
	MinSet = 2,
	MaxSet = 3,
};

enum dataEnumType{
	String = 0,
	Decimal = 1,
	Integer = 2,
	DataTime = 3,
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
	variableAttribute_t **variableAttributes;
	variableCharacteristics_t *variableCharactersitics;

}variable_t;

typedef struct{
	char *componentName;
	char *componentInstance;
	int  connector;
	variable_t **variables;
}component_t;

#endif
