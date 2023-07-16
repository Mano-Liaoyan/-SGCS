/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: UC_MonitorFillLevel_Simulation
	Model Element	: SGCS_USECASE
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\UC_MonitorFillLevel_Simulation\SGCS_USECASE.h
*********************************************************************/

#ifndef SGCS_USECASE_H
#define SGCS_USECASE_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class UC_MonitorFillLevel;

//## package SGCS_USECASE



//## event evStartLittering()
class evStartLittering : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartLittering;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartLittering(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStartLittering : virtual public AOMEvent {
    DECLARE_META_EVENT(evStartLittering)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStartLittering_SGCS_USECASE_id;
//#]

//## event evStart()
class evStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStart(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStart : virtual public AOMEvent {
    DECLARE_META_EVENT(evStart)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStart_SGCS_USECASE_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_MonitorFillLevel_Simulation\SGCS_USECASE.h
*********************************************************************/
