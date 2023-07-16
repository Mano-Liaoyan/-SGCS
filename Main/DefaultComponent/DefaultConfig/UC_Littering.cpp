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

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_Littering.h"
//#[ ignore
#define SGCS_USECASE_UC_Littering_UC_Littering_SERIALIZE OM_NO_OP

#define SGCS_USECASE_UC_Littering_collectGarbage_SERIALIZE OM_NO_OP

#define SGCS_USECASE_UC_Littering_fillOverflow_SERIALIZE OM_NO_OP

#define SGCS_USECASE_UC_Littering_generateLitter_SERIALIZE OM_NO_OP

#define SGCS_USECASE_UC_Littering_showBinStaus_SERIALIZE OM_NO_OP

#define SGCS_USECASE_UC_Littering_showFillLevel_SERIALIZE OM_NO_OP
//#]

//## package SGCS_USECASE

//## class UC_Littering
UC_Littering::UC_Littering(IOxfActive* const theActiveContext) : OMReactive(), fillLevel(0), maxFillLevel(100), nonRecyclableBin(0), recyclable(false), recyclableBin(0), volume(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_Littering, UC_Littering(), 0, SGCS_USECASE_UC_Littering_UC_Littering_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

UC_Littering::~UC_Littering(void) {
    NOTIFY_DESTRUCTOR(~UC_Littering, true);
    cancelTimeouts();
}

void UC_Littering::collectGarbage(void) {
    NOTIFY_OPERATION(collectGarbage, collectGarbage(), 0, SGCS_USECASE_UC_Littering_collectGarbage_SERIALIZE);
    //#[ operation collectGarbage()
    setFillLevel(fillLevel - 1);
    //#]
}

void UC_Littering::fillOverflow(void) {
    NOTIFY_OPERATION(fillOverflow, fillOverflow(), 0, SGCS_USECASE_UC_Littering_fillOverflow_SERIALIZE);
    //#[ operation fillOverflow()
    std::cout << "reach maximun capacity" << std::endl;
    //#]
}

void UC_Littering::generateLitter(void) {
    NOTIFY_OPERATION(generateLitter, generateLitter(), 0, SGCS_USECASE_UC_Littering_generateLitter_SERIALIZE);
    //#[ operation generateLitter()
    int rdv = rand() % 20 + 1;
    setVolume(rdv);
    if (rdv <= 10) setRecyclable(true);
    else setRecyclable(false);
    
    std::cout << volume << " " << recyclable << std::endl;
    //#]
}

void UC_Littering::showBinStaus(void) {
    NOTIFY_OPERATION(showBinStaus, showBinStaus(), 0, SGCS_USECASE_UC_Littering_showBinStaus_SERIALIZE);
    //#[ operation showBinStaus()
    std::cout << "Recyclable Bin: "<< recyclableBin << " None RecyclableBin: "<< nonRecyclableBin << std::endl;
    //#]
}

void UC_Littering::showFillLevel(void) {
    NOTIFY_OPERATION(showFillLevel, showFillLevel(), 0, SGCS_USECASE_UC_Littering_showFillLevel_SERIALIZE);
    //#[ operation showFillLevel()
    std::cout << "Fill Level: " << fillLevel << std::endl;
    //#]
}

const int UC_Littering::getFillLevel(void) const {
    return fillLevel;
}

void UC_Littering::setFillLevel(const int p_fillLevel) {
    fillLevel = p_fillLevel;
    NOTIFY_SET_OPERATION;
}

const int UC_Littering::getMaxFillLevel(void) const {
    return maxFillLevel;
}

void UC_Littering::setMaxFillLevel(const int p_maxFillLevel) {
    maxFillLevel = p_maxFillLevel;
}

const int UC_Littering::getNonRecyclableBin(void) const {
    return nonRecyclableBin;
}

void UC_Littering::setNonRecyclableBin(const int p_nonRecyclableBin) {
    nonRecyclableBin = p_nonRecyclableBin;
    NOTIFY_SET_OPERATION;
}

const bool UC_Littering::getRecyclable(void) const {
    return recyclable;
}

void UC_Littering::setRecyclable(const bool p_recyclable) {
    recyclable = p_recyclable;
}

const int UC_Littering::getRecyclableBin(void) const {
    return recyclableBin;
}

void UC_Littering::setRecyclableBin(const int p_recyclableBin) {
    recyclableBin = p_recyclableBin;
    NOTIFY_SET_OPERATION;
}

const int UC_Littering::getVolume(void) const {
    return volume;
}

void UC_Littering::setVolume(const int p_volume) {
    volume = p_volume;
}

bool UC_Littering::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Littering_timeout == arg)
        {
            Littering_timeout = NULL;
            res = true;
        }
    if(Collecting_timeout == arg)
        {
            Collecting_timeout = NULL;
            res = true;
        }
    return res;
}

