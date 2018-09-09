#include "component.t"
static char ActiveAttributeValue[16];
static variableAttribute_t contactorActiveVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ActiveAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ProblemAttributeValue[16];
static variableAttribute_t contactorProblemVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ProblemAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char TrippedAttributeValue[16];
static variableAttribute_t contactorTrippedVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = TrippedAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};


static variableCharacteristics_t contactorActiveVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t contactorProblemVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t contactorTrippedVariableCharactersitics = {
	.units = "",
	.dataType = OptionList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};



static variable_t contactorVariables[] = {
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &contactorActiveVariablesAttributes,
		.variableCharactersitics = &contactorActiveVariableCharactersitics,
	},
	
	{
		.variableName = "Problem",
		.variableInstance = "0",
		.variableAttributes = &contactorProblemVariablesAttributes,
		.variableCharactersitics = &contactorProblemVariableCharactersitics,
	},
	{
		.variableName = "Tripped",
		.variableInstance = "0",
		.variableAttributes = &contactorTrippedVariablesAttributes,
		.variableCharactersitics = &contactorTrippedVariableCharactersitics,
	},
	
	
	
};
component_t contactor = {
	.componentName = "Active",
	.componentInstance = "0",
	.connector = 0,
	.variables = &contactorVariables,
	
};