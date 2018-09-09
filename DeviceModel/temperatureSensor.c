#include "component.h"
static char EnabledAttributeValue[8] = "true";
static variableAttribute_t TemperatureSensorEnabledVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = EnabledAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};
static char TemperatureAttributeValue[16];
static variableAttribute_t TemperatureSensorTemperatureVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = TemperatureAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ActiveAttributeValue[8];
static variableAttribute_t TemperatureSensorActiveVariablesAttributes[] = {
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
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variable_t TemperatureSensorVariables[] = {
	{
		.variableName = "Enabled",
		.variableInstance = "0",
		.variableAttributes = &TemperatureSensorEnabledVariablesAttributes,
		.variableCharactersitics = &TemperatureSensorEnabledVariableCharactersitics,
	},
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &TemperatureSensorActiveVariablesAttributes,
		.variableCharactersitics = &TemperatureSensorActiveVariableCharactersitics,
	},
	{
		.variableName = "Temperature",
		.variableInstance = "0",
		.variableAttributes = &TemperatureSensorTemperatureVariablesAttributes,
		.variableCharactersitics = &TemperatureSensorTemperatureVariableCharactersitics,
	},

};

component_t temperatureSensor = {
	.componentName = "TemperatureSensor",
	.componentInstance = "0",
	.connector = 0,
	.variables = &TemperatureSensorVariables,
	
};