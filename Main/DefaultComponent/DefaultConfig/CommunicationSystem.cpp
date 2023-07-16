/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
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
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_CommunicationSystem_CommunicationSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CommunicationSystem
CommunicationSystem::CommunicationSystem(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(CommunicationSystem, CommunicationSystem(), 0, Default_CommunicationSystem_CommunicationSystem_SERIALIZE);
}

CommunicationSystem::~CommunicationSystem(void) {
    NOTIFY_DESTRUCTOR(~CommunicationSystem, true);
    cleanUpRelations();
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(CommunicationSystem, Default, Default, false, OMAnimatedCommunicationSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.cpp
*********************************************************************/
