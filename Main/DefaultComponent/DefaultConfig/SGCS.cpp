/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SGCS
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SGCS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SGCS.h"
//## link itsCentralServer
#include "CentralServer.h"
//## link itsCloudPlatform
#include "CloudPlatform.h"
//## link itsCommunicationSystem
#include "CommunicationSystem.h"
//## link itsEnviroment
#include "Enviroment.h"
//## link itsGarbageBin
#include "GarbageBin.h"
//## link itsGarbgeCollectVehicle
#include "GarbgeCollectVehicle.h"
//## link itsSensorSystem
#include "SensorSystem.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define Default_SGCS_SGCS_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SGCS
SGCS::SGCS(void) : itsCentralServer(NULL), itsCloudPlatform(NULL), itsCommunicationSystem(NULL), itsEnviroment(NULL), itsGarbageBin(NULL), itsGarbageBin_1(NULL), itsGarbageBin_2(NULL), itsGarbgeCollectVehicle(NULL), itsSensorSystem(NULL) {
    NOTIFY_CONSTRUCTOR(SGCS, SGCS(), 0, Default_SGCS_SGCS_SERIALIZE);
}

SGCS::~SGCS(void) {
    NOTIFY_DESTRUCTOR(~SGCS, true);
    cleanUpRelations();
}

const CentralServer* SGCS::getItsCentralServer(void) const {
    return itsCentralServer;
}

void SGCS::setItsCentralServer(CentralServer* const p_CentralServer) {
    if(p_CentralServer != NULL)
        {
            p_CentralServer->_setItsSGCS(this);
        }
    _setItsCentralServer(p_CentralServer);
}

const CloudPlatform* SGCS::getItsCloudPlatform(void) const {
    return itsCloudPlatform;
}

void SGCS::setItsCloudPlatform(CloudPlatform* const p_CloudPlatform) {
    if(p_CloudPlatform != NULL)
        {
            p_CloudPlatform->_setItsSGCS(this);
        }
    _setItsCloudPlatform(p_CloudPlatform);
}

const CommunicationSystem* SGCS::getItsCommunicationSystem(void) const {
    return itsCommunicationSystem;
}

void SGCS::setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    if(p_CommunicationSystem != NULL)
        {
            p_CommunicationSystem->_setItsSGCS(this);
        }
    _setItsCommunicationSystem(p_CommunicationSystem);
}

const Enviroment* SGCS::getItsEnviroment(void) const {
    return itsEnviroment;
}

void SGCS::setItsEnviroment(Enviroment* const p_Enviroment) {
    if(p_Enviroment != NULL)
        {
            p_Enviroment->_setItsSGCS(this);
        }
    _setItsEnviroment(p_Enviroment);
}

const GarbageBin* SGCS::getItsGarbageBin(void) const {
    return itsGarbageBin;
}

void SGCS::setItsGarbageBin(GarbageBin* const p_GarbageBin) {
    if(p_GarbageBin != NULL)
        {
            p_GarbageBin->_setItsSGCS(this);
        }
    _setItsGarbageBin(p_GarbageBin);
}

const GarbageBin* SGCS::getItsGarbageBin_1(void) const {
    return itsGarbageBin_1;
}

void SGCS::setItsGarbageBin_1(GarbageBin* const p_GarbageBin) {
    itsGarbageBin_1 = p_GarbageBin;
    if(p_GarbageBin != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGarbageBin_1", p_GarbageBin, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGarbageBin_1");
        }
}

const GarbageBin* SGCS::getItsGarbageBin_2(void) const {
    return itsGarbageBin_2;
}

void SGCS::setItsGarbageBin_2(GarbageBin* const p_GarbageBin) {
    itsGarbageBin_2 = p_GarbageBin;
    if(p_GarbageBin != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGarbageBin_2", p_GarbageBin, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGarbageBin_2");
        }
}

const GarbgeCollectVehicle* SGCS::getItsGarbgeCollectVehicle(void) const {
    return itsGarbgeCollectVehicle;
}

void SGCS::setItsGarbgeCollectVehicle(GarbgeCollectVehicle* const p_GarbgeCollectVehicle) {
    if(p_GarbgeCollectVehicle != NULL)
        {
            p_GarbgeCollectVehicle->_setItsSGCS(this);
        }
    _setItsGarbgeCollectVehicle(p_GarbgeCollectVehicle);
}

const SensorSystem* SGCS::getItsSensorSystem(void) const {
    return itsSensorSystem;
}

void SGCS::setItsSensorSystem(SensorSystem* const p_SensorSystem) {
    if(p_SensorSystem != NULL)
        {
            p_SensorSystem->_setItsSGCS(this);
        }
    _setItsSensorSystem(p_SensorSystem);
}

