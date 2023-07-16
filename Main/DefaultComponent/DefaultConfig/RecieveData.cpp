/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RecieveData
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\RecieveData.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RecieveData.h"
//#[ ignore
#define Default_RecieveData_RecieveData_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class RecieveData
RecieveData::RecieveData(void) {
    NOTIFY_CONSTRUCTOR(RecieveData, RecieveData(), 0, Default_RecieveData_RecieveData_SERIALIZE);
}

RecieveData::~RecieveData(void) {
    NOTIFY_DESTRUCTOR(~RecieveData, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(RecieveData, Default, Default, false, OMAnimatedRecieveData)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RecieveData.cpp
*********************************************************************/
