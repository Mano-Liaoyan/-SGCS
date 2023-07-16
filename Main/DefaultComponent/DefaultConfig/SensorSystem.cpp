/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorSystem
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SensorSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorSystem.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_SensorSystem_SensorSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SensorSystem
SensorSystem::SensorSystem(void) : locationX(0.0), locationY(0.0), temp(273), itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(SensorSystem, SensorSystem(), 0, Default_SensorSystem_SensorSystem_SERIALIZE);
}

SensorSystem::~SensorSystem(void) {
    NOTIFY_DESTRUCTOR(~SensorSystem, true);
    cleanUpRelations();
}

const float SensorSystem::getLocationX(void) const {
    return locationX;
}

void SensorSystem::setLocationX(const float p_locationX) {
    locationX = p_locationX;
}

const float SensorSystem::getLocationY(void) const {
    return locationY;
}

void SensorSystem::setLocationY(const float p_locationY) {
    locationY = p_locationY;
}

const float SensorSystem::getTemp(void) const {
    return temp;
}

void SensorSystem::setTemp(const float p_temp) {
    temp = p_temp;
}

const SGCS* SensorSystem::getItsSGCS(void) const {
    return itsSGCS;
}

void SensorSystem::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_setItsSensorSystem(this);
        }
    _setItsSGCS(p_SGCS);
}

void SensorSystem::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            const SensorSystem* p_SensorSystem = itsSGCS->getItsSensorSystem();
            if(p_SensorSystem != NULL)
                {
                    itsSGCS->__setItsSensorSystem(NULL);
                }
            itsSGCS = NULL;
        }
}

void SensorSystem::__setItsSGCS(SGCS* const p_SGCS) {
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

void SensorSystem::_setItsSGCS(SGCS* const p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->__setItsSensorSystem(NULL);
        }
    __setItsSGCS(p_SGCS);
}

void SensorSystem::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorSystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("locationX", x2String(myReal->locationX));
    aomsAttributes->addAttribute("locationY", x2String(myReal->locationY));
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
}

void OMAnimatedSensorSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(SensorSystem, Default, Default, false, OMAnimatedSensorSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorSystem.cpp
*********************************************************************/
