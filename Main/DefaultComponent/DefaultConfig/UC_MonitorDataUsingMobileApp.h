/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_MonitorDataUsingMobileApp
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorDataUsingMobileApp.h
*********************************************************************/

#ifndef UC_MonitorDataUsingMobileApp_H
#define UC_MonitorDataUsingMobileApp_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class UC_MonitorDataUsingMobileApp
class UC_MonitorDataUsingMobileApp {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_MonitorDataUsingMobileApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_MonitorDataUsingMobileApp(void);
    
    //## auto_generated
    ~UC_MonitorDataUsingMobileApp(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const float getFilllevel(void) const;
    
    //## auto_generated
    void setFilllevel(const float p_filllevel);
    
    //## auto_generated
    const float getLocationX(void) const;
    
    //## auto_generated
    void setLocationX(const float p_locationX);
    
    //## auto_generated
    const float getLocationY(void) const;
    
    //## auto_generated
    void setLocationY(const float p_locationY);
    
    ////    Attributes    ////

private :

    float filllevel;		//## attribute filllevel
    
    float locationX;		//## attribute locationX
    
    float locationY;		//## attribute locationY
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_MonitorDataUsingMobileApp : virtual public AOMInstance {
    DECLARE_META(UC_MonitorDataUsingMobileApp, OMAnimatedUC_MonitorDataUsingMobileApp)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorDataUsingMobileApp.h
*********************************************************************/
