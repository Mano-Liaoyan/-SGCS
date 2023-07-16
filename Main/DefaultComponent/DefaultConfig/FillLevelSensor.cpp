/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: FillLevelSensor
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\FillLevelSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "FillLevelSensor.h"
//#[ ignore
#define Default_FillLevelSensor_FillLevelSensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class FillLevelSensor
FillLevelSensor::FillLevelSensor(void) {
    NOTIFY_CONSTRUCTOR(FillLevelSensor, FillLevelSensor(), 0, Default_FillLevelSensor_FillLevelSensor_SERIALIZE);
}

FillLevelSensor::~FillLevelSensor(void) {
    NOTIFY_DESTRUCTOR(~FillLevelSensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(FillLevelSensor, Default, Default, false, OMAnimatedFillLevelSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\FillLevelSensor.cpp
*********************************************************************/