bool UC_Littering::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_Littering::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_9_subState = OMNonState;
    state_9_active = OMNonState;
    Littering_subState = OMNonState;
    Littering_timeout = NULL;
    state_28_subState = OMNonState;
    state_28_active = OMNonState;
    Collecting_subState = OMNonState;
    Collecting_timeout = NULL;
    state_20_subState = OMNonState;
    state_20_active = OMNonState;
    Sorting_subState = OMNonState;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
    Detecting_subState = OMNonState;
}

void UC_Littering::cancelTimeouts(void) {
    cancel(Littering_timeout);
    cancel(Collecting_timeout);
}

void UC_Littering::rootStateEntDef(void) {
    NOTIFY_TRANSITION_STARTED("14");
    NOTIFY_STATE_ENTERED("ROOT.SGCS");
    rootState_subState = SGCS;
    rootState_active = SGCS;
    state_10_entDef();
    state_20_entDef();
    state_28_entDef();
    state_9_entDef();
    NOTIFY_TRANSITION_TERMINATED("14");
}

void UC_Littering::rootState_exit(void) {
    // State SGCS
    if(rootState_subState == SGCS)
        {
            SGCS_exit();
        }
    rootState_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT");
}

void UC_Littering::SGCS_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SGCS");
    rootState_subState = SGCS;
    rootState_active = SGCS;
    state_9_entDef();
    state_10_entDef();
    state_20_entDef();
    state_28_entDef();
}

void UC_Littering::SGCS_exit(void) {
    state_9_exit();
    state_10_exit();
    state_20_exit();
    state_28_exit();
    
    NOTIFY_STATE_EXITED("ROOT.SGCS");
}

IOxfReactive::TakeEventStatus UC_Littering::SGCS_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_9
        omComponentStatus = state_9_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(SGCS) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_10
            omComponentStatus = state_10_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(SGCS) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_20
            omComponentStatus = state_20_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                    if(IS_IN(SGCS) == false)
                        {
                            dispatchDone = true;
                        }
                }
        }
    if(!dispatchDone)
        {
            // State state_28
            omComponentStatus = state_28_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    
    return res;
}

void UC_Littering::state_9_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_9");
    NOTIFY_TRANSITION_STARTED("23");
    Littering_entDef();
    NOTIFY_TRANSITION_TERMINATED("23");
}

void UC_Littering::state_9_exit(void) {
    // State Littering
    if(state_9_subState == Littering)
        {
            Littering_exit();
        }
    state_9_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SGCS.state_9");
}

IOxfReactive::TakeEventStatus UC_Littering::state_9_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_9_active) {
        // State GenerateLitter
        case GenerateLitter:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.GenerateLitter");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_9.Littering.sendaction_27");
                    pushNullTransition();
                    Littering_subState = sendaction_27;
                    state_9_active = sendaction_27;
                    //#[ state SGCS.state_9.Littering.sendaction_27.(Entry) 
                    GEN(evLitterGenerated);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State WaitForLittering
        case WaitForLittering:
        {
            if(IS_EVENT_TYPE_OF(evStartLittering_SGCS_USECASE_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.WaitForLittering");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_9.Littering.GenerateLitter");
                    pushNullTransition();
                    Littering_subState = GenerateLitter;
                    state_9_active = GenerateLitter;
                    //#[ state SGCS.state_9.Littering.GenerateLitter.(Entry) 
                    generateLitter();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Litterd
        case Litterd:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == Littering_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(Littering_timeout);
                            NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.Litterd");
                            NOTIFY_STATE_ENTERED("ROOT.SGCS.state_9.Littering.accepttimeevent_6");
                            pushNullTransition();
                            Littering_subState = accepttimeevent_6;
                            state_9_active = accepttimeevent_6;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.accepttimeevent_6");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_9.Littering.WaitForLittering");
                    Littering_subState = WaitForLittering;
                    state_9_active = WaitForLittering;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_27
        case sendaction_27:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.sendaction_27");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_9.Littering.Litterd");
                    Littering_subState = Litterd;
                    state_9_active = Litterd;
                    Littering_timeout = scheduleTimeout(1000, "ROOT.SGCS.state_9.Littering.Litterd");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void UC_Littering::Littering_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_9.Littering");
    state_9_subState = Littering;
    NOTIFY_TRANSITION_STARTED("24");
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_9.Littering.WaitForLittering");
    Littering_subState = WaitForLittering;
    state_9_active = WaitForLittering;
    NOTIFY_TRANSITION_TERMINATED("24");
}

