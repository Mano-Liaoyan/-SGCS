/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovernWasteManagement
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GovernWasteManagement.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GovernWasteManagement.h"
//#[ ignore
#define Default_GovernWasteManagement_GovernWasteManagement_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class GovernWasteManagement
GovernWasteManagement::GovernWasteManagement(void) : Regulations() {
    NOTIFY_CONSTRUCTOR(GovernWasteManagement, GovernWasteManagement(), 0, Default_GovernWasteManagement_GovernWasteManagement_SERIALIZE);
}

GovernWasteManagement::~GovernWasteManagement(void) {
    NOTIFY_DESTRUCTOR(~GovernWasteManagement, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernWasteManagement::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedRegulations::serializeAttributes(aomsAttributes);
}

void OMAnimatedGovernWasteManagement::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedRegulations::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(GovernWasteManagement, Default, false, Regulations, OMAnimatedRegulations, OMAnimatedGovernWasteManagement)

OMINIT_SUPERCLASS(Regulations, OMAnimatedRegulations)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovernWasteManagement.cpp
*********************************************************************/
