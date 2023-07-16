/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GarbageBin
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GarbageBin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GarbageBin.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_GarbageBin_GarbageBin_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class GarbageBin
GarbageBin::GarbageBin(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(GarbageBin, GarbageBin(), 0, Default_GarbageBin_GarbageBin_SERIALIZE);
}

GarbageBin::~GarbageBin(void) {
    NOTIFY_DESTRUCTOR(~GarbageBin, true);
    cleanUpRelations();
}

const SGCS* GarbageBin::getItsSGCS(void) const {
    return itsSGCS;
}

void GarbageBin::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsGarbageBin(this);
        }
    _setItsSGCS(p_SGCS);
}

void GarbageBin::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const GarbageBin* p_GarbageBin = itsSGCS->getItsGarbageBin();
            if(p_GarbageBin != NULL)
                {
                    itsSGCS->__setItsGarbageBin(NULL);
                }
            itsSGCS = NULL;
        }
}

void GarbageBin::__setItsSGCS(SGCS* const p_SGCS) {
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

void GarbageBin::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsGarbageBin(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void GarbageBin::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGarbageBin::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(GarbageBin, Default, Default, false, OMAnimatedGarbageBin)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GarbageBin.cpp
*********************************************************************/
