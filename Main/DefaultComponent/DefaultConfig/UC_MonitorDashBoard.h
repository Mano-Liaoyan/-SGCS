/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_MonitorDashBoard
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorDashBoard.h
*********************************************************************/

#ifndef UC_MonitorDashBoard_H
#define UC_MonitorDashBoard_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class UC_MonitorDashBoard
class UC_MonitorDashBoard {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_MonitorDashBoard;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_MonitorDashBoard(void);
    
    //## auto_generated
    ~UC_MonitorDashBoard(void);
    
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
class OMAnimatedUC_MonitorDashBoard : virtual public AOMInstance {
    DECLARE_META(UC_MonitorDashBoard, OMAnimatedUC_MonitorDashBoard)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorDashBoard.h
*********************************************************************/
