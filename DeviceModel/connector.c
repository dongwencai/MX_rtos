#include "component.t"
static char EnabledAttributeValue[16];
static variableAttribute_t connectorEnabledVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = EnabledAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};
static char ProblemAttributeValue[16];
static variableAttribute_t connectorProblemVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ProblemAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char TrippedAttributeValue[16];
static variableAttribute_t connectorTrippedVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = TrippedAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char PowerLimitAttributeValue[16];
static variableAttribute_t connectorPowerLimitVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ProblemAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};

static variableCharacteristics_t connectorEnabledVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t connectorProblemVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t connectorTrippedVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t connectorPowerLimitVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};

static variable_t connectorVariables[] = {
	{
		.variableName = "Enabled",
		.variableInstance = "0",
		.variableAttributes = &connectorEnabledVariablesAttributes,
		.variableCharactersitics = &connectorEnabledVariableCharactersitics,
	},
	{
		.variableName = "Problem",
		.variableInstance = "0",
		.variableAttributes = &connectorProblemVariablesAttributes,
		.variableCharactersitics = &connectorProblemVariableCharactersitics,
	},
		{
		.variableName = "Tripped",
		.variableInstance = "0",
		.variableAttributes = &connectorTrippedVariablesAttributes,
		.variableCharactersitics = &connectorTrippedVariableCharactersitics,
	},
		{
		.variableName = "PowerLimit",
		.variableInstance = "0",
		.variableAttributes = &connectorPowerLimitVariablesAttributes,
		.variableCharactersitics = &connectorPowerLimitVariableCharactersitics,
	},
	
};
component_t connector = {
	.componentName = "connector",
	.componentInstance = "0",
	.connector = 0,
	.variables = &connectorVariables,
	
};