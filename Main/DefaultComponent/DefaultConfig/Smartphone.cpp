/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smartphone
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Smartphone.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Smartphone.h"
//#[ ignore
#define Default_Smartphone_Smartphone_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Smartphone
Smartphone::Smartphone(void) : Devices() {
    NOTIFY_CONSTRUCTOR(Smartphone, Smartphone(), 0, Default_Smartphone_Smartphone_SERIALIZE);
}

Smartphone::~Smartphone(void) {
    NOTIFY_DESTRUCTOR(~Smartphone, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSmartphone::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDevices::serializeAttributes(aomsAttributes);
}

void OMAnimatedSmartphone::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDevices::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Smartphone, Default, false, Devices, OMAnimatedDevices, OMAnimatedSmartphone)

OMINIT_SUPERCLASS(Devices, OMAnimatedDevices)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smartphone.cpp
*********************************************************************/
