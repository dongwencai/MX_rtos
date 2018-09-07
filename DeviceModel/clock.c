#include "component.t"
static char ActiveAttributeValue[16];
static variableAttribute_t ClockActiveVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ActiveAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char SystemTicksAttributeValue[16];
static variableAttribute_t ClockSystemTicksVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = SystemTicksAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};

static char TimeAttributeValue[16];
static variableAttribute_t ClockTimeVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = TimeAttributeValue,
		.mutability =  true;
		.persistence = false;
	},
	{0,}
};
static char TimeOffsetAttributeValue[16];
static variableAttribute_t ClockTimeOffsetVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = TimeOffsetAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};
static char TimeSourceAttributeValue[16];
static variableAttribute_t ClockTimeSourceVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = TimeSourceAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};
static char NtpServerUriAttributeValue[16];
static variableAttribute_t ClockNtpServerUriVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = NtpServerUriAttributeValue,
		.mutability = true;
		.persistence = false;
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
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t ClockTimeVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t ClockTimeOffsetVariableCharactersitics = {
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t ClockTimeSourceVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t ClockNtpServerUriVariableCharactersitics = {
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};

static variable_t ClockVariables[] = {
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &ClockActiveVariablesAttribute,
		.variableCharactersitics = &ClockActiveVariableCharactersitics,
	},
	{
		.variableName = "SystemTicks",
		.variableInstance = "0",
		.variableAttributes = &ClockSystemTicksVariablesAttribute,
		.variableCharactersitics = &ClockSystemTicksVariableCharactersitics,
	},
	{
		.variableName = "Time",
		.variableInstance = "0",
		.variableAttributes = &ClockVariablesAttribute,
		.variableCharactersitics = &ClockVariableCharactersitics,
	},
	{
		.variableName = "TimeOffset",
		.variableInstance = "0",
		.variableAttributes = &ClockTimeOffsetVariablesAttribute,
		.variableCharactersitics = &ClockTimeOffsetVariableCharactersitics,
	},
	{
		.variableName = "TimeSource",
		.variableInstance = "0",
		.variableAttributes = &ClockTimeSourceVariablesAttribute,
		.variableCharactersitics = &ClockTimeSourceVariableCharactersitics,
	},
	{
		.variableName = "NtpServerUri",
		.variableInstance = "0",
		.variableAttributes = &ClockNtpServerUriVariablesAttribute,
		.variableCharactersitics = &ClockNtpServerUriVariableCharactersitics,
	},
}

component_t Clock = {
	.componentName = "Clock",
	.componentInstance = "0",
	.connector = 0,
	.variables = &ClockVariables,
	
}
