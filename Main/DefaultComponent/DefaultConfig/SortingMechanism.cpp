/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SortingMechanism
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SortingMechanism.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SortingMechanism.h"
//#[ ignore
#define Default_SortingMechanism_SortingMechanism_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SortingMechanism
SortingMechanism::SortingMechanism(void) {
    NOTIFY_CONSTRUCTOR(SortingMechanism, SortingMechanism(), 0, Default_SortingMechanism_SortingMechanism_SERIALIZE);
}

SortingMechanism::~SortingMechanism(void) {
    NOTIFY_DESTRUCTOR(~SortingMechanism, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SortingMechanism, Default, Default, false, OMAnimatedSortingMechanism)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SortingMechanism.cpp
*********************************************************************/
