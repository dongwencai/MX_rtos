#include "component.h"
static char EnabledAttributeValue[16];
static variableAttribute_t TiltSensorEnabledVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = EnabledAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};
static char ActiveAttributeValue[16] = "false";
static variableAttribute_t TiltSensorActiveVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = EnabledAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};



static variableCharacteristics_t TiltSensorEnabledVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t TiltSensorActiveVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};


static variable_t TiltSensorVariables[] = {
	{
		.variableName = "Enabled",
		.variableInstance = "0",
		.variableAttributes = &TiltSensorEnabledVariablesAttributes,
		.variableCharactersitics = &TiltSensorEnabledVariableCharactersitics,
	},
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &TiltSensorActiveVariablesAttributes,
		.variableCharactersitics = &TiltSensorActiveVariableCharactersitics,
	},
};

component_t tiltSensor = {
	.componentName = "TiltSensor",
	.componentInstance = "0",
	.connector = 0,
	.variables = &TiltSensorVariables,
	
};