/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_RecieveDataFromSensor
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_RecieveDataFromSensor.h
*********************************************************************/

#ifndef UC_RecieveDataFromSensor_H
#define UC_RecieveDataFromSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class UC_RecieveDataFromSensor
class UC_RecieveDataFromSensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_RecieveDataFromSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_RecieveDataFromSensor(void);
    
    //## auto_generated
    ~UC_RecieveDataFromSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_RecieveDataFromSensor : virtual public AOMInstance {
    DECLARE_META(UC_RecieveDataFromSensor, OMAnimatedUC_RecieveDataFromSensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_RecieveDataFromSensor.h
*********************************************************************/
