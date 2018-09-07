#include "component.t"
static char EnabledAttributeValue[16];
static variableAttribute_t EVSEEnabledVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = EnabledAttributeValue,
		.mutability = ture;
		.persistence = false;
	},
	{0,}
};
static char StateAttributeValue[16];
static variableAttribute_t EVSEStateVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = StateAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};

static char TrippedAttributeValue[16];
static variableAttribute_t EVSETrippedVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = TrippedAttributeValue,
		.mutability =  false;
		.persistence = false;
	},
	{0,}
};
static char ACVoltageAttributeValue[16];
static variableAttribute_t EVSEACVoltageVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ACVoltageAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ACCurrentAttributeValue[16];
static variableAttribute_t EVSEACCurrentVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ACCurrentAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char DCVoltageAttributeValue[16];
static variableAttribute_t EVSEDCVoltageVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = DCVoltageAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char DCCurrentAttributeValue[16];
static variableAttribute_t EVSEDCCurrentVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = DCCurrentAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ChargeProtocolAttributeValue[16];
static variableAttribute_t EVSEChargeProtocolVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = ChargeProtocolAttributeValue,
		.mutability = true;
		.persistence = false;
	},
	{0,}
};



static variableCharacteristics_t EVSEEnabledVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t EVSEStateVariableCharactersitics = {
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t EVSETrippedCharactersitics = {
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t EVSEACVoltageVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t EVSEACCurrentVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t EVSEDCVoltageVariableCharactersitics = {
	.units = "",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t EVSEDCCurrentVariableCharactersitics = {
	.units = "mA",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t EVSEChargeProtocolVariableCharactersitics = {
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};

static variable_t EVSEVariables[] = {
	{
		.variableName = "Enabled",
		.variableInstance = "0",
		.variableAttributes = &ClockEnabledVariablesAttribute,
		.variableCharactersitics = &EVSEEnabledVariableCharactersitics,
	},
	{
		.variableName = "State",
		.variableInstance = "0",
		.variableAttributes = &EVSEStateVariablesAttribute,
		.variableCharactersitics = &EVSEStateVariableCharactersitics,
	},
	{
		.variableName = "Tripped",
		.variableInstance = "0",
		.variableAttributes = &EVSETrippedAttribute,
		.variableCharactersitics = &EVSETrippedCharactersitics,
	},
	{
		.variableName = "ACVoltage",
		.variableInstance = "0",
		.variableAttributes = &EVSEACVoltageVariablesAttribute,
		.variableCharactersitics = &EVSEACVoltageVariableCharactersitics,
	},
	{
		.variableName = "ACCurrent",
		.variableInstance = "0",
		.variableAttributes = &EVSEACCurrentVariablesAttribute,
		.variableCharactersitics = &EVSEACCurrentVariableCharactersitics,
	},
	{
		.variableName = "DCVoltage",
		.variableInstance = "0",
		.variableAttributes = &EVSEDCVoltageVariablesAttribute,
		.variableCharactersitics = &EVSEDCVoltageVariableCharactersitics,
	},
		{
		.variableName = "DCCurrent",
		.variableInstance = "0",
		.variableAttributes = &EVSEDCCurrentVariablesAttribute,
		.variableCharactersitics = &EVSEDCCurrentVariableCharactersitics,
	},
		{
		.variableName = "ChargeProtocol",
		.variableInstance = "0",
		.variableAttributes = &EVSEChargeProtocolVariablesAttribute,
		.variableCharactersitics = &EVSEChargeProtocolVariableCharactersitics,
	},
}

component_t EVSE = {
	.componentName = "EVSE",
	.componentInstance = "0",
	.connector = 0,
	.variables = &EVSEVariables,
	
}