/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_SortGarbage
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_SortGarbage.h
*********************************************************************/

#ifndef UC_SortGarbage_H
#define UC_SortGarbage_H

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

//## class UC_SortGarbage
class UC_SortGarbage : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_SortGarbage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit UC_SortGarbage(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~UC_SortGarbage(void);
    
    ////    Operations    ////
    
    //## operation showBinStaus()
    virtual void showBinStaus(void);
    
    ////    Additional operations    ////
    
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
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    int nonRecyclableBin;		//## attribute nonRecyclableBin
    
    bool recyclable;		//## attribute recyclable
    
    int recyclableBin;		//## attribute recyclableBin
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // WaitForSorting:
    //## statechart_method
    inline RhpBoolean WaitForSorting_IN(void) const;
    
    // Sorting:
    //## statechart_method
    inline RhpBoolean Sorting_IN(void) const;
    
    // AddRecyclable:
    //## statechart_method
    inline RhpBoolean AddRecyclable_IN(void) const;
    
    // AddNonRecyclable:
    //## statechart_method
    inline RhpBoolean AddNonRecyclable_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum UC_SortGarbage_Enum {
        OMNonState = 0,
        WaitForSorting = 1,
        Sorting = 2,
        AddRecyclable = 3,
        AddNonRecyclable = 4
    };
//#]

private :

//#[ ignore
    UC_SortGarbage_Enum rootState_subState;
    
    UC_SortGarbage_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_SortGarbage : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_SortGarbage, OMAnimatedUC_SortGarbage)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WaitForSorting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Sorting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AddRecyclable_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AddNonRecyclable_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean UC_SortGarbage::rootState_IN(void) const {
    return true;
}

inline RhpBoolean UC_SortGarbage::WaitForSorting_IN(void) const {
    return rootState_subState == WaitForSorting;
}

inline RhpBoolean UC_SortGarbage::Sorting_IN(void) const {
    return rootState_subState == Sorting;
}

inline RhpBoolean UC_SortGarbage::AddRecyclable_IN(void) const {
    return rootState_subState == AddRecyclable;
}

inline RhpBoolean UC_SortGarbage::AddNonRecyclable_IN(void) const {
    return rootState_subState == AddNonRecyclable;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_SortGarbage.h
*********************************************************************/
