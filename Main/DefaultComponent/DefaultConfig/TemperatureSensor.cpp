/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TemperatureSensor
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TemperatureSensor.h"
//#[ ignore
#define Default_TemperatureSensor_TemperatureSensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TemperatureSensor
TemperatureSensor::TemperatureSensor(void) {
    NOTIFY_CONSTRUCTOR(TemperatureSensor, TemperatureSensor(), 0, Default_TemperatureSensor_TemperatureSensor_SERIALIZE);
}

TemperatureSensor::~TemperatureSensor(void) {
    NOTIFY_DESTRUCTOR(~TemperatureSensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(TemperatureSensor, Default, Default, false, OMAnimatedTemperatureSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.cpp
*********************************************************************/
