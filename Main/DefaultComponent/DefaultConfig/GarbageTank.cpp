/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GarbageTank
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GarbageTank.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GarbageTank.h"
//#[ ignore
#define Default_GarbageTank_GarbageTank_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class GarbageTank
GarbageTank::GarbageTank(void) {
    NOTIFY_CONSTRUCTOR(GarbageTank, GarbageTank(), 0, Default_GarbageTank_GarbageTank_SERIALIZE);
}

GarbageTank::~GarbageTank(void) {
    NOTIFY_DESTRUCTOR(~GarbageTank, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(GarbageTank, Default, Default, false, OMAnimatedGarbageTank)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GarbageTank.cpp
*********************************************************************/