void UC_Littering::Littering_exit(void) {
    switch (Littering_subState) {
        // State GenerateLitter
        case GenerateLitter:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.GenerateLitter");
        }
        break;
        // State WaitForLittering
        case WaitForLittering:
        {
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.WaitForLittering");
        }
        break;
        // State Litterd
        case Litterd:
        {
            cancel(Littering_timeout);
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.Litterd");
        }
        break;
        case accepttimeevent_6:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.accepttimeevent_6");
        }
        break;
        // State sendaction_27
        case sendaction_27:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering.sendaction_27");
        }
        break;
        default:
            break;
    }
    Littering_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SGCS.state_9.Littering");
}

void UC_Littering::state_28_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28");
    NOTIFY_TRANSITION_STARTED("27");
    Collecting_entDef();
    NOTIFY_TRANSITION_TERMINATED("27");
}

void UC_Littering::state_28_exit(void) {
    // State Collecting
    if(state_28_subState == Collecting)
        {
            Collecting_exit();
        }
    state_28_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SGCS.state_28");
}

IOxfReactive::TakeEventStatus UC_Littering::state_28_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_28_active) {
        // State WaitForCollecting
        case WaitForCollecting:
        {
            if(IS_EVENT_TYPE_OF(evOverfill_SGCS_USECASE_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("29");
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.WaitForCollecting");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28.Collecting.Preparing");
                    Collecting_subState = Preparing;
                    state_28_active = Preparing;
                    Collecting_timeout = scheduleTimeout(8000, "ROOT.SGCS.state_28.Collecting.Preparing");
                    NOTIFY_TRANSITION_TERMINATED("29");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Collect
        case Collect:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == Collecting_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("31");
                            cancel(Collecting_timeout);
                            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.Collect");
                            NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28.Collecting.accepttimeevent_35");
                            pushNullTransition();
                            Collecting_subState = accepttimeevent_35;
                            state_28_active = accepttimeevent_35;
                            NOTIFY_TRANSITION_TERMINATED("31");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Preparing
        case Preparing:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == Collecting_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("32");
                            cancel(Collecting_timeout);
                            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.Preparing");
                            NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28.Collecting.accepttimeevent_34");
                            pushNullTransition();
                            Collecting_subState = accepttimeevent_34;
                            state_28_active = accepttimeevent_34;
                            NOTIFY_TRANSITION_TERMINATED("32");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_34:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("33");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.accepttimeevent_34");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28.Collecting.inter");
                    pushNullTransition();
                    Collecting_subState = inter;
                    state_28_active = inter;
                    NOTIFY_TRANSITION_TERMINATED("33");
                    res = eventConsumed;
                }
            
            
        }
        break;
        case accepttimeevent_35:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("35");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.accepttimeevent_35");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28.Collecting.inter");
                    pushNullTransition();
                    Collecting_subState = inter;
                    state_28_active = inter;
                    NOTIFY_TRANSITION_TERMINATED("35");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State inter
        case inter:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 34 
                    if(fillLevel > 0)
                        {
                            NOTIFY_TRANSITION_STARTED("36");
                            NOTIFY_TRANSITION_STARTED("34");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.inter");
                            NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28.Collecting.Collect");
                            Collecting_subState = Collect;
                            state_28_active = Collect;
                            //#[ state SGCS.state_28.Collecting.Collect.(Entry) 
                            collectGarbage();
                            //#]
                            Collecting_timeout = scheduleTimeout(100, "ROOT.SGCS.state_28.Collecting.Collect");
                            NOTIFY_TRANSITION_TERMINATED("34");
                            NOTIFY_TRANSITION_TERMINATED("36");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("36");
                            NOTIFY_TRANSITION_STARTED("37");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.inter");
                            //#[ transition 37 
                            setRecyclableBin(0);
                            setNonRecyclableBin(0);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28.Collecting.WaitForCollecting");
                            Collecting_subState = WaitForCollecting;
                            state_28_active = WaitForCollecting;
                            NOTIFY_TRANSITION_TERMINATED("37");
                            NOTIFY_TRANSITION_TERMINATED("36");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void UC_Littering::Collecting_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28.Collecting");
    state_28_subState = Collecting;
    NOTIFY_TRANSITION_STARTED("28");
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_28.Collecting.WaitForCollecting");
    Collecting_subState = WaitForCollecting;
    state_28_active = WaitForCollecting;
    NOTIFY_TRANSITION_TERMINATED("28");
}

