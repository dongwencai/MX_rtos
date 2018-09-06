#ifndef __VARIABLEATTRIBUTES_H__
#define __VARIABLEATTRIBUTES_H__
typedef enum{

}DataEnumType;

typedef enum{
	String = 0,
	Integer = 1,
	
}dataType;

typedef struct{
	char componentName[16];
	char componentInstance[4];
	int  connector;
	variable 
}component;

typedef struct{
	char variableName[16];
	char variableInstance[4];
	variableCharacteristics character;
	variableAttributes attributes[0];
}variable;
//readonly
typedef struct{
	char unit[8];
	char dataType[8];
	char lowerLimit[16];
	char upperLimit[16];
	//list of allowed values
}variableCharacteristics;

typedef struct{
	char actualValue[16];
	char targetValue[16];
	char lowerLimit[16];
	char upperLimit[16];
	bool mutability;      
	bool persistence;
}variableAttributes;

#endif
