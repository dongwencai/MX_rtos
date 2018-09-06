#ifndef __VARIABLEATTRIBUTE_H__
#define __VARIABLEATTRIBUTE_H__

enum attributeEnumType{
	Actual = 0,
	Target = 1,
	MinSet = 2,
	MaxSet = 3,
};

typedef struct{
	enum attributeEnumType attributeType;
	char *attributeValue;
	bool mutability;
	bool persistence;
}variableAttribute_t;
#endif
