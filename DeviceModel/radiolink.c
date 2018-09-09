#include "component.h"
static char EnabledAttributeValue[8];
static variableAttribute_t radiolinkEnabledVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = EnabledAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};
static char ActiveAttributeValue[8] = "true";
static variableAttribute_t radiolinkActiveVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ActiveAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char IMSIAttributeValue[32];
static variableAttribute_t radiolinkIMSIVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = IMSIAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ICCIDAttributeValue[32];
static variableAttribute_t radiolinkICCIDVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ICCIDAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char IpAddressAttributeValue[16];
static variableAttribute_t radiolinkIpAddressVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = IpAddressAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ServerIpAttributeValue[16];
static variableAttribute_t radiolinkServerIpVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ServerIpAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};
static char ServerPortAttributeValue[8];
static variableAttribute_t radiolinkServerPortVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ServerPortAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};
static char ProblemAttributeValue[8] = "false";
static variableAttribute_t radiolinkProblemVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ProblemAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char WiredSignalStrengthAttributeValue[8];
static variableAttribute_t radiolinkWiredSignalStrengthVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = WiredSignalStrengthAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};



static variableCharacteristics_t radiolinkEnabledVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t radiolinkActiveVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t radiolinkIMSIVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t radiolinkICCIDVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t radiolinkIpAddressVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t radiolinkServerIpVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t radiolinkServerPortVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t radiolinkProblemVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t radiolinkWiredSignalStrengthVariableCharactersitics = {
	.units = "Percent",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};

static variable_t radiolinkVariables[] = {
	{
		.variableName = "Enabled",
		.variableInstance = "0",
		.variableAttributes = &radiolinkEnabledVariablesAttributes,
		.variableCharactersitics = &radiolinkEnabledVariableCharactersitics,
	},
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &radiolinkActiveVariablesAttributes,
		.variableCharactersitics = &radiolinkActiveVariableCharactersitics,
	},
	{
		.variableName = "IMSI",
		.variableInstance = "0",
		.variableAttributes = &radiolinkIMSIVariablesAttributes,
		.variableCharactersitics = &radiolinkIMSIVariableCharactersitics,
	},
	{
		.variableName = "ICCID",
		.variableInstance = "0",
		.variableAttributes = &radiolinkICCIDVariablesAttributes,
		.variableCharactersitics = &radiolinkICCIDVariableCharactersitics,
	},
	{
		.variableName = "IpAddress",
		.variableInstance = "0",
		.variableAttributes = &radiolinkIpAddressVariablesAttributes,
		.variableCharactersitics = &radiolinkIpAddressVariableCharactersitics,
	},
	{
		.variableName = "ServerIp",
		.variableInstance = "0",
		.variableAttributes = &radiolinkServerIpVariablesAttributes,
		.variableCharactersitics = &radiolinkServerIpVariableCharactersitics,
	},
	{
		.variableName = "ServerPort",
		.variableInstance = "0",
		.variableAttributes = &radiolinkServerPortVariablesAttributes,
		.variableCharactersitics = &radiolinkServerPortVariableCharactersitics,
	},
	{
		.variableName = "Problem",
		.variableInstance = "0",
		.variableAttributes = &radiolinkProblemVariablesAttributes,
		.variableCharactersitics = &radiolinkProblemVariableCharactersitics,
	},
	{
		.variableName = "WiredSignalStrength",
		.variableInstance = "0",
		.variableAttributes = &radiolinkWiredSignalStrengthVariablesAttributes,
		.variableCharactersitics = &radiolinkWiredSignalStrengthVariableCharactersitics,
	},
};

component_t radiolink = {
	.componentName = "radiolink",
	.componentInstance = "0",
	.connector = 0,
	.variables = &radiolinkVariables,
	
};