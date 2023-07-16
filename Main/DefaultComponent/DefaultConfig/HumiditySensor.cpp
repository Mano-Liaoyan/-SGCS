/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HumiditySensor
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\HumiditySensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HumiditySensor.h"
//#[ ignore
#define Default_HumiditySensor_HumiditySensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class HumiditySensor
HumiditySensor::HumiditySensor(void) {
    NOTIFY_CONSTRUCTOR(HumiditySensor, HumiditySensor(), 0, Default_HumiditySensor_HumiditySensor_SERIALIZE);
}

HumiditySensor::~HumiditySensor(void) {
    NOTIFY_DESTRUCTOR(~HumiditySensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(HumiditySensor, Default, Default, false, OMAnimatedHumiditySensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HumiditySensor.cpp
*********************************************************************/
