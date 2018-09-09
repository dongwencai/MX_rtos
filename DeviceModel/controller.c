#include "component.h"

static char activeAttributeValue[8] = "true";
static variableAttribute_t controllerActiveVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = activeAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};

static char intervalAttributeValue[8];
static variableAttribute_t controllerIntervalVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = intervalAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};

static char manufacturerAttributeValue[32];
static variableAttribute_t controllerManufacturerVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = manufacturerAttributeValue,
		.mutability = false;
		.persistence = true;
	},
	{0,}
};
static char TypeAttributeValue[16];
static variableAttribute_t controllerTypeVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = TypeAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};
static char SerialNumberAttributeValue[16];
static variableAttribute_t controllerSerialNumberVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = SerialNumberAttributeValue,
		.mutability = false;
		.persistence = true;
	},
	{0,}
};
static char VersionNumberAttributeValue[16];
static variableAttribute_t controllerVersionNumberVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = VersionNumberAttributeValue,
		.mutability = false;
		.persistence = true;
	},
	{0,}
};
static char VersionDataAttributeValue[16];
static variableAttribute_t controllerVersionDateVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = VersionDataAttributeValue,
		.mutability = false;
		.persistence = true;
	},
	{0,}
};
static char SQCodeAttributeValue[16];
static variableAttribute_t controllerSQCodeVariablesAttributses[] = {
	{
		.attributeType = Actual,
		.attributeValue = SQCodeAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};
static variableCharacteristics_t controllerActiveVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.valuesList = NULL,
	.supportsMonitoring = false;
};

static variableCharacteristics_t controllerIntervalVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 360,
	.valuesList = NULL,
	.supportsMonitoring = false;
};

static variableCharacteristics_t controllerManufacturerVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t controllerTypeVariableCharactersitics = {
	.units = "",
	.dataType = OptionList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t controllerSerialNumberVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t controllerVersionNumberVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t controllerVersionDateVariableCharactersitics = {
	.units = "",
	.dataType = DateTime,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t controllerSQCodeVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variable_t controllerVariables[] = {
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &controllerActiveVariablesAttributes,
		.variableCharactersitics = &controllerActiveVariableCharactersitics,
	},
	{
		.variableName = "Interval",
		.variableInstance = "0",
		.variableAttributes = &controllerIntervalVariablesAttributes,
		.variableCharactersitics = &controllerIntervalVariableCharactersitics,
	},
	{
		.variableName = "Manufacturer",
		.variableInstance = "0",
		.variableAttributes = &controllerManufacturerVariablesAttributes,
		.variableCharactersitics = &controllerManufacturerVariableCharactersitics,

	},
	{
		.variableName = "Type",
		.variableInstance = "0",
		.variableAttributes = &controllerTypeVariablesAttributes,
		.variableCharactersitics = &controllerTypeVariableCharactersitics,
		
	},
	{
		.variableName = "SerialNumber",
		.variableInstance = "0",
		.variableAttributes = &controllerSerialNumberVariablesAttributes,
		.variableCharactersitics = &controllerSerialNumberVariableCharactersitics,
		
	},
	{
		.variableName = "VersionDate",
		.variableInstance = "0",
		.variableAttributes = &controllerVersionDateVariablesAttributes,
		.variableCharactersitics = &controllerVersionDateVariableCharactersitics,
		
	},
	{
		.variableName = "VersionNumber",
		.variableInstance = "0",
		.variableAttributes = &controllerVersionNumberVariablesAttributes,
		.variableCharactersitics = &controllerVersionNumberVariableCharactersitics,
		
	},
	{
		.variableName = "SQCode",
		.variableInstance = "0",
		.variableAttributes = &controllerSQCodeVariablesAttributses,
		.variableCharactersitics = &controllerSQCodeVariableCharactersitics,
		
	}
};
component_t controller = {
	.componentName = "controller",
	.componentInstance = "0",
	.connector = 0,
	.variables = &controllerVariables,
	
};

