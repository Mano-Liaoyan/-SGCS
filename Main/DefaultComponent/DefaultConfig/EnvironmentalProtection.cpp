/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EnvironmentalProtection
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\EnvironmentalProtection.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EnvironmentalProtection.h"
//#[ ignore
#define Default_EnvironmentalProtection_EnvironmentalProtection_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class EnvironmentalProtection
EnvironmentalProtection::EnvironmentalProtection(void) : Regulations() {
    NOTIFY_CONSTRUCTOR(EnvironmentalProtection, EnvironmentalProtection(), 0, Default_EnvironmentalProtection_EnvironmentalProtection_SERIALIZE);
}

EnvironmentalProtection::~EnvironmentalProtection(void) {
    NOTIFY_DESTRUCTOR(~EnvironmentalProtection, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnvironmentalProtection::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedRegulations::serializeAttributes(aomsAttributes);
}

void OMAnimatedEnvironmentalProtection::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedRegulations::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(EnvironmentalProtection, Default, false, Regulations, OMAnimatedRegulations, OMAnimatedEnvironmentalProtection)

OMINIT_SUPERCLASS(Regulations, OMAnimatedRegulations)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EnvironmentalProtection.cpp
*********************************************************************/
