/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GPSTracker
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GPSTracker.h
*********************************************************************/

#ifndef GPSTracker_H
#define GPSTracker_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class GPSTracker
class GPSTracker {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGPSTracker;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GPSTracker(void);
    
    //## auto_generated
    ~GPSTracker(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGPSTracker : virtual public AOMInstance {
    DECLARE_META(GPSTracker, OMAnimatedGPSTracker)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GPSTracker.h
*********************************************************************/
