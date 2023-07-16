/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CloudPlatform
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CloudPlatform.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CloudPlatform.h"
//## link itsCentralServer
#include "CentralServer.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_CloudPlatform_CloudPlatform_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CloudPlatform
CloudPlatform::CloudPlatform(void) : itsCentralServer(NULL), itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(CloudPlatform, CloudPlatform(), 0, Default_CloudPlatform_CloudPlatform_SERIALIZE);
}

CloudPlatform::~CloudPlatform(void) {
    NOTIFY_DESTRUCTOR(~CloudPlatform, true);
    cleanUpRelations();
}

const UC_MonitorDashBoard* CloudPlatform::getUC_MonitorDashBoard(void) const {
    return &UC_MonitorDashBoard;
}

const CentralServer* CloudPlatform::getItsCentralServer(void) const {
    return itsCentralServer;
}

void CloudPlatform::setItsCentralServer(CentralServer* const p_CentralServer) {
    if(p_CentralServer != NULL)
        {
            p_CentralServer->_setItsCloudPlatform(this);
        }
    _setItsCentralServer(p_CentralServer);
}

const SGCS* CloudPlatform::getItsSGCS(void) const {
    return itsSGCS;
}

void CloudPlatform::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsCloudPlatform(this);
        }
    _setItsSGCS(p_SGCS);
}

const UC_MonitorDataUsingMobileApp* CloudPlatform::getItsUC_MonitorDataUsingMobileApp(void) const {
    return &itsUC_MonitorDataUsingMobileApp;
}

void CloudPlatform::cleanUpRelations(void) {
    if(itsCentralServer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCentralServer");
            const CloudPlatform* p_CloudPlatform = itsCentralServer->getItsCloudPlatform();
            if(p_CloudPlatform != NULL)
                {
                    itsCentralServer->__setItsCloudPlatform(NULL);
                }
            itsCentralServer = NULL;
        }
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const CloudPlatform* p_CloudPlatform = itsSGCS->getItsCloudPlatform();
            if(p_CloudPlatform != NULL)
                {
                    itsSGCS->__setItsCloudPlatform(NULL);
                }
            itsSGCS = NULL;
        }
}

void CloudPlatform::__setItsCentralServer(CentralServer* const p_CentralServer) {
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

void CloudPlatform::_setItsCentralServer(CentralServer* const p_CentralServer) {
    if(itsCentralServer != NULL)
        {
            itsCentralServer->__setItsCloudPlatform(NULL);
        }
    __setItsCentralServer(p_CentralServer);
}

void CloudPlatform::_clearItsCentralServer(void) {
    NOTIFY_RELATION_CLEARED("itsCentralServer");
    itsCentralServer = NULL;
}

void CloudPlatform::__setItsSGCS(SGCS* const p_SGCS) {
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

void CloudPlatform::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsCloudPlatform(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void CloudPlatform::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCloudPlatform::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
    aomsRelations->addRelation("itsCentralServer", false, true);
    if(myReal->itsCentralServer)
        {
            aomsRelations->ADD_ITEM(myReal->itsCentralServer);
        }
    aomsRelations->addRelation("itsUC_MonitorDataUsingMobileApp", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsUC_MonitorDataUsingMobileApp);
    aomsRelations->addRelation("UC_MonitorDashBoard", true, true);
    aomsRelations->ADD_ITEM(&myReal->UC_MonitorDashBoard);
}
//#]

IMPLEMENT_META_P(CloudPlatform, Default, Default, false, OMAnimatedCloudPlatform)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CloudPlatform.cpp
*********************************************************************/
