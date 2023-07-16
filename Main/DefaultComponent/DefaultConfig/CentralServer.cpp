/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CentralServer
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CentralServer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CentralServer.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_CentralServer_CentralServer_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CentralServer
CentralServer::CentralServer(void) : binfilllevel(0), locationX(0.0), locationY(0.0), itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(CentralServer, CentralServer(), 0, Default_CentralServer_CentralServer_SERIALIZE);
}

CentralServer::~CentralServer(void) {
    NOTIFY_DESTRUCTOR(~CentralServer, true);
    cleanUpRelations();
}

const float CentralServer::getBinfilllevel(void) const {
    return binfilllevel;
}

void CentralServer::setBinfilllevel(const float p_binfilllevel) {
    binfilllevel = p_binfilllevel;
}

const float CentralServer::getLocationX(void) const {
    return locationX;
}

void CentralServer::setLocationX(const float p_locationX) {
    locationX = p_locationX;
}

const float CentralServer::getLocationY(void) const {
    return locationY;
}

void CentralServer::setLocationY(const float p_locationY) {
    locationY = p_locationY;
}

const Notification* CentralServer::getItsNotification(void) const {
    return &itsNotification;
}

const RecieveData* CentralServer::getItsRecieveData(void) const {
    return &itsRecieveData;
}

const SGCS* CentralServer::getItsSGCS(void) const {
    return itsSGCS;
}

void CentralServer::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsCentralServer(this);
        }
    _setItsSGCS(p_SGCS);
}

const UC_ManageData* CentralServer::getItsUC_ManageData(void) const {
    return &itsUC_ManageData;
}

const UC_OpetimizeRoute* CentralServer::getItsUC_OpetimizeRoute(void) const {
    return &itsUC_OpetimizeRoute;
}

const UC_ProcessingData* CentralServer::getItsUC_ProcessingData(void) const {
    return &itsUC_ProcessingData;
}

void CentralServer::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const CentralServer* p_CentralServer = itsSGCS->getItsCentralServer();
            if(p_CentralServer != NULL)
                {
                    itsSGCS->__setItsCentralServer(NULL);
                }
            itsSGCS = NULL;
        }
}

void CentralServer::__setItsSGCS(SGCS* const p_SGCS) {
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

void CentralServer::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsCentralServer(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void CentralServer::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCentralServer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("binfilllevel", x2String(myReal->binfilllevel));
    aomsAttributes->addAttribute("locationX", x2String(myReal->locationX));
    aomsAttributes->addAttribute("locationY", x2String(myReal->locationY));
}

void OMAnimatedCentralServer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
    aomsRelations->addRelation("itsNotification", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsNotification);
    aomsRelations->addRelation("itsRecieveData", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRecieveData);
    aomsRelations->addRelation("itsUC_ManageData", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_ManageData);
    aomsRelations->addRelation("itsUC_ProcessingData", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_ProcessingData);
    aomsRelations->addRelation("itsUC_OpetimizeRoute", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_OpetimizeRoute);
}
//#]

IMPLEMENT_META_P(CentralServer, Default, Default, false, OMAnimatedCentralServer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CentralServer.cpp
*********************************************************************/
