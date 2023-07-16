/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Garbage
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Garbage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Garbage.h"
//#[ ignore
#define Default_Garbage_Garbage_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Garbage
Garbage::Garbage(void) {
    NOTIFY_CONSTRUCTOR(Garbage, Garbage(), 0, Default_Garbage_Garbage_SERIALIZE);
}

Garbage::~Garbage(void) {
    NOTIFY_DESTRUCTOR(~Garbage, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Garbage, Default, Default, false, OMAnimatedGarbage)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Garbage.cpp
*********************************************************************/
