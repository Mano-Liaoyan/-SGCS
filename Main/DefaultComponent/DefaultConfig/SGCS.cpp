/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
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
//## link itsDevices
#include "Devices.h"
//## link itsEnviroment
#include "Enviroment.h"
//## link itsGerographicInformationSystem
#include "GerographicInformationSystem.h"
//## link itsRegulations
#include "Regulations.h"
//## link itsSensorSystem
#include "SensorSystem.h"
//## link itsStakeholder
#include "Stakeholder.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define Default_SGCS_SGCS_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SGCS
SGCS::SGCS(void) : itsCentralServer(NULL), itsCommunicationSystem(NULL), itsDevices(NULL), itsEnviroment(NULL), itsGarbageBin(NULL), itsGarbageBin_1(NULL), itsGarbageBin_2(NULL), itsGarbgeCollectVehicle(NULL), itsGerographicInformationSystem(NULL), itsRegulations(NULL), itsSensorSystem(NULL), itsStakeholder(NULL) {
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

const CentralServer* SGCS::getItsCentralServer_1(void) const {
    return &itsCentralServer_1;
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

const CommunicationSystem* SGCS::getItsCommunicationSystem_1(void) const {
    return &itsCommunicationSystem_1;
}

const Devices* SGCS::getItsDevices(void) const {
    return itsDevices;
}

void SGCS::setItsDevices(Devices* const p_Devices) {
    if(p_Devices != NULL)
        {
            p_Devices->_setItsSGCS(this);
        }
    _setItsDevices(p_Devices);
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

const GarbageBin* SGCS::getItsGarbageBin_3(void) const {
    return &itsGarbageBin_3;
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

const GarbgeCollectVehicle* SGCS::getItsGarbgeCollectVehicle_1(void) const {
    return &itsGarbgeCollectVehicle_1;
}

const GerographicInformationSystem* SGCS::getItsGerographicInformationSystem(void) const {
    return itsGerographicInformationSystem;
}

void SGCS::setItsGerographicInformationSystem(GerographicInformationSystem* const p_GerographicInformationSystem) {
    if(p_GerographicInformationSystem != NULL)
        {
            p_GerographicInformationSystem->_setItsSGCS(this);
        }
    _setItsGerographicInformationSystem(p_GerographicInformationSystem);
}

const Regulations* SGCS::getItsRegulations(void) const {
    return itsRegulations;
}

void SGCS::setItsRegulations(Regulations* const p_Regulations) {
    if(p_Regulations != NULL)
        {
            p_Regulations->_setItsSGCS(this);
        }
    _setItsRegulations(p_Regulations);
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

const Stakeholder* SGCS::getItsStakeholder(void) const {
    return itsStakeholder;
}

void SGCS::setItsStakeholder(Stakeholder* const p_Stakeholder) {
    if(p_Stakeholder != NULL)
        {
            p_Stakeholder->_setItsSGCS(this);
        }
    _setItsStakeholder(p_Stakeholder);
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
    if(itsDevices != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDevices");
            const SGCS* p_SGCS = itsDevices->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsDevices->__setItsSGCS(NULL);
                }
            itsDevices = NULL;
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
    if(itsGerographicInformationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGerographicInformationSystem");
            const SGCS* p_SGCS = itsGerographicInformationSystem->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsGerographicInformationSystem->__setItsSGCS(NULL);
                }
            itsGerographicInformationSystem = NULL;
        }
    if(itsRegulations != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRegulations");
            const SGCS* p_SGCS = itsRegulations->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsRegulations->__setItsSGCS(NULL);
                }
            itsRegulations = NULL;
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
    if(itsStakeholder != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholder");
            const SGCS* p_SGCS = itsStakeholder->getItsSGCS();
            if(p_SGCS != NULL)
                {
                    itsStakeholder->__setItsSGCS(NULL);
                }
            itsStakeholder = NULL;
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

void SGCS::__setItsDevices(Devices* const p_Devices) {
    itsDevices = p_Devices;
    if(p_Devices != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDevices", p_Devices, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDevices");
        }
}

void SGCS::_setItsDevices(Devices* const p_Devices) {
    if(itsDevices != NULL)
        {
            itsDevices->__setItsSGCS(NULL);
        }
    __setItsDevices(p_Devices);
}

void SGCS::_clearItsDevices(void) {
    NOTIFY_RELATION_CLEARED("itsDevices");
    itsDevices = NULL;
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

void SGCS::__setItsGerographicInformationSystem(GerographicInformationSystem* const p_GerographicInformationSystem) {
    itsGerographicInformationSystem = p_GerographicInformationSystem;
    if(p_GerographicInformationSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGerographicInformationSystem", p_GerographicInformationSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGerographicInformationSystem");
        }
}

void SGCS::_setItsGerographicInformationSystem(GerographicInformationSystem* const p_GerographicInformationSystem) {
    if(itsGerographicInformationSystem != NULL)
        {
            itsGerographicInformationSystem->__setItsSGCS(NULL);
        }
    __setItsGerographicInformationSystem(p_GerographicInformationSystem);
}

void SGCS::_clearItsGerographicInformationSystem(void) {
    NOTIFY_RELATION_CLEARED("itsGerographicInformationSystem");
    itsGerographicInformationSystem = NULL;
}

void SGCS::__setItsRegulations(Regulations* const p_Regulations) {
    itsRegulations = p_Regulations;
    if(p_Regulations != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRegulations", p_Regulations, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRegulations");
        }
}

void SGCS::_setItsRegulations(Regulations* const p_Regulations) {
    if(itsRegulations != NULL)
        {
            itsRegulations->__setItsSGCS(NULL);
        }
    __setItsRegulations(p_Regulations);
}

void SGCS::_clearItsRegulations(void) {
    NOTIFY_RELATION_CLEARED("itsRegulations");
    itsRegulations = NULL;
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

void SGCS::__setItsStakeholder(Stakeholder* const p_Stakeholder) {
    itsStakeholder = p_Stakeholder;
    if(p_Stakeholder != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStakeholder", p_Stakeholder, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStakeholder");
        }
}

void SGCS::_setItsStakeholder(Stakeholder* const p_Stakeholder) {
    if(itsStakeholder != NULL)
        {
            itsStakeholder->__setItsSGCS(NULL);
        }
    __setItsStakeholder(p_Stakeholder);
}

void SGCS::_clearItsStakeholder(void) {
    NOTIFY_RELATION_CLEARED("itsStakeholder");
    itsStakeholder = NULL;
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
    aomsRelations->addRelation("itsStakeholder", false, true);
    if(myReal->itsStakeholder)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholder);
        }
    aomsRelations->addRelation("itsDevices", false, true);
    if(myReal->itsDevices)
        {
            aomsRelations->ADD_ITEM(myReal->itsDevices);
        }
    aomsRelations->addRelation("itsGerographicInformationSystem", false, true);
    if(myReal->itsGerographicInformationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsGerographicInformationSystem);
        }
    aomsRelations->addRelation("itsRegulations", false, true);
    if(myReal->itsRegulations)
        {
            aomsRelations->ADD_ITEM(myReal->itsRegulations);
        }
    aomsRelations->addRelation("itsCommunicationSystem_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCommunicationSystem_1);
    aomsRelations->addRelation("itsCentralServer_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCentralServer_1);
    aomsRelations->addRelation("itsGarbageBin_3", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGarbageBin_3);
    aomsRelations->addRelation("itsGarbgeCollectVehicle_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGarbgeCollectVehicle_1);
}
//#]

IMPLEMENT_META_P(SGCS, Default, Default, false, OMAnimatedSGCS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SGCS.cpp
*********************************************************************/
