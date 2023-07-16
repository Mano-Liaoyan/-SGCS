/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_Littering
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_Littering.h
*********************************************************************/

#ifndef UC_Littering_H
#define UC_Littering_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SGCS_USECASE.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## package SGCS_USECASE

//## class UC_Littering
class UC_Littering : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_Littering;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit UC_Littering(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~UC_Littering(void);
    
    ////    Operations    ////
    
    //## operation collectGarbage()
    virtual void collectGarbage(void);
    
    //## operation fillOverflow()
    virtual void fillOverflow(void);
    
    //## operation generateLitter()
    virtual void generateLitter(void);
    
    //## operation showBinStaus()
    virtual void showBinStaus(void);
    
    //## operation showFillLevel()
    virtual void showFillLevel(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getFillLevel(void) const;
    
    //## auto_generated
    void setFillLevel(const int p_fillLevel);
    
    //## auto_generated
    const int getMaxFillLevel(void) const;
    
    //## auto_generated
    void setMaxFillLevel(const int p_maxFillLevel);
    
    //## auto_generated
    const int getNonRecyclableBin(void) const;
    
    //## auto_generated
    void setNonRecyclableBin(const int p_nonRecyclableBin);
    
    //## auto_generated
    const bool getRecyclable(void) const;
    
    //## auto_generated
    void setRecyclable(const bool p_recyclable);
    
    //## auto_generated
    const int getRecyclableBin(void) const;
    
    //## auto_generated
    void setRecyclableBin(const int p_recyclableBin);
    
    //## auto_generated
    const int getVolume(void) const;
    
    //## auto_generated
    void setVolume(const int p_volume);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    int fillLevel;		//## attribute fillLevel
    
    int maxFillLevel;		//## attribute maxFillLevel
    
    int nonRecyclableBin;		//## attribute nonRecyclableBin
    
    bool recyclable;		//## attribute recyclable
    
    int recyclableBin;		//## attribute recyclableBin
    
    int volume;		//## attribute volume
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    //## statechart_method
    void rootStateEntDef(void);
    
    //## statechart_method
    void rootState_exit(void);
    
    // SGCS:
    //## statechart_method
    inline RhpBoolean SGCS_IN(void) const;
    
    //## statechart_method
    void SGCS_entDef(void);
    
    //## statechart_method
    void SGCS_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus SGCS_processEvent(void);
    
    // state_9:
    //## statechart_method
    inline RhpBoolean state_9_IN(void) const;
    
    //## statechart_method
    void state_9_entDef(void);
    
    //## statechart_method
    void state_9_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent(void);
    
    // Littering:
    //## statechart_method
    inline RhpBoolean Littering_IN(void) const;
    
    //## statechart_method
    void Littering_entDef(void);
    
    //## statechart_method
    void Littering_exit(void);
    
    // WaitForLittering:
    //## statechart_method
    inline RhpBoolean WaitForLittering_IN(void) const;
    
    // sendaction_27:
    //## statechart_method
    inline RhpBoolean sendaction_27_IN(void) const;
    
    // Litterd:
    //## statechart_method
    inline RhpBoolean Litterd_IN(void) const;
    
    // GenerateLitter:
    //## statechart_method
    inline RhpBoolean GenerateLitter_IN(void) const;
    
    // accepttimeevent_6:
    //## statechart_method
    inline RhpBoolean accepttimeevent_6_IN(void) const;
    
    // state_28:
    //## statechart_method
    inline RhpBoolean state_28_IN(void) const;
    
    //## statechart_method
    void state_28_entDef(void);
    
    //## statechart_method
    void state_28_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_28_processEvent(void);
    
    // Collecting:
    //## statechart_method
    inline RhpBoolean Collecting_IN(void) const;
    
    //## statechart_method
    void Collecting_entDef(void);
    
    //## statechart_method
    void Collecting_exit(void);
    
    // WaitForCollecting:
    //## statechart_method
    inline RhpBoolean WaitForCollecting_IN(void) const;
    
    // Preparing:
    //## statechart_method
    inline RhpBoolean Preparing_IN(void) const;
    
    // inter:
    //## statechart_method
    inline RhpBoolean inter_IN(void) const;
    
    // Collect:
    //## statechart_method
    inline RhpBoolean Collect_IN(void) const;
    
    // accepttimeevent_35:
    //## statechart_method
    inline RhpBoolean accepttimeevent_35_IN(void) const;
    
    // accepttimeevent_34:
    //## statechart_method
    inline RhpBoolean accepttimeevent_34_IN(void) const;
    
    // state_20:
    //## statechart_method
    inline RhpBoolean state_20_IN(void) const;
    
    //## statechart_method
    void state_20_entDef(void);
    
    //## statechart_method
    void state_20_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_20_processEvent(void);
    
    // Sorting:
    //## statechart_method
    inline RhpBoolean Sorting_IN(void) const;
    
    //## statechart_method
    void Sorting_entDef(void);
    
    //## statechart_method
    void Sorting_exit(void);
    
    // WaitForSorting:
    //## statechart_method
    inline RhpBoolean WaitForSorting_IN(void) const;
    
    // Sort:
    //## statechart_method
    inline RhpBoolean Sort_IN(void) const;
    
    // AddRecyclable:
    //## statechart_method
    inline RhpBoolean AddRecyclable_IN(void) const;
    
    // AddNonRecyclable:
    //## statechart_method
    inline RhpBoolean AddNonRecyclable_IN(void) const;
    
    // state_10:
    //## statechart_method
    inline RhpBoolean state_10_IN(void) const;
    
    //## statechart_method
    void state_10_entDef(void);
    
    //## statechart_method
    void state_10_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent(void);
    
    // Detecting:
    //## statechart_method
    inline RhpBoolean Detecting_IN(void) const;
    
    //## statechart_method
    void Detecting_entDef(void);
    
    //## statechart_method
    void Detecting_exit(void);
    
    // WaitForDetecting:
    //## statechart_method
    inline RhpBoolean WaitForDetecting_IN(void) const;
    
    // UpdateFillLevel:
    //## statechart_method
    inline RhpBoolean UpdateFillLevel_IN(void) const;
    
    // ShowFillLevel:
    //## statechart_method
    inline RhpBoolean ShowFillLevel_IN(void) const;
    
    // sendaction_32:
    //## statechart_method
    inline RhpBoolean sendaction_32_IN(void) const;
    
    // sendaction_19:
    //## statechart_method
    inline RhpBoolean sendaction_19_IN(void) const;
    
    // FillOverFlow:
    //## statechart_method
    inline RhpBoolean FillOverFlow_IN(void) const;
    
    // Activate:
    //## statechart_method
    inline RhpBoolean Activate_IN(void) const;
    
    // accepteventaction_13:
    //## statechart_method
    inline RhpBoolean accepteventaction_13_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum UC_Littering_Enum {
        OMNonState = 0,
        SGCS = 1,
        state_9 = 2,
        Littering = 3,
        WaitForLittering = 4,
        sendaction_27 = 5,
        Litterd = 6,
        GenerateLitter = 7,
        accepttimeevent_6 = 8,
        state_28 = 9,
        Collecting = 10,
        WaitForCollecting = 11,
        Preparing = 12,
        inter = 13,
        Collect = 14,
        accepttimeevent_35 = 15,
        accepttimeevent_34 = 16,
        state_20 = 17,
        Sorting = 18,
        WaitForSorting = 19,
        Sort = 20,
        AddRecyclable = 21,
        AddNonRecyclable = 22,
        state_10 = 23,
        Detecting = 24,
        WaitForDetecting = 25,
        UpdateFillLevel = 26,
        ShowFillLevel = 27,
        sendaction_32 = 28,
        sendaction_19 = 29,
        FillOverFlow = 30,
        Activate = 31,
        accepteventaction_13 = 32
    };
//#]

private :

//#[ ignore
    UC_Littering_Enum rootState_subState;
    
    UC_Littering_Enum rootState_active;
    
    UC_Littering_Enum state_9_subState;
    
    UC_Littering_Enum state_9_active;
    
    UC_Littering_Enum Littering_subState;
    
    IOxfTimeout* Littering_timeout;
    
    UC_Littering_Enum state_28_subState;
    
    UC_Littering_Enum state_28_active;
    
    UC_Littering_Enum Collecting_subState;
    
    IOxfTimeout* Collecting_timeout;
    
    UC_Littering_Enum state_20_subState;
    
    UC_Littering_Enum state_20_active;
    
    UC_Littering_Enum Sorting_subState;
    
    UC_Littering_Enum state_10_subState;
    
    UC_Littering_Enum state_10_active;
    
    UC_Littering_Enum Detecting_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_Littering : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_Littering, OMAnimatedUC_Littering)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SGCS_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Littering_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitForLittering_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_27_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Litterd_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void GenerateLitter_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_28_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Collecting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitForCollecting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Preparing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void inter_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Collect_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_35_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_34_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_20_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Sorting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitForSorting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Sort_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AddRecyclable_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AddNonRecyclable_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Detecting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitForDetecting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UpdateFillLevel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ShowFillLevel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_32_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_19_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FillOverFlow_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Activate_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepteventaction_13_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean UC_Littering::rootState_IN(void) const {
    return true;
}

inline RhpBoolean UC_Littering::SGCS_IN(void) const {
    return rootState_subState == SGCS;
}

inline RhpBoolean UC_Littering::state_9_IN(void) const {
    return SGCS_IN();
}

inline RhpBoolean UC_Littering::Littering_IN(void) const {
    return state_9_subState == Littering;
}

inline RhpBoolean UC_Littering::WaitForLittering_IN(void) const {
    return Littering_subState == WaitForLittering;
}

inline RhpBoolean UC_Littering::sendaction_27_IN(void) const {
    return Littering_subState == sendaction_27;
}

inline RhpBoolean UC_Littering::Litterd_IN(void) const {
    return Littering_subState == Litterd;
}

inline RhpBoolean UC_Littering::GenerateLitter_IN(void) const {
    return Littering_subState == GenerateLitter;
}

inline RhpBoolean UC_Littering::accepttimeevent_6_IN(void) const {
    return Littering_subState == accepttimeevent_6;
}

inline RhpBoolean UC_Littering::state_28_IN(void) const {
    return SGCS_IN();
}

inline RhpBoolean UC_Littering::Collecting_IN(void) const {
    return state_28_subState == Collecting;
}

inline RhpBoolean UC_Littering::WaitForCollecting_IN(void) const {
    return Collecting_subState == WaitForCollecting;
}

inline RhpBoolean UC_Littering::Preparing_IN(void) const {
    return Collecting_subState == Preparing;
}

inline RhpBoolean UC_Littering::inter_IN(void) const {
    return Collecting_subState == inter;
}

inline RhpBoolean UC_Littering::Collect_IN(void) const {
    return Collecting_subState == Collect;
}

inline RhpBoolean UC_Littering::accepttimeevent_35_IN(void) const {
    return Collecting_subState == accepttimeevent_35;
}

inline RhpBoolean UC_Littering::accepttimeevent_34_IN(void) const {
    return Collecting_subState == accepttimeevent_34;
}

inline RhpBoolean UC_Littering::state_20_IN(void) const {
    return SGCS_IN();
}

inline RhpBoolean UC_Littering::Sorting_IN(void) const {
    return state_20_subState == Sorting;
}

inline RhpBoolean UC_Littering::WaitForSorting_IN(void) const {
    return Sorting_subState == WaitForSorting;
}

inline RhpBoolean UC_Littering::Sort_IN(void) const {
    return Sorting_subState == Sort;
}

inline RhpBoolean UC_Littering::AddRecyclable_IN(void) const {
    return Sorting_subState == AddRecyclable;
}

inline RhpBoolean UC_Littering::AddNonRecyclable_IN(void) const {
    return Sorting_subState == AddNonRecyclable;
}

inline RhpBoolean UC_Littering::state_10_IN(void) const {
    return SGCS_IN();
}

inline RhpBoolean UC_Littering::Detecting_IN(void) const {
    return state_10_subState == Detecting;
}

inline RhpBoolean UC_Littering::WaitForDetecting_IN(void) const {
    return Detecting_subState == WaitForDetecting;
}

inline RhpBoolean UC_Littering::UpdateFillLevel_IN(void) const {
    return Detecting_subState == UpdateFillLevel;
}

inline RhpBoolean UC_Littering::ShowFillLevel_IN(void) const {
    return Detecting_subState == ShowFillLevel;
}

inline RhpBoolean UC_Littering::sendaction_32_IN(void) const {
    return Detecting_subState == sendaction_32;
}

inline RhpBoolean UC_Littering::sendaction_19_IN(void) const {
    return Detecting_subState == sendaction_19;
}

inline RhpBoolean UC_Littering::FillOverFlow_IN(void) const {
    return Detecting_subState == FillOverFlow;
}

inline RhpBoolean UC_Littering::Activate_IN(void) const {
    return Detecting_subState == Activate;
}

inline RhpBoolean UC_Littering::accepteventaction_13_IN(void) const {
    return Detecting_subState == accepteventaction_13;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_Littering.h
*********************************************************************/
