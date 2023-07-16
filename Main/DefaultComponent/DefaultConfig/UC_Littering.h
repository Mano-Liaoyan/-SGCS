/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
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
//## link itsUC_MonitorFillLevel
class UC_MonitorFillLevel;

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
    ~UC_Littering(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const char* getType(void) const;
    
    //## auto_generated
    void setType(char* const p_type);
    
    //## auto_generated
    const int getVolume(void) const;
    
    //## auto_generated
    void setVolume(const int p_volume);
    
    //## auto_generated
    const UC_MonitorFillLevel* getItsUC_MonitorFillLevel(void) const;
    
    //## auto_generated
    void setItsUC_MonitorFillLevel(UC_MonitorFillLevel* const p_UC_MonitorFillLevel);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    char* type;		//## attribute type
    
    int volume;		//## attribute volume
    
    ////    Relations and components    ////
    
    UC_MonitorFillLevel* itsUC_MonitorFillLevel;		//## link itsUC_MonitorFillLevel
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUC_MonitorFillLevel(UC_MonitorFillLevel* const p_UC_MonitorFillLevel);
    
    //## auto_generated
    void _setItsUC_MonitorFillLevel(UC_MonitorFillLevel* const p_UC_MonitorFillLevel);
    
    //## auto_generated
    void _clearItsUC_MonitorFillLevel(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_Littering : virtual public AOMInstance {
    DECLARE_META(UC_Littering, OMAnimatedUC_Littering)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_Littering.h
*********************************************************************/
