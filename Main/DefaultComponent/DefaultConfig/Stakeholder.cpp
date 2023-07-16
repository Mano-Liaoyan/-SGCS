/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Stakeholder
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Stakeholder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Stakeholder.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_Stakeholder_Stakeholder_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Stakeholder
Stakeholder::Stakeholder(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Stakeholder, Stakeholder(), 0, Default_Stakeholder_Stakeholder_SERIALIZE);
}

Stakeholder::~Stakeholder(void) {
    NOTIFY_DESTRUCTOR(~Stakeholder, true);
    cleanUpRelations();
}

const SGCS* Stakeholder::getItsSGCS(void) const {
    return itsSGCS;
}

void Stakeholder::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsStakeholder(this);
        }
    _setItsSGCS(p_SGCS);
}

void Stakeholder::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Stakeholder* p_Stakeholder = itsSGCS->getItsStakeholder();
            if(p_Stakeholder != NULL)
                {
                    itsSGCS->__setItsStakeholder(NULL);
                }
            itsSGCS = NULL;
        }
}

void Stakeholder::__setItsSGCS(SGCS* const p_SGCS) {
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

void Stakeholder::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsStakeholder(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Stakeholder::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStakeholder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Stakeholder, Default, Default, false, OMAnimatedStakeholder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Stakeholder.cpp
*********************************************************************/
