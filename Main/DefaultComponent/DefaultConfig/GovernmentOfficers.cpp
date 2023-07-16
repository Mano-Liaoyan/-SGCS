/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovernmentOfficers
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GovernmentOfficers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GovernmentOfficers.h"
//#[ ignore
#define Default_GovernmentOfficers_GovernmentOfficers_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class GovernmentOfficers
GovernmentOfficers::GovernmentOfficers(void) : Stakeholder() {
    NOTIFY_CONSTRUCTOR(GovernmentOfficers, GovernmentOfficers(), 0, Default_GovernmentOfficers_GovernmentOfficers_SERIALIZE);
}

GovernmentOfficers::~GovernmentOfficers(void) {
    NOTIFY_DESTRUCTOR(~GovernmentOfficers, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernmentOfficers::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedStakeholder::serializeAttributes(aomsAttributes);
}

void OMAnimatedGovernmentOfficers::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedStakeholder::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(GovernmentOfficers, Default, false, Stakeholder, OMAnimatedStakeholder, OMAnimatedGovernmentOfficers)

OMINIT_SUPERCLASS(Stakeholder, OMAnimatedStakeholder)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovernmentOfficers.cpp
*********************************************************************/
