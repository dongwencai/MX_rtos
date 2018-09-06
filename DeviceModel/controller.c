#include "component.t"

static char attributeValue[16];
static variableAttribute_t controllerVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = attributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};

static variableCharacteristics_t controllervariableCharactersitics = {
	.units = "",
		
};

static variable_t controllerVariables[] = {
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &controllerVariablesAttribute,
		.variableCharactersitics = 
	},
	{

	},
};
component_t controller = {
	.componentName = "controller",
	.componentInstance = "0",
	.connector = 0,
	.variables = &controllerVariables,
	
}