void UC_Littering::Collecting_exit(void) {
    switch (Collecting_subState) {
        // State WaitForCollecting
        case WaitForCollecting:
        {
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.WaitForCollecting");
        }
        break;
        // State Collect
        case Collect:
        {
            cancel(Collecting_timeout);
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.Collect");
        }
        break;
        // State Preparing
        case Preparing:
        {
            cancel(Collecting_timeout);
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.Preparing");
        }
        break;
        case accepttimeevent_34:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.accepttimeevent_34");
        }
        break;
        case accepttimeevent_35:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.accepttimeevent_35");
        }
        break;
        // State inter
        case inter:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting.inter");
        }
        break;
        default:
            break;
    }
    Collecting_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SGCS.state_28.Collecting");
}

void UC_Littering::state_20_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_20");
    NOTIFY_TRANSITION_STARTED("26");
    Sorting_entDef();
    NOTIFY_TRANSITION_TERMINATED("26");
}

void UC_Littering::state_20_exit(void) {
    // State Sorting
    if(state_20_subState == Sorting)
        {
            Sorting_exit();
        }
    state_20_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SGCS.state_20");
}

IOxfReactive::TakeEventStatus UC_Littering::state_20_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_20_active) {
        // State WaitForSorting
        case WaitForSorting:
        {
            if(IS_EVENT_TYPE_OF(evStartSorting_SGCS_USECASE_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting.WaitForSorting");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_20.Sorting.Sort");
                    pushNullTransition();
                    Sorting_subState = Sort;
                    state_20_active = Sort;
                    //#[ state SGCS.state_20.Sorting.Sort.(Entry) 
                    setRecyclable(recyclable);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AddNonRecyclable
        case AddNonRecyclable:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting.AddNonRecyclable");
                    //#[ transition 21 
                    showBinStaus();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_20.Sorting.WaitForSorting");
                    Sorting_subState = WaitForSorting;
                    state_20_active = WaitForSorting;
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State AddRecyclable
        case AddRecyclable:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting.AddRecyclable");
                    //#[ transition 21 
                    showBinStaus();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_20.Sorting.WaitForSorting");
                    Sorting_subState = WaitForSorting;
                    state_20_active = WaitForSorting;
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Sort
        case Sort:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 18 
                    if(recyclable == false)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting.Sort");
                            NOTIFY_STATE_ENTERED("ROOT.SGCS.state_20.Sorting.AddNonRecyclable");
                            pushNullTransition();
                            Sorting_subState = AddNonRecyclable;
                            state_20_active = AddNonRecyclable;
                            //#[ state SGCS.state_20.Sorting.AddNonRecyclable.(Entry) 
                            setNonRecyclableBin(nonRecyclableBin + 1);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 17 
                            if(recyclable == true)
                                {
                                    NOTIFY_TRANSITION_STARTED("17");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting.Sort");
                                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_20.Sorting.AddRecyclable");
                                    pushNullTransition();
                                    Sorting_subState = AddRecyclable;
                                    state_20_active = AddRecyclable;
                                    //#[ state SGCS.state_20.Sorting.AddRecyclable.(Entry) 
                                    setRecyclableBin(recyclableBin + 1);
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("17");
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

void UC_Littering::Sorting_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_20.Sorting");
    state_20_subState = Sorting;
    NOTIFY_TRANSITION_STARTED("15");
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_20.Sorting.WaitForSorting");
    Sorting_subState = WaitForSorting;
    state_20_active = WaitForSorting;
    NOTIFY_TRANSITION_TERMINATED("15");
}

void UC_Littering::Sorting_exit(void) {
    switch (Sorting_subState) {
        // State WaitForSorting
        case WaitForSorting:
        {
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting.WaitForSorting");
        }
        break;
        // State AddNonRecyclable
        case AddNonRecyclable:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting.AddNonRecyclable");
        }
        break;
        // State AddRecyclable
        case AddRecyclable:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting.AddRecyclable");
        }
        break;
        // State Sort
        case Sort:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting.Sort");
        }
        break;
        default:
            break;
    }
    Sorting_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SGCS.state_20.Sorting");
}

