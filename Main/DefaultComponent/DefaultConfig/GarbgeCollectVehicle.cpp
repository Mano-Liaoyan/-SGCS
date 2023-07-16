/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GarbgeCollectVehicle
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GarbgeCollectVehicle.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GarbgeCollectVehicle.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_GarbgeCollectVehicle_GarbgeCollectVehicle_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class GarbgeCollectVehicle
GarbgeCollectVehicle::GarbgeCollectVehicle(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(GarbgeCollectVehicle, GarbgeCollectVehicle(), 0, Default_GarbgeCollectVehicle_GarbgeCollectVehicle_SERIALIZE);
}

GarbgeCollectVehicle::~GarbgeCollectVehicle(void) {
    NOTIFY_DESTRUCTOR(~GarbgeCollectVehicle, true);
    cleanUpRelations();
}

const SGCS* GarbgeCollectVehicle::getItsSGCS(void) const {
    return itsSGCS;
}

void GarbgeCollectVehicle::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsGarbgeCollectVehicle(this);
        }
    _setItsSGCS(p_SGCS);
}

void GarbgeCollectVehicle::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const GarbgeCollectVehicle* p_GarbgeCollectVehicle = itsSGCS->getItsGarbgeCollectVehicle();
            if(p_GarbgeCollectVehicle != NULL)
                {
                    itsSGCS->__setItsGarbgeCollectVehicle(NULL);
                }
            itsSGCS = NULL;
        }
}

void GarbgeCollectVehicle::__setItsSGCS(SGCS* const p_SGCS) {
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

void GarbgeCollectVehicle::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsGarbgeCollectVehicle(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void GarbgeCollectVehicle::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGarbgeCollectVehicle::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(GarbgeCollectVehicle, Default, Default, false, OMAnimatedGarbgeCollectVehicle)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GarbgeCollectVehicle.cpp
*********************************************************************/
