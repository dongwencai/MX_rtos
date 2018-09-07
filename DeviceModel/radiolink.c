#include "component.t"
static char EnabledAttributeValue[16];
static variableAttribute_t radiolinkEnabledVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = EnabledAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};
static char ActiveAttributeValue[16];
static variableAttribute_t radiolinkActiveVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ActiveAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char IMSIAttributeValue[16];
static variableAttribute_t radiolinkIMSIVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = IMSIAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ICCIDAttributeValue[16];
static variableAttribute_t radiolinkICCIDVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ICCIDAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char IpAddressAttributeValue[16];
static variableAttribute_t radiolinkIpAddressVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = IpAddressAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ServerIpAttributeValue[16];
static variableAttribute_t radiolinkServerIpVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ServerIpAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};
static char ServerPortAttributeValue[16];
static variableAttribute_t radiolinkServerPortVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ServerPortAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};
static char ProblemAttributeValue[16];
static variableAttribute_t radiolinkProblemVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ProblemAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char WiredSignalStrengthAttributeValue[16];
static variableAttribute_t radiolinkWiredSignalStrengthVariablesAttribute[] = {
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
	.supportsMonitoring = true;
};
static variableCharacteristics_t radiolinkActiveVariableCharactersitics = {
	.units = "",
	.dataType = MemberList,
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
	.supportsMonitoring = true;
};
static variableCharacteristics_t radiolinkServerIpVariableCharactersitics = {
	.units = "",
	.dataType = String,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t radiolinkServerPortVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t radiolinkProblemVariableCharactersitics = {
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t radiolinkWiredSignalStrengthVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};

static variable_t radiolinkVariables[] = {
	{
		.variableName = "Enabled",
		.variableInstance = "0",
		.variableAttributes = &radiolinkEnabledVariablesAttribute,
		.variableCharactersitics = &radiolinkEnabledVariableCharactersitics,
	},
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &radiolinkActiveVariablesAttribute,
		.variableCharactersitics = &radiolinkActiveVariableCharactersitics,
	},
	{
		.variableName = "IMSI",
		.variableInstance = "0",
		.variableAttributes = &radiolinkIMSIVariablesAttribute,
		.variableCharactersitics = &radiolinkIMSIVariableCharactersitics,
	},
	{
		.variableName = "ICCID",
		.variableInstance = "0",
		.variableAttributes = &radiolinkICCIDVariablesAttribute,
		.variableCharactersitics = &radiolinkICCIDVariableCharactersitics,
	},
	{
		.variableName = "IpAddress",
		.variableInstance = "0",
		.variableAttributes = &radiolinkIpAddressVariablesAttribute,
		.variableCharactersitics = &radiolinkIpAddressVariableCharactersitics,
	},
	{
		.variableName = "ServerIp",
		.variableInstance = "0",
		.variableAttributes = &radiolinkServerIpVariablesAttribute,
		.variableCharactersitics = &radiolinkServerIpVariableCharactersitics,
	},
	{
		.variableName = "ServerPort",
		.variableInstance = "0",
		.variableAttributes = &radiolinkServerPortVariablesAttribute,
		.variableCharactersitics = &radiolinkServerPortVariableCharactersitics,
	},
	{
		.variableName = "Problem",
		.variableInstance = "0",
		.variableAttributes = &radiolinkProblemVariablesAttribute,
		.variableCharactersitics = &radiolinkProblemVariableCharactersitics,
	},
	{
		.variableName = "WiredSignalStrength",
		.variableInstance = "0",
		.variableAttributes = &radiolinkWiredSignalStrengthVariablesAttribute,
		.variableCharactersitics = &radiolinkWiredSignalStrengthVariableCharactersitics,
	},
}

component_t radiolink = {
	.componentName = "radiolink",
	.componentInstance = "0",
	.connector = 0,
	.variables = &radiolinkVariables,
	
}