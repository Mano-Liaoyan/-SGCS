/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
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
//## link itsCloudPlatform
#include "CloudPlatform.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_CentralServer_CentralServer_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CentralServer
CentralServer::CentralServer(void) : itsCloudPlatform(NULL), itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(CentralServer, CentralServer(), 0, Default_CentralServer_CentralServer_SERIALIZE);
}

CentralServer::~CentralServer(void) {
    NOTIFY_DESTRUCTOR(~CentralServer, true);
    cleanUpRelations();
}

const CloudPlatform* CentralServer::getItsCloudPlatform(void) const {
    return itsCloudPlatform;
}

void CentralServer::setItsCloudPlatform(CloudPlatform* const p_CloudPlatform) {
    if(p_CloudPlatform != NULL)
        {
            p_CloudPlatform->_setItsCentralServer(this);
        }
    _setItsCloudPlatform(p_CloudPlatform);
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

void CentralServer::cleanUpRelations(void) {
    if(itsCloudPlatform != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCloudPlatform");
            const CentralServer* p_CentralServer = itsCloudPlatform->getItsCentralServer();
            if(p_CentralServer != NULL)
                {
                    itsCloudPlatform->__setItsCentralServer(NULL);
                }
            itsCloudPlatform = NULL;
        }
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

void CentralServer::__setItsCloudPlatform(CloudPlatform* const p_CloudPlatform) {
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

void CentralServer::_setItsCloudPlatform(CloudPlatform* const p_CloudPlatform) {
    if(itsCloudPlatform != NULL)
        {
            itsCloudPlatform->__setItsCentralServer(NULL);
        }
    __setItsCloudPlatform(p_CloudPlatform);
}

void CentralServer::_clearItsCloudPlatform(void) {
    NOTIFY_RELATION_CLEARED("itsCloudPlatform");
    itsCloudPlatform = NULL;
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
void OMAnimatedCentralServer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
    aomsRelations->addRelation("itsCloudPlatform", false, true);
    if(myReal->itsCloudPlatform)
        {
            aomsRelations->ADD_ITEM(myReal->itsCloudPlatform);
        }
}
//#]

IMPLEMENT_META_P(CentralServer, Default, Default, false, OMAnimatedCentralServer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CentralServer.cpp
*********************************************************************/
