/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_MonitorFillLevel
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorFillLevel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_MonitorFillLevel.h"
//#[ ignore
#define SGCS_USECASE_UC_MonitorFillLevel_UC_MonitorFillLevel_SERIALIZE OM_NO_OP

#define SGCS_USECASE_UC_MonitorFillLevel_fillOverflow_SERIALIZE OM_NO_OP

#define SGCS_USECASE_UC_MonitorFillLevel_showFillLevel_SERIALIZE OM_NO_OP
//#]

//## package SGCS_USECASE

//## class UC_MonitorFillLevel
UC_MonitorFillLevel::UC_MonitorFillLevel(void) : OMThread(), OMReactive(), fillLevel(0), maxFillLevel(100), recyclable(true), volume(0) {
    NOTIFY_ACTIVE_CONSTRUCTOR(UC_MonitorFillLevel, UC_MonitorFillLevel(), 0, SGCS_USECASE_UC_MonitorFillLevel_UC_MonitorFillLevel_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
}

UC_MonitorFillLevel::~UC_MonitorFillLevel(void) {
    NOTIFY_DESTRUCTOR(~UC_MonitorFillLevel, true);
}

void UC_MonitorFillLevel::fillOverflow(void) {
    NOTIFY_OPERATION(fillOverflow, fillOverflow(), 0, SGCS_USECASE_UC_MonitorFillLevel_fillOverflow_SERIALIZE);
    //#[ operation fillOverflow()
    std::cout << "reach maximun capacity" << std::endl;
    //#]
}

void UC_MonitorFillLevel::showFillLevel(void) {
    NOTIFY_OPERATION(showFillLevel, showFillLevel(), 0, SGCS_USECASE_UC_MonitorFillLevel_showFillLevel_SERIALIZE);
    //#[ operation showFillLevel()
    //std::cout << "Fill Level: " << fillLevel << std::endl;
    //#]
}

const int UC_MonitorFillLevel::getFillLevel(void) const {
    return fillLevel;
}

void UC_MonitorFillLevel::setFillLevel(const int p_fillLevel) {
    fillLevel = p_fillLevel;
}

const int UC_MonitorFillLevel::getMaxFillLevel(void) const {
    return maxFillLevel;
}

void UC_MonitorFillLevel::setMaxFillLevel(const int p_maxFillLevel) {
    maxFillLevel = p_maxFillLevel;
}

const bool UC_MonitorFillLevel::getRecyclable(void) const {
    return recyclable;
}

void UC_MonitorFillLevel::setRecyclable(const bool p_recyclable) {
    recyclable = p_recyclable;
}

const int UC_MonitorFillLevel::getVolume(void) const {
    return volume;
}

void UC_MonitorFillLevel::setVolume(const int p_volume) {
    volume = p_volume;
}

bool UC_MonitorFillLevel::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void UC_MonitorFillLevel::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void UC_MonitorFillLevel::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.WaitForDetecting");
        rootState_subState = WaitForDetecting;
        rootState_active = WaitForDetecting;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC_MonitorFillLevel::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State WaitForDetecting
        case WaitForDetecting:
        {
            if(IS_EVENT_TYPE_OF(evLitterGenerated_SGCS_USECASE_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.WaitForDetecting");
                    NOTIFY_STATE_ENTERED("ROOT.Activate");
                    pushNullTransition();
                    rootState_subState = Activate;
                    rootState_active = Activate;
                    //#[ state Activate.(Entry) 
                    std::cout << "I am fine" << std::endl;
                    //setVolume(itsUC_Littering->getVolume());
                    //setRecyclable(itsUC_Littering->getRecyclable());
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State UpdateFillLevel
        case UpdateFillLevel:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.UpdateFillLevel");
                    NOTIFY_STATE_ENTERED("ROOT.ShowFillLevel");
                    pushNullTransition();
                    rootState_subState = ShowFillLevel;
                    rootState_active = ShowFillLevel;
                    //#[ state ShowFillLevel.(Entry) 
                    showFillLevel();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State FillOverFlow
        case FillOverFlow:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.FillOverFlow");
                    NOTIFY_STATE_ENTERED("ROOT.ShowFillLevel");
                    pushNullTransition();
                    rootState_subState = ShowFillLevel;
                    rootState_active = ShowFillLevel;
                    //#[ state ShowFillLevel.(Entry) 
                    showFillLevel();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ShowFillLevel
        case ShowFillLevel:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ShowFillLevel");
                    NOTIFY_STATE_ENTERED("ROOT.WaitForDetecting");
                    rootState_subState = WaitForDetecting;
                    rootState_active = WaitForDetecting;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Activate
        case Activate:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 1 
                    if(fillLevel + volume <= maxFillLevel)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.Activate");
                            NOTIFY_STATE_ENTERED("ROOT.UpdateFillLevel");
                            pushNullTransition();
                            rootState_subState = UpdateFillLevel;
                            rootState_active = UpdateFillLevel;
                            //#[ state UpdateFillLevel.(Entry) 
                            //setFillLevel(fillLevel+volume);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 2 
                            if(fillLevel + volume > maxFillLevel)
                                {
                                    NOTIFY_TRANSITION_STARTED("2");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.Activate");
                                    NOTIFY_STATE_ENTERED("ROOT.FillOverFlow");
                                    pushNullTransition();
                                    rootState_subState = FillOverFlow;
                                    rootState_active = FillOverFlow;
                                    //#[ state FillOverFlow.(Entry) 
                                    fillOverflow();
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("2");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_MonitorFillLevel::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("volume", x2String(myReal->volume));
    aomsAttributes->addAttribute("recyclable", x2String(myReal->recyclable));
    aomsAttributes->addAttribute("maxFillLevel", x2String(myReal->maxFillLevel));
    aomsAttributes->addAttribute("fillLevel", x2String(myReal->fillLevel));
}

void OMAnimatedUC_MonitorFillLevel::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC_MonitorFillLevel::WaitForDetecting:
        {
            WaitForDetecting_serializeStates(aomsState);
        }
        break;
        case UC_MonitorFillLevel::UpdateFillLevel:
        {
            UpdateFillLevel_serializeStates(aomsState);
        }
        break;
        case UC_MonitorFillLevel::FillOverFlow:
        {
            FillOverFlow_serializeStates(aomsState);
        }
        break;
        case UC_MonitorFillLevel::ShowFillLevel:
        {
            ShowFillLevel_serializeStates(aomsState);
        }
        break;
        case UC_MonitorFillLevel::Activate:
        {
            Activate_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_MonitorFillLevel::WaitForDetecting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.WaitForDetecting");
}

void OMAnimatedUC_MonitorFillLevel::UpdateFillLevel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.UpdateFillLevel");
}

void OMAnimatedUC_MonitorFillLevel::ShowFillLevel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ShowFillLevel");
}

void OMAnimatedUC_MonitorFillLevel::FillOverFlow_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FillOverFlow");
}

void OMAnimatedUC_MonitorFillLevel::Activate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Activate");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_MonitorFillLevel, SGCS_USECASE, SGCS_USECASE, false, OMAnimatedUC_MonitorFillLevel)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorFillLevel.cpp
*********************************************************************/