void UC_Littering::state_10_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10");
    NOTIFY_TRANSITION_STARTED("25");
    Detecting_entDef();
    NOTIFY_TRANSITION_TERMINATED("25");
}

void UC_Littering::state_10_exit(void) {
    // State Detecting
    if(state_10_subState == Detecting)
        {
            Detecting_exit();
        }
    state_10_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10");
}

IOxfReactive::TakeEventStatus UC_Littering::state_10_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        // State FillOverFlow
        case FillOverFlow:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("30");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.FillOverFlow");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.sendaction_32");
                    pushNullTransition();
                    Detecting_subState = sendaction_32;
                    state_10_active = sendaction_32;
                    //#[ state SGCS.state_10.Detecting.sendaction_32.(Entry) 
                    GEN(evOverfill);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("30");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Activate
        case Activate:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 9 
                    if(fillLevel + volume > maxFillLevel)
                        {
                            NOTIFY_TRANSITION_STARTED("9");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.Activate");
                            NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.FillOverFlow");
                            pushNullTransition();
                            Detecting_subState = FillOverFlow;
                            state_10_active = FillOverFlow;
                            //#[ state SGCS.state_10.Detecting.FillOverFlow.(Entry) 
                            fillOverflow();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("9");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 8 
                            if(fillLevel + volume <= maxFillLevel)
                                {
                                    NOTIFY_TRANSITION_STARTED("8");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.Activate");
                                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.UpdateFillLevel");
                                    pushNullTransition();
                                    Detecting_subState = UpdateFillLevel;
                                    state_10_active = UpdateFillLevel;
                                    //#[ state SGCS.state_10.Detecting.UpdateFillLevel.(Entry) 
                                    setFillLevel(fillLevel+volume);
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("8");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        // State ShowFillLevel
        case ShowFillLevel:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.ShowFillLevel");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.WaitForDetecting");
                    Detecting_subState = WaitForDetecting;
                    state_10_active = WaitForDetecting;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State WaitForDetecting
        case WaitForDetecting:
        {
            if(IS_EVENT_TYPE_OF(evLitterGenerated_SGCS_USECASE_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.WaitForDetecting");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.accepteventaction_13");
                    pushNullTransition();
                    Detecting_subState = accepteventaction_13;
                    state_10_active = accepteventaction_13;
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State UpdateFillLevel
        case UpdateFillLevel:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.UpdateFillLevel");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.sendaction_19");
                    pushNullTransition();
                    Detecting_subState = sendaction_19;
                    state_10_active = sendaction_19;
                    //#[ state SGCS.state_10.Detecting.sendaction_19.(Entry) 
                    GEN(evStartSorting);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_19
        case sendaction_19:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.sendaction_19");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.ShowFillLevel");
                    pushNullTransition();
                    Detecting_subState = ShowFillLevel;
                    state_10_active = ShowFillLevel;
                    //#[ state SGCS.state_10.Detecting.ShowFillLevel.(Entry) 
                    showFillLevel();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        case accepteventaction_13:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.accepteventaction_13");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.Activate");
                    pushNullTransition();
                    Detecting_subState = Activate;
                    state_10_active = Activate;
                    //#[ state SGCS.state_10.Detecting.Activate.(Entry) 
                    setVolume(volume);
                    setRecyclable(recyclable);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sendaction_32
        case sendaction_32:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.sendaction_32");
                    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.ShowFillLevel");
                    pushNullTransition();
                    Detecting_subState = ShowFillLevel;
                    state_10_active = ShowFillLevel;
                    //#[ state SGCS.state_10.Detecting.ShowFillLevel.(Entry) 
                    showFillLevel();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void UC_Littering::Detecting_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting");
    state_10_subState = Detecting;
    NOTIFY_TRANSITION_STARTED("11");
    NOTIFY_STATE_ENTERED("ROOT.SGCS.state_10.Detecting.WaitForDetecting");
    Detecting_subState = WaitForDetecting;
    state_10_active = WaitForDetecting;
    NOTIFY_TRANSITION_TERMINATED("11");
}