OMIterator<User*> SGCS::getItsUser(void) const {
    OMIterator<User*> iter(itsUser);
    return iter;
}

void SGCS::addItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsSGCS(this);
        }
    _addItsUser(p_User);
}

void SGCS::removeItsUser(User* p_User) {
    if(p_User != NULL)
        {
            p_User->__setItsSGCS(NULL);
        }
    _removeItsUser(p_User);
}

void SGCS::clearItsUser(void) {
    OMIterator<User*> iter(itsUser);
    while (*iter){
        (*iter)->_clearItsSGCS();
        iter++;
    }
    _clearItsUser();
}

void SGCS::cleanUpRelations(void) {
    if(itsCentralServer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCentralServer");
            const SGCS* p_SGCS = itsCentralServer->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsCentralServer->__setItsSGCS(NULL);
                }
            itsCentralServer = NULL;
        }
    if(itsCloudPlatform != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCloudPlatform");
            const SGCS* p_SGCS = itsCloudPlatform->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsCloudPlatform->__setItsSGCS(NULL);
                }
            itsCloudPlatform = NULL;
        }
    if(itsCommunicationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
            const SGCS* p_SGCS = itsCommunicationSystem->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsCommunicationSystem->__setItsSGCS(NULL);
                }
            itsCommunicationSystem = NULL;
        }
    if(itsEnviroment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnviroment");
            const SGCS* p_SGCS = itsEnviroment->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsEnviroment->__setItsSGCS(NULL);
                }
            itsEnviroment = NULL;
        }
    if(itsGarbageBin != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGarbageBin");
            const SGCS* p_SGCS = itsGarbageBin->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsGarbageBin->__setItsSGCS(NULL);
                }
            itsGarbageBin = NULL;
        }
    if(itsGarbageBin_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGarbageBin_1");
            itsGarbageBin_1 = NULL;
        }
    if(itsGarbageBin_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGarbageBin_2");
            itsGarbageBin_2 = NULL;
        }
    if(itsGarbgeCollectVehicle != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGarbgeCollectVehicle");
            const SGCS* p_SGCS = itsGarbgeCollectVehicle->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsGarbgeCollectVehicle->__setItsSGCS(NULL);
                }
            itsGarbgeCollectVehicle = NULL;
        }
    if(itsSensorSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensorSystem");
            const SGCS* p_SGCS = itsSensorSystem->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsSensorSystem->__setItsSGCS(NULL);
                }
            itsSensorSystem = NULL;
        }
    {
        OMIterator<User*> iter(itsUser);
        while (*iter){
            const SGCS* p_SGCS = (*iter)->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    (*iter)->__setItsSGCS(NULL);
                }
            iter++;
        }
        itsUser.removeAll();
    }
}

void SGCS::__setItsCentralServer(CentralServer* const p_CentralServer) {
    itsCentralServer = p_CentralServer;
    if(p_CentralServer != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCentralServer", p_CentralServer, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCentralServer");
        }
}

void SGCS::_setItsCentralServer(CentralServer* const p_CentralServer) {
    if(itsCentralServer != NULL)
        {
            itsCentralServer->__setItsSGCS(NULL);
        }
    __setItsCentralServer(p_CentralServer);
}

void SGCS::_clearItsCentralServer(void) {
    NOTIFY_RELATION_CLEARED("itsCentralServer");
    itsCentralServer = NULL;
}

void SGCS::__setItsCloudPlatform(CloudPlatform* const p_CloudPlatform) {
    itsCloudPlatform = p_CloudPlatform;
    if(p_CloudPlatform != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCloudPlatform", p_CloudPlatform, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCloudPlatform");
        }
}

void SGCS::_setItsCloudPlatform(CloudPlatform* const p_CloudPlatform) {
    if(itsCloudPlatform != NULL)
        {
            itsCloudPlatform->__setItsSGCS(NULL);
        }
    __setItsCloudPlatform(p_CloudPlatform);
}

void SGCS::_clearItsCloudPlatform(void) {
    NOTIFY_RELATION_CLEARED("itsCloudPlatform");
    itsCloudPlatform = NULL;
}

void SGCS::__setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    itsCommunicationSystem = p_CommunicationSystem;
    if(p_CommunicationSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunicationSystem", p_CommunicationSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
        }
}

void SGCS::_setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    if(itsCommunicationSystem != NULL)
        {
            itsCommunicationSystem->__setItsSGCS(NULL);
        }
    __setItsCommunicationSystem(p_CommunicationSystem);
}

void SGCS::_clearItsCommunicationSystem(void) {
    NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
    itsCommunicationSystem = NULL;
}

void SGCS::__setItsEnviroment(Enviroment* const p_Enviroment) {
    itsEnviroment = p_Enviroment;
    if(p_Enviroment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnviroment", p_Enviroment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnviroment");
        }
}

