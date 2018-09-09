#include "component.h"
static char EnabledAttributeValue[16];
static variableAttribute_t EVSEEnabledVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = EnabledAttributeValue,
		.mutability = true;
		.persistence = true;
	},
	{0,}
};
static char StateAttributeValue[16];
static variableAttribute_t EVSEProblemVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = StateAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};

static char TrippedAttributeValue[16];
static variableAttribute_t EVSETrippedVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = TrippedAttributeValue,
		.mutability =  false;
		.persistence = false;
	},
	{0,}
};
static char ACVoltageAttributeValue[16];
static variableAttribute_t EVSEACVoltageVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ACVoltageAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ACCurrentAttributeValue[16];
static variableAttribute_t EVSEACCurrentVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = ACCurrentAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char DCVoltageAttributeValue[16];
static variableAttribute_t EVSEDCVoltageVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = DCVoltageAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char DCCurrentAttributeValue[16];
static variableAttribute_t EVSEDCCurrentVariablesAttributes[] = {
	{
		.attributeType = Actual,
		.attributeValue = DCCurrentAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char ChargeProtocolAttributeValue[16];
static variableAttribute_t EVSEChargeProtocolVariablesAttributes[] = {
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
static variableCharacteristics_t EVSEProblemVariableCharactersitics = {
	.units = "",
	.dataType = Boolean,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = true;
};
static variableCharacteristics_t EVSETrippedCharactersitics = {
	.units = "",
	.dataType = OptionList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t EVSEACVoltageVariableCharactersitics = {
	.units = "V",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t EVSEACCurrentVariableCharactersitics = {
	.units = "mA",
	.dataType = Integer,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};
static variableCharacteristics_t EVSEDCVoltageVariableCharactersitics = {
	.units = "V",
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
	.dataType = OptionList,
	.minLimit = 0,
	.maxLimit = 0,
	.valuesList = NULL,
	.supportsMonitoring = false;
};

static variable_t EVSEVariables[] = {
	{
		.variableName = "Enabled",
		.variableInstance = "0",
		.variableAttributes = &EVSEEnabledVariablesAttributes,
		.variableCharactersitics = &EVSEEnabledVariableCharactersitics,
	},
	{
		.variableName = "Problem",
		.variableInstance = "0",
		.variableAttributes = &EVSEProblemVariablesAttributes,
		.variableCharactersitics = &EVSEProblemVariableCharactersitics,
	},
	{
		.variableName = "Tripped",
		.variableInstance = "0",
		.variableAttributes = &EVSETrippedVariablesAttributes,
		.variableCharactersitics = &EVSETrippedCharactersitics,
	},
	{
		.variableName = "ACVoltage",
		.variableInstance = "0",
		.variableAttributes = &EVSEACVoltageVariablesAttributes,
		.variableCharactersitics = &EVSEACVoltageVariableCharactersitics,
	},
	{
		.variableName = "ACCurrent",
		.variableInstance = "0",
		.variableAttributes = &EVSEACCurrentVariablesAttributes,
		.variableCharactersitics = &EVSEACCurrentVariableCharactersitics,
	},
	{
		.variableName = "DCVoltage",
		.variableInstance = "0",
		.variableAttributes = &EVSEDCVoltageVariablesAttributes,
		.variableCharactersitics = &EVSEDCVoltageVariableCharactersitics,
	},
		{
		.variableName = "DCCurrent",
		.variableInstance = "0",
		.variableAttributes = &EVSEDCCurrentVariablesAttributes,
		.variableCharactersitics = &EVSEDCCurrentVariableCharactersitics,
	},
		{
		.variableName = "ChargeProtocol",
		.variableInstance = "0",
		.variableAttributes = &EVSEChargeProtocolVariablesAttributes,
		.variableCharactersitics = &EVSEChargeProtocolVariableCharactersitics,
	},
};

component_t EVSE = {
	.componentName = "EVSE",
	.componentInstance = "0",
	.connector = 0,
	.variables = &EVSEVariables,
};