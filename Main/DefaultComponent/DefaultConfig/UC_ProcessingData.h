/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_ProcessingData
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_ProcessingData.h
*********************************************************************/

#ifndef UC_ProcessingData_H
#define UC_ProcessingData_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class UC_ProcessingData
class UC_ProcessingData {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_ProcessingData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_ProcessingData(void);
    
    //## auto_generated
    ~UC_ProcessingData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_ProcessingData : virtual public AOMInstance {
    DECLARE_META(UC_ProcessingData, OMAnimatedUC_ProcessingData)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_ProcessingData.h
*********************************************************************/
