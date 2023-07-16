/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationSystem
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationSystem.h"
//## link itsSensorSystem
#include "SensorSystem.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_CommunicationSystem_CommunicationSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CommunicationSystem
CommunicationSystem::CommunicationSystem(void) : Binlocation(0.0), binfilllevel(0.0), vehiclelocation(0.0), itsSGCS(NULL), itsSensorSystem(NULL) {
    NOTIFY_CONSTRUCTOR(CommunicationSystem, CommunicationSystem(), 0, Default_CommunicationSystem_CommunicationSystem_SERIALIZE);
}

CommunicationSystem::~CommunicationSystem(void) {
    NOTIFY_DESTRUCTOR(~CommunicationSystem, true);
    cleanUpRelations();
}

const float CommunicationSystem::getBinlocation(void) const {
    return Binlocation;
}

void CommunicationSystem::setBinlocation(const float p_Binlocation) {
    Binlocation = p_Binlocation;
}

const float CommunicationSystem::getBinfilllevel(void) const {
    return binfilllevel;
}

void CommunicationSystem::setBinfilllevel(const float p_binfilllevel) {
    binfilllevel = p_binfilllevel;
}

const float CommunicationSystem::getVehiclelocation(void) const {
    return vehiclelocation;
}

void CommunicationSystem::setVehiclelocation(const float p_vehiclelocation) {
    vehiclelocation = p_vehiclelocation;
}

const Notification* CommunicationSystem::getItsNotification(void) const {
    return &itsNotification;
}

const SGCS* CommunicationSystem::getItsSGCS(void) const {
    return itsSGCS;
}

void CommunicationSystem::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsCommunicationSystem(this);
        }
    _setItsSGCS(p_SGCS);
}

const SensorSystem* CommunicationSystem::getItsSensorSystem(void) const {
    return itsSensorSystem;
}

void CommunicationSystem::setItsSensorSystem(SensorSystem* const p_SensorSystem) {
    if(p_SensorSystem != NULL)
        {
            p_SensorSystem->_setItsCommunicationSystem(this);
        }
    _setItsSensorSystem(p_SensorSystem);
}

const UC_RecieveDataFromSensor* CommunicationSystem::getItsUC_RecieveDataFromSensor(void) const {
    return &itsUC_RecieveDataFromSensor;
}

const UC_SendDataToServer* CommunicationSystem::getItsUC_SendDataToServer(void) const {
    return &itsUC_SendDataToServer;
}

void CommunicationSystem::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const CommunicationSystem* p_CommunicationSystem = itsSGCS->getItsCommunicationSystem();
            if(p_CommunicationSystem != NULL)
                {
                    itsSGCS->__setItsCommunicationSystem(NULL);
                }
            itsSGCS = NULL;
        }
    if(itsSensorSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensorSystem");
            const CommunicationSystem* p_CommunicationSystem = itsSensorSystem->getItsCommunicationSystem();
            if(p_CommunicationSystem != NULL)
                {
                    itsSensorSystem->__setItsCommunicationSystem(NULL);
                }
            itsSensorSystem = NULL;
        }
}

void CommunicationSystem::__setItsSGCS(SGCS* const p_SGCS) {
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

void CommunicationSystem::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsCommunicationSystem(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void CommunicationSystem::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

void CommunicationSystem::__setItsSensorSystem(SensorSystem* const p_SensorSystem) {
    itsSensorSystem = p_SensorSystem;
    if(p_SensorSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensorSystem", p_SensorSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensorSystem");
        }
}

void CommunicationSystem::_setItsSensorSystem(SensorSystem* const p_SensorSystem) {
    if(itsSensorSystem != NULL)
        {
            itsSensorSystem->__setItsCommunicationSystem(NULL);
        }
    __setItsSensorSystem(p_SensorSystem);
}

void CommunicationSystem::_clearItsSensorSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSensorSystem");
    itsSensorSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationSystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("vehiclelocation", x2String(myReal->vehiclelocation));
    aomsAttributes->addAttribute("Binlocation", x2String(myReal->Binlocation));
    aomsAttributes->addAttribute("binfilllevel", x2String(myReal->binfilllevel));
}

void OMAnimatedCommunicationSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
    aomsRelations->addRelation("itsNotification", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNotification);
    aomsRelations->addRelation("itsUC_RecieveDataFromSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_RecieveDataFromSensor);
    aomsRelations->addRelation("itsUC_SendDataToServer", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_SendDataToServer);
    aomsRelations->addRelation("itsSensorSystem", false, true);
    if(myReal->itsSensorSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensorSystem);
        }
}
//#]

IMPLEMENT_META_P(CommunicationSystem, Default, Default, false, OMAnimatedCommunicationSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.cpp
*********************************************************************/
