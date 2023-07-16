/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_Littering
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_Littering.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UC_Littering.h"
//## link itsUC_MonitorFillLevel
#include "UC_MonitorFillLevel.h"
//#[ ignore
#define SGCS_USECASE_UC_Littering_UC_Littering_SERIALIZE OM_NO_OP
//#]

//## package SGCS_USECASE

//## class UC_Littering
UC_Littering::UC_Littering(IOxfActive* const theActiveContext) : OMReactive(), volume(30), itsUC_MonitorFillLevel(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_Littering, UC_Littering(), 0, SGCS_USECASE_UC_Littering_UC_Littering_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

UC_Littering::~UC_Littering(void) {
    NOTIFY_DESTRUCTOR(~UC_Littering, true);
    cleanUpRelations();
}

const char* UC_Littering::getType(void) const {
    return type;
}

void UC_Littering::setType(char* const p_type) {
    type = p_type;
}

const int UC_Littering::getVolume(void) const {
    return volume;
}

void UC_Littering::setVolume(const int p_volume) {
    volume = p_volume;
}

const UC_MonitorFillLevel* UC_Littering::getItsUC_MonitorFillLevel(void) const {
    return itsUC_MonitorFillLevel;
}

void UC_Littering::setItsUC_MonitorFillLevel(UC_MonitorFillLevel* const p_UC_MonitorFillLevel) {
    if(p_UC_MonitorFillLevel != NULL)
        {
            p_UC_MonitorFillLevel->_setItsUC_Littering(this);
        }
    _setItsUC_MonitorFillLevel(p_UC_MonitorFillLevel);
}

bool UC_Littering::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_Littering::cleanUpRelations(void) {
    if(itsUC_MonitorFillLevel != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_MonitorFillLevel");
            const UC_Littering* p_UC_Littering = itsUC_MonitorFillLevel->getItsUC_Littering();
            if(p_UC_Littering != NULL)
                {
                    itsUC_MonitorFillLevel->__setItsUC_Littering(NULL);
                }
            itsUC_MonitorFillLevel = NULL;
        }
}

void UC_Littering::__setItsUC_MonitorFillLevel(UC_MonitorFillLevel* const p_UC_MonitorFillLevel) {
    itsUC_MonitorFillLevel = p_UC_MonitorFillLevel;
    if(p_UC_MonitorFillLevel != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_MonitorFillLevel", p_UC_MonitorFillLevel, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_MonitorFillLevel");
        }
}

void UC_Littering::_setItsUC_MonitorFillLevel(UC_MonitorFillLevel* const p_UC_MonitorFillLevel) {
    if(itsUC_MonitorFillLevel != NULL)
        {
            itsUC_MonitorFillLevel->__setItsUC_Littering(NULL);
        }
    __setItsUC_MonitorFillLevel(p_UC_MonitorFillLevel);
}

void UC_Littering::_clearItsUC_MonitorFillLevel(void) {
    NOTIFY_RELATION_CLEARED("itsUC_MonitorFillLevel");
    itsUC_MonitorFillLevel = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_Littering::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("volume", x2String(myReal->volume));
    aomsAttributes->addAttribute("type", x2String(myReal->type));
}

void OMAnimatedUC_Littering::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUC_MonitorFillLevel", false, true);
    if(myReal->itsUC_MonitorFillLevel)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_MonitorFillLevel);
        }
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(UC_Littering, SGCS_USECASE, SGCS_USECASE, false, OMAnimatedUC_Littering)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_Littering.cpp
*********************************************************************/
