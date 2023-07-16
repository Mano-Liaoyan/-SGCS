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
class UC_MonitorFillLevel;

//## classInstance itsUC_SortGarbage
class UC_SortGarbage;

//## package SGCS_USECASE


//## classInstance itsUC_SortGarbage
extern UC_SortGarbage itsUC_SortGarbage;

//## auto_generated
void SGCS_USECASE_initRelations(void);

//## auto_generated
bool SGCS_USECASE_startBehavior(void);

//#[ ignore
class SGCS_USECASE_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SGCS_USECASE_OMInitializer(void);
    
    //## auto_generated
    ~SGCS_USECASE_OMInitializer(void);
};
//#]

//## event evStartLittering(int,bool)
class evStartLittering : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartLittering;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartLittering(void);
    
    //## auto_generated
    evStartLittering(const int p_v, const bool p_recyclable);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getV(void) const;
    
    //## auto_generated
    void setV(const int p_v);
    
    //## auto_generated
    bool getRecyclable(void) const;
    
    //## auto_generated
    void setRecyclable(const bool p_recyclable);
    
    ////    Framework    ////

private :

    int v;		//## auto_generated
    
    bool recyclable;		//## auto_generated
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

//## event evStartSorting(bool)
class evStartSorting : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStartSorting;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStartSorting(void);
    
    //## auto_generated
    evStartSorting(const bool p_recyclable);
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getRecyclable(void) const;
    
    //## auto_generated
    void setRecyclable(const bool p_recyclable);
    
    ////    Framework    ////

private :

    bool recyclable;		//## auto_generated
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SGCS_USECASE.h
*********************************************************************/
