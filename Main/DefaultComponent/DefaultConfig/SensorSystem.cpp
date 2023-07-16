/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
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
//## link itsCommunicationSystem
#include "CommunicationSystem.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define Default_SensorSystem_SensorSystem_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SensorSystem
SensorSystem::SensorSystem(void) : fillleve(0), locationX(0.0), locationY(0.0), temp(273), itsCommunicationSystem(NULL), itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(SensorSystem, SensorSystem(), 0, Default_SensorSystem_SensorSystem_SERIALIZE);
}

SensorSystem::~SensorSystem(void) {
    NOTIFY_DESTRUCTOR(~SensorSystem, true);
    cleanUpRelations();
}

const float SensorSystem::getFillleve(void) const {
    return fillleve;
}

void SensorSystem::setFillleve(const float p_fillleve) {
    fillleve = p_fillleve;
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

const Battery* SensorSystem::getItsBattery(void) const {
    return &itsBattery;
}

const CommunicationSystem* SensorSystem::getItsCommunicationSystem(void) const {
    return itsCommunicationSystem;
}

void SensorSystem::setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    if(p_CommunicationSystem != NULL)
        {
            p_CommunicationSystem->_setItsSensorSystem(this);
        }
    _setItsCommunicationSystem(p_CommunicationSystem);
}

const FillLevelSensor* SensorSystem::getItsFillLevelSensor(void) const {
    return &itsFillLevelSensor;
}

const GPSTracker* SensorSystem::getItsGPSTracker(void) const {
    return &itsGPSTracker;
}

const HumiditySensor* SensorSystem::getItsHumiditySensor(void) const {
    return &itsHumiditySensor;
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

const TemperatureSensor* SensorSystem::getItsTemperatureSensor(void) const {
    return &itsTemperatureSensor;
}

const WIFIBlock* SensorSystem::getItsWIFIBlock(void) const {
    return &itsWIFIBlock;
}

void SensorSystem::cleanUpRelations(void) {
    if(itsCommunicationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
            const SensorSystem* p_SensorSystem = itsCommunicationSystem->getItsSensorSystem();
            if(p_SensorSystem != NULL)
                {
                    itsCommunicationSystem->__setItsSensorSystem(NULL);
                }
            itsCommunicationSystem = NULL;
        }
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

void SensorSystem::__setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    itsCommunicationSystem = p_CommunicationSystem;
    if(p_CommunicationSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunicationSystem", p_CommunicationSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
        }
}

void SensorSystem::_setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    if(itsCommunicationSystem != NULL)
        {
            itsCommunicationSystem->__setItsSensorSystem(NULL);
        }
    __setItsCommunicationSystem(p_CommunicationSystem);
}

void SensorSystem::_clearItsCommunicationSystem(void) {
    NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
    itsCommunicationSystem = NULL;
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
    aomsAttributes->addAttribute("fillleve", x2String(myReal->fillleve));
}

void OMAnimatedSensorSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
    aomsRelations->addRelation("itsWIFIBlock", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWIFIBlock);
    aomsRelations->addRelation("itsHumiditySensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsHumiditySensor);
    aomsRelations->addRelation("itsTemperatureSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTemperatureSensor);
    aomsRelations->addRelation("itsBattery", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsBattery);
    aomsRelations->addRelation("itsFillLevelSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsFillLevelSensor);
    aomsRelations->addRelation("itsGPSTracker", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGPSTracker);
    aomsRelations->addRelation("itsCommunicationSystem", false, true);
    if(myReal->itsCommunicationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunicationSystem);
        }
}
//#]

IMPLEMENT_META_P(SensorSystem, Default, Default, false, OMAnimatedSensorSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorSystem.cpp
*********************************************************************/
