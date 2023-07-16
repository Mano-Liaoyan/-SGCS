/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Computer
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Computer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Computer.h"
//#[ ignore
#define Default_Computer_Computer_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Computer
Computer::Computer(void) : Devices() {
    NOTIFY_CONSTRUCTOR(Computer, Computer(), 0, Default_Computer_Computer_SERIALIZE);
}

Computer::~Computer(void) {
    NOTIFY_DESTRUCTOR(~Computer, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedComputer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedDevices::serializeAttributes(aomsAttributes);
}

void OMAnimatedComputer::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedDevices::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Computer, Default, false, Devices, OMAnimatedDevices, OMAnimatedComputer)

OMINIT_SUPERCLASS(Devices, OMAnimatedDevices)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Computer.cpp
*********************************************************************/
