/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: FillLevelSensor
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\FillLevelSensor.h
*********************************************************************/

#ifndef FillLevelSensor_H
#define FillLevelSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class FillLevelSensor
class FillLevelSensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedFillLevelSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    FillLevelSensor(void);
    
    //## auto_generated
    ~FillLevelSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFillLevelSensor : virtual public AOMInstance {
    DECLARE_META(FillLevelSensor, OMAnimatedFillLevelSensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\FillLevelSensor.h
*********************************************************************/
