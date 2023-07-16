/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TemperatureSensor
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.h
*********************************************************************/

#ifndef TemperatureSensor_H
#define TemperatureSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class TemperatureSensor
class TemperatureSensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTemperatureSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TemperatureSensor(void);
    
    //## auto_generated
    ~TemperatureSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTemperatureSensor : virtual public AOMInstance {
    DECLARE_META(TemperatureSensor, OMAnimatedTemperatureSensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TemperatureSensor.h
*********************************************************************/
