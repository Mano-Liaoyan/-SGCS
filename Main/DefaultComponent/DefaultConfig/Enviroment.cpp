/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
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
Enviroment::Enviroment(IOxfActive* const theActiveContext) : OMReactive(), itsSGCS(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Enviroment, Enviroment(), 0, Default_Enviroment_Enviroment_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            LitteringB.setShouldDelete(false);
        }
        {
            binB.setShouldDelete(false);
        }
        {
            binA.setShouldDelete(false);
        }
        {
            binC.setShouldDelete(false);
        }
        {
            LitteringA.setShouldDelete(false);
        }
        {
            LitteringC.setShouldDelete(false);
        }
    }
}

Enviroment::~Enviroment(void) {
    NOTIFY_DESTRUCTOR(~Enviroment, true);
    cleanUpRelations();
}

const UC_Littering* Enviroment::getLitteringA(void) const {
    return &LitteringA;
}

const UC_Littering* Enviroment::getLitteringB(void) const {
    return &LitteringB;
}

const UC_Littering* Enviroment::getLitteringC(void) const {
    return &LitteringC;
}

const UC_MonitorFillLevel* Enviroment::getBinA(void) const {
    return &binA;
}

const UC_MonitorFillLevel* Enviroment::getBinB(void) const {
    return &binB;
}

const UC_MonitorFillLevel* Enviroment::getBinC(void) const {
    return &binC;
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

bool Enviroment::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = LitteringA.startBehavior();
        }
    if(done == true)
        {
            done = LitteringB.startBehavior();
        }
    if(done == true)
        {
            done = LitteringC.startBehavior();
        }
    if(done == true)
        {
            done = binA.startBehavior();
        }
    if(done == true)
        {
            done = binB.startBehavior();
        }
    if(done == true)
        {
            done = binC.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
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

void Enviroment::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        LitteringB.setActiveContext(theActiveContext, false);
        LitteringA.setActiveContext(theActiveContext, false);
        LitteringC.setActiveContext(theActiveContext, false);
    }
}

void Enviroment::destroy(void) {
    LitteringA.destroy();
    LitteringB.destroy();
    LitteringC.destroy();
    binA.destroy();
    binB.destroy();
    binC.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnviroment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
    aomsRelations->addRelation("LitteringB", true, true);
    aomsRelations->ADD_ITEM(&myReal->LitteringB);
    aomsRelations->addRelation("binB", true, true);
    aomsRelations->ADD_ITEM(&myReal->binB);
    aomsRelations->addRelation("binA", true, true);
    aomsRelations->ADD_ITEM(&myReal->binA);
    aomsRelations->addRelation("binC", true, true);
    aomsRelations->ADD_ITEM(&myReal->binC);
    aomsRelations->addRelation("LitteringA", true, true);
    aomsRelations->ADD_ITEM(&myReal->LitteringA);
    aomsRelations->addRelation("LitteringC", true, true);
    aomsRelations->ADD_ITEM(&myReal->LitteringC);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(Enviroment, Default, Default, false, OMAnimatedEnviroment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Enviroment.cpp
*********************************************************************/