void SGCS::_setItsEnviroment(Enviroment* const p_Enviroment) {
    if(itsEnviroment != NULL)
        {
            itsEnviroment->__setItsSGCS(NULL);
        }
    __setItsEnviroment(p_Enviroment);
}

void SGCS::_clearItsEnviroment(void) {
    NOTIFY_RELATION_CLEARED("itsEnviroment");
    itsEnviroment = NULL;
}

void SGCS::__setItsGarbageBin(GarbageBin* const p_GarbageBin) {
    itsGarbageBin = p_GarbageBin;
    if(p_GarbageBin != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGarbageBin", p_GarbageBin, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGarbageBin");
        }
}

void SGCS::_setItsGarbageBin(GarbageBin* const p_GarbageBin) {
    if(itsGarbageBin != NULL)
        {
            itsGarbageBin->__setItsSGCS(NULL);
        }
    __setItsGarbageBin(p_GarbageBin);
}

void SGCS::_clearItsGarbageBin(void) {
    NOTIFY_RELATION_CLEARED("itsGarbageBin");
    itsGarbageBin = NULL;
}

void SGCS::__setItsGarbgeCollectVehicle(GarbgeCollectVehicle* const p_GarbgeCollectVehicle) {
    itsGarbgeCollectVehicle = p_GarbgeCollectVehicle;
    if(p_GarbgeCollectVehicle != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGarbgeCollectVehicle", p_GarbgeCollectVehicle, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGarbgeCollectVehicle");
        }
}

void SGCS::_setItsGarbgeCollectVehicle(GarbgeCollectVehicle* const p_GarbgeCollectVehicle) {
    if(itsGarbgeCollectVehicle != NULL)
        {
            itsGarbgeCollectVehicle->__setItsSGCS(NULL);
        }
    __setItsGarbgeCollectVehicle(p_GarbgeCollectVehicle);
}

void SGCS::_clearItsGarbgeCollectVehicle(void) {
    NOTIFY_RELATION_CLEARED("itsGarbgeCollectVehicle");
    itsGarbgeCollectVehicle = NULL;
}

void SGCS::__setItsSensorSystem(SensorSystem* const p_SensorSystem) {
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

void SGCS::_setItsSensorSystem(SensorSystem* const p_SensorSystem) {
    if(itsSensorSystem != NULL)
        {
            itsSensorSystem->__setItsSGCS(NULL);
        }
    __setItsSensorSystem(p_SensorSystem);
}

void SGCS::_clearItsSensorSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSensorSystem");
    itsSensorSystem = NULL;
}

void SGCS::_addItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUser", p_User, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUser");
        }
    itsUser.add(p_User);
}

void SGCS::_removeItsUser(User* const p_User) {
    NOTIFY_RELATION_ITEM_REMOVED("itsUser", p_User);
    itsUser.remove(p_User);
}

void SGCS::_clearItsUser(void) {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser.removeAll();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSGCS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEnviroment", false, true);
    if(myReal->itsEnviroment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnviroment);
        }
    aomsRelations->addRelation("itsCommunicationSystem", false, true);
    if(myReal->itsCommunicationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunicationSystem);
        }
    aomsRelations->addRelation("itsCentralServer", false, true);
    if(myReal->itsCentralServer)
        {
            aomsRelations->ADD_ITEM(myReal->itsCentralServer);
        }
    aomsRelations->addRelation("itsCloudPlatform", false, true);
    if(myReal->itsCloudPlatform)
        {
            aomsRelations->ADD_ITEM(myReal->itsCloudPlatform);
        }
    aomsRelations->addRelation("itsGarbageBin_1", false, true);
    if(myReal->itsGarbageBin_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsGarbageBin_1);
        }
    aomsRelations->addRelation("itsGarbageBin_2", false, true);
    if(myReal->itsGarbageBin_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsGarbageBin_2);
        }
    aomsRelations->addRelation("itsGarbgeCollectVehicle", false, true);
    if(myReal->itsGarbgeCollectVehicle)
        {
            aomsRelations->ADD_ITEM(myReal->itsGarbgeCollectVehicle);
        }
    aomsRelations->addRelation("itsSensorSystem", false, true);
    if(myReal->itsSensorSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensorSystem);
        }
    aomsRelations->addRelation("itsGarbageBin", false, true);
    if(myReal->itsGarbageBin)
        {
            aomsRelations->ADD_ITEM(myReal->itsGarbageBin);
        }
    aomsRelations->addRelation("itsUser", false, false);
    {
        OMIterator<User*> iter(myReal->itsUser);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(SGCS, Default, Default, false, OMAnimatedSGCS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SGCS.cpp
*********************************************************************/
