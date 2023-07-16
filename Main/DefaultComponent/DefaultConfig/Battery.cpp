/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Battery
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Battery.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Battery.h"
//#[ ignore
#define Default_Battery_Battery_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Battery
Battery::Battery(void) {
    NOTIFY_CONSTRUCTOR(Battery, Battery(), 0, Default_Battery_Battery_SERIALIZE);
}

Battery::~Battery(void) {
    NOTIFY_DESTRUCTOR(~Battery, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Battery, Default, Default, false, OMAnimatedBattery)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Battery.cpp
*********************************************************************/
