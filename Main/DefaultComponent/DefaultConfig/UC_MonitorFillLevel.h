/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_MonitorFillLevel
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorFillLevel.h
*********************************************************************/

#ifndef UC_MonitorFillLevel_H
#define UC_MonitorFillLevel_H

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

//## class UC_MonitorFillLevel
class UC_MonitorFillLevel : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_MonitorFillLevel;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_MonitorFillLevel(void);
    
    //## auto_generated
    virtual ~UC_MonitorFillLevel(void);
    
    ////    Operations    ////
    
    //## operation fillOverflow()
    virtual void fillOverflow(void);
    
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
    const bool getRecyclable(void) const;
    
    //## auto_generated
    void setRecyclable(const bool p_recyclable);
    
    //## auto_generated
    const int getVolume(void) const;
    
    //## auto_generated
    void setVolume(const int p_volume);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    int fillLevel;		//## attribute fillLevel
    
    int maxFillLevel;		//## attribute maxFillLevel
    
    bool recyclable;		//## attribute recyclable
    
    int volume;		//## attribute volume
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // WaitForDetecting:
    //## statechart_method
    inline RhpBoolean WaitForDetecting_IN(void) const;
    
    // UpdateFillLevel:
    //## statechart_method
    inline RhpBoolean UpdateFillLevel_IN(void) const;
    
    // ShowFillLevel:
    //## statechart_method
    inline RhpBoolean ShowFillLevel_IN(void) const;
    
    // FillOverFlow:
    //## statechart_method
    inline RhpBoolean FillOverFlow_IN(void) const;
    
    // Activate:
    //## statechart_method
    inline RhpBoolean Activate_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum UC_MonitorFillLevel_Enum {
        OMNonState = 0,
        WaitForDetecting = 1,
        UpdateFillLevel = 2,
        ShowFillLevel = 3,
        FillOverFlow = 4,
        Activate = 5
    };
//#]

private :

//#[ ignore
    UC_MonitorFillLevel_Enum rootState_subState;
    
    UC_MonitorFillLevel_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_MonitorFillLevel : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_MonitorFillLevel, OMAnimatedUC_MonitorFillLevel)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitForDetecting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void UpdateFillLevel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ShowFillLevel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FillOverFlow_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Activate_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean UC_MonitorFillLevel::rootState_IN(void) const {
    return true;
}

inline RhpBoolean UC_MonitorFillLevel::WaitForDetecting_IN(void) const {
    return rootState_subState == WaitForDetecting;
}

inline RhpBoolean UC_MonitorFillLevel::UpdateFillLevel_IN(void) const {
    return rootState_subState == UpdateFillLevel;
}

inline RhpBoolean UC_MonitorFillLevel::ShowFillLevel_IN(void) const {
    return rootState_subState == ShowFillLevel;
}

inline RhpBoolean UC_MonitorFillLevel::FillOverFlow_IN(void) const {
    return rootState_subState == FillOverFlow;
}

inline RhpBoolean UC_MonitorFillLevel::Activate_IN(void) const {
    return rootState_subState == Activate;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorFillLevel.h
*********************************************************************/
