/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Regulations
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Regulations.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Regulations.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_Regulations_Regulations_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Regulations
Regulations::Regulations(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(Regulations, Regulations(), 0, Default_Regulations_Regulations_SERIALIZE);
}

Regulations::~Regulations(void) {
    NOTIFY_DESTRUCTOR(~Regulations, true);
    cleanUpRelations();
}

const SGCS* Regulations::getItsSGCS(void) const {
    return itsSGCS;
}

void Regulations::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsRegulations(this);
        }
    _setItsSGCS(p_SGCS);
}

void Regulations::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const Regulations* p_Regulations = itsSGCS->getItsRegulations();
            if(p_Regulations != NULL)
                {
                    itsSGCS->__setItsRegulations(NULL);
                }
            itsSGCS = NULL;
        }
}

void Regulations::__setItsSGCS(SGCS* const p_SGCS) {
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

void Regulations::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsRegulations(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void Regulations::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRegulations::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(Regulations, Default, Default, false, OMAnimatedRegulations)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Regulations.cpp
*********************************************************************/