void UC_Littering::Detecting_exit(void) {
    switch (Detecting_subState) {
        // State FillOverFlow
        case FillOverFlow:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.FillOverFlow");
        }
        break;
        // State Activate
        case Activate:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.Activate");
        }
        break;
        // State ShowFillLevel
        case ShowFillLevel:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.ShowFillLevel");
        }
        break;
        // State WaitForDetecting
        case WaitForDetecting:
        {
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.WaitForDetecting");
        }
        break;
        // State UpdateFillLevel
        case UpdateFillLevel:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.UpdateFillLevel");
        }
        break;
        // State sendaction_19
        case sendaction_19:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.sendaction_19");
        }
        break;
        case accepteventaction_13:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.accepteventaction_13");
        }
        break;
        // State sendaction_32
        case sendaction_32:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting.sendaction_32");
        }
        break;
        default:
            break;
    }
    Detecting_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.SGCS.state_10.Detecting");
}

void UC_Littering::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        rootStateEntDef();
    }
}

IOxfReactive::TakeEventStatus UC_Littering::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State SGCS
    if(rootState_active == SGCS)
        {
            res = SGCS_processEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_Littering::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("recyclable", x2String(myReal->recyclable));
    aomsAttributes->addAttribute("volume", x2String(myReal->volume));
    aomsAttributes->addAttribute("fillLevel", x2String(myReal->fillLevel));
    aomsAttributes->addAttribute("maxFillLevel", x2String(myReal->maxFillLevel));
    aomsAttributes->addAttribute("nonRecyclableBin", x2String(myReal->nonRecyclableBin));
    aomsAttributes->addAttribute("recyclableBin", x2String(myReal->recyclableBin));
}

void OMAnimatedUC_Littering::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == UC_Littering::SGCS)
        {
            SGCS_serializeStates(aomsState);
        }
}

void OMAnimatedUC_Littering::SGCS_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS");
    state_9_serializeStates(aomsState);
    state_10_serializeStates(aomsState);
    state_20_serializeStates(aomsState);
    state_28_serializeStates(aomsState);
}

void OMAnimatedUC_Littering::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_9");
    if(myReal->state_9_subState == UC_Littering::Littering)
        {
            Littering_serializeStates(aomsState);
        }
}

void OMAnimatedUC_Littering::Littering_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_9.Littering");
    switch (myReal->Littering_subState) {
        case UC_Littering::GenerateLitter:
        {
            GenerateLitter_serializeStates(aomsState);
        }
        break;
        case UC_Littering::WaitForLittering:
        {
            WaitForLittering_serializeStates(aomsState);
        }
        break;
        case UC_Littering::Litterd:
        {
            Litterd_serializeStates(aomsState);
        }
        break;
        case UC_Littering::accepttimeevent_6:
        {
            accepttimeevent_6_serializeStates(aomsState);
        }
        break;
        case UC_Littering::sendaction_27:
        {
            sendaction_27_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_Littering::WaitForLittering_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_9.Littering.WaitForLittering");
}

void OMAnimatedUC_Littering::sendaction_27_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_9.Littering.sendaction_27");
}

void OMAnimatedUC_Littering::Litterd_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_9.Littering.Litterd");
}

void OMAnimatedUC_Littering::GenerateLitter_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_9.Littering.GenerateLitter");
}

void OMAnimatedUC_Littering::accepttimeevent_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_9.Littering.accepttimeevent_6");
}

void OMAnimatedUC_Littering::state_28_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_28");
    if(myReal->state_28_subState == UC_Littering::Collecting)
        {
            Collecting_serializeStates(aomsState);
        }
}

