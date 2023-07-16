/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Enviroment
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Enviroment.h
*********************************************************************/

#ifndef Enviroment_H
#define Enviroment_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance LitteringA
#include "UC_Littering.h"
//## classInstance binA
#include "UC_MonitorFillLevel.h"
//## link itsSGCS
class SGCS;

//## package Default

//## class Enviroment
class Enviroment : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEnviroment;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Enviroment(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~Enviroment(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const UC_Littering* getLitteringA(void) const;
    
    //## auto_generated
    const UC_Littering* getLitteringB(void) const;
    
    //## auto_generated
    const UC_Littering* getLitteringC(void) const;
    
    //## auto_generated
    const UC_MonitorFillLevel* getBinA(void) const;
    
    //## auto_generated
    const UC_MonitorFillLevel* getBinB(void) const;
    
    //## auto_generated
    const UC_MonitorFillLevel* getBinC(void) const;
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    UC_Littering LitteringA;		//## classInstance LitteringA
    
    UC_Littering LitteringB;		//## classInstance LitteringB
    
    UC_Littering LitteringC;		//## classInstance LitteringC
    
    UC_MonitorFillLevel binA;		//## classInstance binA
    
    UC_MonitorFillLevel binB;		//## classInstance binB
    
    UC_MonitorFillLevel binC;		//## classInstance binC
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
    
    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEnviroment : virtual public AOMInstance {
    DECLARE_META(Enviroment, OMAnimatedEnviroment)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Enviroment.h
*********************************************************************/
