#include "component.t"

static char activeAttributeValue[16];
static variableAttribute_t controllerActiveVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = activeAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};

static char intervalAttributeValue[16];
static variableAttribute_t controllerIntervalVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = intervalAttributeValue,
		.mutability = True;
		.persistence = false;
	},
	{0,}
};

static char manufacturerAttributeValue[16];
static variableAttribute_t controllerManufacturerVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = manufacturerAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char TypeAttributeValue[16];
static variableAttribute_t controllerTypeVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = TypeAttributeValue,
		.mutability = True;
		.persistence = false;
	},
	{0,}
};
static char SerialNumberAttributeValue[16];
static variableAttribute_t controllerSerialNumberVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = SerialNumberAttributeValue,
		.mutability = True;
		.persistence = false;
	},
	{0,}
};
static char VersionNumberAttributeValue[16];
static variableAttribute_t controllerVersionNumberVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = VersionNumberAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char VersionDataAttributeValue[16];
static variableAttribute_t controllerVersionDataVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = VersionDataAttributeValue,
		.mutability = false;
		.persistence = false;
	},
	{0,}
};
static char SQCodeAttributeValue[16];
static variableAttribute_t controllerSQCodeVariablesAttribute[] = {
	{
		.attributeType = Actual,
		.attributeValue = SQCodeAttributeValue,
		//.mutability = false;
		.persistence = false;
	},
	{0,}
};
static variableCharacteristics_t controllerActiveVariableCharactersitics = {
	.units = "",
	.dataType = MemberList,
	.minLimit = 0,
	.maxLimit = 1,
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
	.dataType = MemberList,
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
static variableCharacteristics_t controllerVersionDataVariableCharactersitics = {
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
	.supportsMonitoring = True;
};
static variable_t controllerVariables[] = {
	{
		.variableName = "Active",
		.variableInstance = "0",
		.variableAttributes = &controllerActiveVariablesAttribute,
		.variableCharactersitics = &controllerActiveVariableCharactersitics,
	},
	{
		.variableName = "Interval",
		.variableInstance = "0",
		.variableAttributes = &controllerIntervalVariablesAttribute,
		.variableCharactersitics = &controllerIntervalVariableCharactersitics,
	},
	{
		.variableName = "Manufacturer",
		.variableInstance = "0",
		.variableAttributes = &controllerManufacturerVariablesAttribute,
		.variableCharactersitics = &controllerManufacturerVariableCharactersitics,

	}
	{
		.variableName = "Type",
		.variableInstance = "0",
		.variableAttributes = &controllerTypeVariablesAttribute,
		.variableCharactersitics = &controllerTypeVariableCharactersitics,
		
	}
	{
		.variableName = "SerialNumber",
		.variableInstance = "0",
		.variableAttributes = &controllerSerialNumberVariablesAttribute,
		.variableCharactersitics = &controllerSerialNumberVariableCharactersitics,
		
	}
	{
		.variableName = "DateTime",
		.variableInstance = "0",
		.variableAttributes = &controllerVersionDataVariablesAttribute,
		.variableCharactersitics = &controllerVersionDataVariableCharactersitics,
		
	}
	{
		.variableName = "VersionNumber",
		.variableInstance = "0",
		.variableAttributes = &controllerVersionNumberVariablesAttribute,
		.variableCharactersitics = &controllerVersionNumberVariableCharactersitics,
		
	}
	{
		.variableName = "SQCode",
		.variableInstance = "0",
		.variableAttributes = &controllerSQCodeVariablesAttribute,
		.variableCharactersitics = &controllerSQCodeVariableCharactersitics,
		
	}
};
component_t controller = {
	.componentName = "controller",
	.componentInstance = "0",
	.connector = 0,
	.variables = &controllerVariables,
	
}

