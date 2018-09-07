#include "component.t"
static char EnabledAttributeValue[16];
static variableAttribute_t TemperatureSensorEnabledVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = EnabledAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};
static char EnabledAttributeValue[16];
static variableAttribute_t TemperatureSensorTemperatureVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = TemperatureAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ActiveAttributeValue[16];
static variableAttribute_t TemperatureSensorActiveVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ActiveAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};


static variableCharacteristics_t TemperatureSensorEnabledVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t TemperatureSensorTemperatureVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t TemperatureSensorActiveVariableCharactersitics = {
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variable_t TemperatureSensorVariables[] = {
	{
		.variableName = "Enabled",
		.variableInstance = "0",
		.variableAttributes = &TemperatureSensorEnabledVariablesAttribute,
		.variableCharactersitics = &TemperatureSensorEnabledVariableCharactersitics,
	},
	{
		.variableName = "Temperature",
		.variableInstance = "0",
		.variableAttributes = &TemperatureSensorTemperatureVariablesAttribute,
		.variableCharactersitics = &TemperatureSensorTemperatureVariableCharactersitics,
	},
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &TemperatureSensorActiveVariablesAttribute,
		.variableCharactersitics = &TemperatureSensorActiveVariableCharactersitics,
	},
}

component_t TemperatureSensor = {
	.componentName = "TemperatureSensor",
	.componentInstance = "0",
	.connector = 0,
	.variables = &TemperatureSensorVariables,
	
}