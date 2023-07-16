/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SGCS_USECASE
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SGCS_USECASE.h
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
class UC_Littering;

//## auto_generated
class UC_MonitorFillLevel;

//## auto_generated
class UC_SortGarbage;

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

//## event evStartSorting()
class evStartSorting : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartSorting;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartSorting(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStartSorting : virtual public AOMEvent {
    DECLARE_META_EVENT(evStartSorting)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evStartSorting_SGCS_USECASE_id;
//#]

//## event evLitterGenerated()
class evLitterGenerated : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevLitterGenerated;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evLitterGenerated(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevLitterGenerated : virtual public AOMEvent {
    DECLARE_META_EVENT(evLitterGenerated)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evLitterGenerated_SGCS_USECASE_id;
//#]

//## event evOverfill()
class evOverfill : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevOverfill;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evOverfill(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevOverfill : virtual public AOMEvent {
    DECLARE_META_EVENT(evOverfill)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evOverfill_SGCS_USECASE_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SGCS_USECASE.h
*********************************************************************/
