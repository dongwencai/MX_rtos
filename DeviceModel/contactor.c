#include "component.t"
static char ActiveAttributeValue[16];
static variableAttribute_t contactorActiveVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ActiveAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ProblemAttributeValue[16];
static variableAttribute_t contactorProblemVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ProblemAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char TrippedAttributeValue[16];
static variableAttribute_t contactorTrippedVariablesAttribute[] = {
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
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t contactorProblemVariableCharactersitics = {
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t contactorTrippedVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};



static variable_t contactorVariables[] = {
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &contactorActiveVariablesAttribute,
		.variableCharactersitics = &contactorActiveVariableCharactersitics,
	},
	
	{
		.variableName = "Problem",
		.variableInstance = "0",
		.variableAttributes = &contactorProblemVariablesAttribute,
		.variableCharactersitics = &contactorProblemVariableCharactersitics,
	},
	{
		.variableName = "Tripped",
		.variableInstance = "0",
		.variableAttributes = &contactorTrippedVariablesAttribute,
		.variableCharactersitics = &contactorTrippedVariableCharactersitics,
	},
	
	
	
}
component_t contactor = {
	.componentName = "Active",
	.componentInstance = "0",
	.connector = 0,
	.variables = &contactorVariables,
	
}