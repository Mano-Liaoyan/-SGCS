/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Devices
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Devices.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Devices.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_Devices_Devices_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Devices
Devices::Devices(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Devices, Devices(), 0, Default_Devices_Devices_SERIALIZE);
}

Devices::~Devices(void) {
    NOTIFY_DESTRUCTOR(~Devices, true);
    cleanUpRelations();
}

const SGCS* Devices::getItsSGCS(void) const {
    return itsSGCS;
}

void Devices::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsDevices(this);
        }
    _setItsSGCS(p_SGCS);
}

void Devices::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Devices* p_Devices = itsSGCS->getItsDevices();
            if(p_Devices != NULL)
                {
                    itsSGCS->__setItsDevices(NULL);
                }
            itsSGCS = NULL;
        }
}

void Devices::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
    if(p_SGCS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSGCS", p_SGCS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
        }
}

void Devices::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsDevices(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Devices::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDevices::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Devices, Default, Default, false, OMAnimatedDevices)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Devices.cpp
*********************************************************************/
