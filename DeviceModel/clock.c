#include "component.h"
static char ActiveAttributeValue[8] = "true";
static variableAttribute_t ClockActiveVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ActiveAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char SystemTicksAttributeValue[16];
static variableAttribute_t ClockSystemTicksVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = SystemTicksAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};

static char TimeAttributeValue[16];
static variableAttribute_t ClockTimeVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = TimeAttributeValue,
		.mutability =  true;
		.persistence = false;
	},
	{0,}
};
static char TimeOffsetAttributeValue[16];
static variableAttribute_t ClockTimeOffsetVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = TimeOffsetAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};

static char NtpServerUriAttributeValue[16];
static variableAttribute_t ClockNtpServerUriVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = NtpServerUriAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};


static variableCharacteristics_t ClockActiveVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t ClockSystemTicksVariableCharactersitics = {
	.units = "Ticks",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t ClockTimeVariableCharactersitics = {
	.units = "",
	.dataType = DateTime,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t ClockTimeOffsetVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};

static variableCharacteristics_t ClockNtpServerUriVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};

static variable_t ClockVariables[] = {
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &ClockActiveVariablesAttributes,
		.variableCharactersitics = &ClockActiveVariableCharactersitics,
	},
	{
		.variableName = "SystemTicks",
		.variableInstance = "0",
		.variableAttributes = &ClockSystemTicksVariablesAttributes,
		.variableCharactersitics = &ClockSystemTicksVariableCharactersitics,
	},
	{
		.variableName = "Time",
		.variableInstance = "0",
		.variableAttributes = &ClockTimeVariablesAttributes,
		.variableCharactersitics = &ClockTimeVariableCharactersitics,
	},
	{
		.variableName = "TimeOffset",
		.variableInstance = "0",
		.variableAttributes = &ClockTimeOffsetVariablesAttributes,
		.variableCharactersitics = &ClockTimeOffsetVariableCharactersitics,
	},
	{
		.variableName = "NtpServerUri",
		.variableInstance = "0",
		.variableAttributes = &ClockNtpServerUriVariablesAttributes,
		.variableCharactersitics = &ClockNtpServerUriVariableCharactersitics,
	},
};

component_t clock = {
	.componentName = "Clock",
	.componentInstance = "0",
	.connector = 0,
	.variables = &ClockVariables,
	
};
