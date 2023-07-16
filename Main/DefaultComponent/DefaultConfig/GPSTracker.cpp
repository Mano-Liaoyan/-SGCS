/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GPSTracker
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GPSTracker.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GPSTracker.h"
//#[ ignore
#define Default_GPSTracker_GPSTracker_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class GPSTracker
GPSTracker::GPSTracker(void) {
    NOTIFY_CONSTRUCTOR(GPSTracker, GPSTracker(), 0, Default_GPSTracker_GPSTracker_SERIALIZE);
}

GPSTracker::~GPSTracker(void) {
    NOTIFY_DESTRUCTOR(~GPSTracker, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(GPSTracker, Default, Default, false, OMAnimatedGPSTracker)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GPSTracker.cpp
*********************************************************************/
