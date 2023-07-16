/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RecieveData
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\RecieveData.h
*********************************************************************/

#ifndef RecieveData_H
#define RecieveData_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class RecieveData
class RecieveData {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRecieveData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RecieveData(void);
    
    //## auto_generated
    ~RecieveData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRecieveData : virtual public AOMInstance {
    DECLARE_META(RecieveData, OMAnimatedRecieveData)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RecieveData.h
*********************************************************************/
