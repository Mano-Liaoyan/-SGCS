/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GerographicInformationSystem
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GerographicInformationSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GerographicInformationSystem.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_GerographicInformationSystem_GerographicInformationSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class GerographicInformationSystem
GerographicInformationSystem::GerographicInformationSystem(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(GerographicInformationSystem, GerographicInformationSystem(), 0, Default_GerographicInformationSystem_GerographicInformationSystem_SERIALIZE);
}

GerographicInformationSystem::~GerographicInformationSystem(void) {
    NOTIFY_DESTRUCTOR(~GerographicInformationSystem, true);
    cleanUpRelations();
}

const SGCS* GerographicInformationSystem::getItsSGCS(void) const {
    return itsSGCS;
}

void GerographicInformationSystem::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsGerographicInformationSystem(this);
        }
    _setItsSGCS(p_SGCS);
}

void GerographicInformationSystem::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const GerographicInformationSystem* p_GerographicInformationSystem = itsSGCS->getItsGerographicInformationSystem();
            if(p_GerographicInformationSystem != NULL)
                {
                    itsSGCS->__setItsGerographicInformationSystem(NULL);
                }
            itsSGCS = NULL;
        }
}

void GerographicInformationSystem::__setItsSGCS(SGCS* const p_SGCS) {
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

void GerographicInformationSystem::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsGerographicInformationSystem(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void GerographicInformationSystem::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGerographicInformationSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(GerographicInformationSystem, Default, Default, false, OMAnimatedGerographicInformationSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GerographicInformationSystem.cpp
*********************************************************************/