void OMAnimatedUC_Littering::Collecting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_28.Collecting");
    switch (myReal->Collecting_subState) {
        case UC_Littering::WaitForCollecting:
        {
            WaitForCollecting_serializeStates(aomsState);
        }
        break;
        case UC_Littering::Collect:
        {
            Collect_serializeStates(aomsState);
        }
        break;
        case UC_Littering::Preparing:
        {
            Preparing_serializeStates(aomsState);
        }
        break;
        case UC_Littering::accepttimeevent_34:
        {
            accepttimeevent_34_serializeStates(aomsState);
        }
        break;
        case UC_Littering::accepttimeevent_35:
        {
            accepttimeevent_35_serializeStates(aomsState);
        }
        break;
        case UC_Littering::inter:
        {
            inter_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_Littering::WaitForCollecting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_28.Collecting.WaitForCollecting");
}

void OMAnimatedUC_Littering::Preparing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_28.Collecting.Preparing");
}

void OMAnimatedUC_Littering::inter_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_28.Collecting.inter");
}

void OMAnimatedUC_Littering::Collect_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_28.Collecting.Collect");
}

void OMAnimatedUC_Littering::accepttimeevent_35_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_28.Collecting.accepttimeevent_35");
}

void OMAnimatedUC_Littering::accepttimeevent_34_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_28.Collecting.accepttimeevent_34");
}

void OMAnimatedUC_Littering::state_20_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_20");
    if(myReal->state_20_subState == UC_Littering::Sorting)
        {
            Sorting_serializeStates(aomsState);
        }
}

void OMAnimatedUC_Littering::Sorting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_20.Sorting");
    switch (myReal->Sorting_subState) {
        case UC_Littering::WaitForSorting:
        {
            WaitForSorting_serializeStates(aomsState);
        }
        break;
        case UC_Littering::AddNonRecyclable:
        {
            AddNonRecyclable_serializeStates(aomsState);
        }
        break;
        case UC_Littering::AddRecyclable:
        {
            AddRecyclable_serializeStates(aomsState);
        }
        break;
        case UC_Littering::Sort:
        {
            Sort_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_Littering::WaitForSorting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_20.Sorting.WaitForSorting");
}

void OMAnimatedUC_Littering::Sort_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_20.Sorting.Sort");
}

void OMAnimatedUC_Littering::AddRecyclable_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_20.Sorting.AddRecyclable");
}

void OMAnimatedUC_Littering::AddNonRecyclable_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_20.Sorting.AddNonRecyclable");
}

void OMAnimatedUC_Littering::state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10");
    if(myReal->state_10_subState == UC_Littering::Detecting)
        {
            Detecting_serializeStates(aomsState);
        }
}

void OMAnimatedUC_Littering::Detecting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10.Detecting");
    switch (myReal->Detecting_subState) {
        case UC_Littering::FillOverFlow:
        {
            FillOverFlow_serializeStates(aomsState);
        }
        break;
        case UC_Littering::Activate:
        {
            Activate_serializeStates(aomsState);
        }
        break;
        case UC_Littering::ShowFillLevel:
        {
            ShowFillLevel_serializeStates(aomsState);
        }
        break;
        case UC_Littering::WaitForDetecting:
        {
            WaitForDetecting_serializeStates(aomsState);
        }
        break;
        case UC_Littering::UpdateFillLevel:
        {
            UpdateFillLevel_serializeStates(aomsState);
        }
        break;
        case UC_Littering::sendaction_19:
        {
            sendaction_19_serializeStates(aomsState);
        }
        break;
        case UC_Littering::accepteventaction_13:
        {
            accepteventaction_13_serializeStates(aomsState);
        }
        break;
        case UC_Littering::sendaction_32:
        {
            sendaction_32_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_Littering::WaitForDetecting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10.Detecting.WaitForDetecting");
}

void OMAnimatedUC_Littering::UpdateFillLevel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10.Detecting.UpdateFillLevel");
}

void OMAnimatedUC_Littering::ShowFillLevel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10.Detecting.ShowFillLevel");
}

void OMAnimatedUC_Littering::sendaction_32_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10.Detecting.sendaction_32");
}

void OMAnimatedUC_Littering::sendaction_19_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10.Detecting.sendaction_19");
}

void OMAnimatedUC_Littering::FillOverFlow_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10.Detecting.FillOverFlow");
}

void OMAnimatedUC_Littering::Activate_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10.Detecting.Activate");
}

void OMAnimatedUC_Littering::accepteventaction_13_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SGCS.state_10.Detecting.accepteventaction_13");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_Littering, SGCS_USECASE, SGCS_USECASE, false, OMAnimatedUC_Littering)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_Littering.cpp
*********************************************************************/
