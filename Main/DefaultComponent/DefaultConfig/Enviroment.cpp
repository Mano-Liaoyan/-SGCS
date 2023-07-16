/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Enviroment
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Enviroment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Enviroment.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_Enviroment_Enviroment_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Enviroment
Enviroment::Enviroment(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Enviroment, Enviroment(), 0, Default_Enviroment_Enviroment_SERIALIZE);
}

Enviroment::~Enviroment(void) {
    NOTIFY_DESTRUCTOR(~Enviroment, true);
    cleanUpRelations();
}

const SGCS* Enviroment::getItsSGCS(void) const {
    return itsSGCS;
}

void Enviroment::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsEnviroment(this);
        }
    _setItsSGCS(p_SGCS);
}

void Enviroment::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Enviroment* p_Enviroment = itsSGCS->getItsEnviroment();
            if(p_Enviroment != NULL)
                {
                    itsSGCS->__setItsEnviroment(NULL);
                }
            itsSGCS = NULL;
        }
}

void Enviroment::__setItsSGCS(SGCS* const p_SGCS) {
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

void Enviroment::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsEnviroment(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Enviroment::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnviroment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Enviroment, Default, Default, false, OMAnimatedEnviroment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Enviroment.cpp
*********************************************************************/
