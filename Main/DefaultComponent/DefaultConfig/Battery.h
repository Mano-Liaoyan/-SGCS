/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Battery
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Battery.h
*********************************************************************/

#ifndef Battery_H
#define Battery_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Battery
class Battery {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedBattery;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Battery(void);
    
    //## auto_generated
    ~Battery(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedBattery : virtual public AOMInstance {
    DECLARE_META(Battery, OMAnimatedBattery)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Battery.h
*********************************************************************/
