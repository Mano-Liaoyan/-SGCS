/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HumiditySensor
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\HumiditySensor.h
*********************************************************************/

#ifndef HumiditySensor_H
#define HumiditySensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class HumiditySensor
class HumiditySensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHumiditySensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    HumiditySensor(void);
    
    //## auto_generated
    ~HumiditySensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHumiditySensor : virtual public AOMInstance {
    DECLARE_META(HumiditySensor, OMAnimatedHumiditySensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HumiditySensor.h
*********************************************************************/
