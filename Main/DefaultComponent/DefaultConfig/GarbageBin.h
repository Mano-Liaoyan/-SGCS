/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GarbageBin
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GarbageBin.h
*********************************************************************/

#ifndef GarbageBin_H
#define GarbageBin_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## classInstance itsGarbageTank
#include "GarbageTank.h"
//## classInstance Garbagebinsensors
#include "SensorSystem.h"
//## classInstance itsSortingMechanism
#include "SortingMechanism.h"
//## link itsSGCS
class SGCS;

//## package Default

//## class GarbageBin
class GarbageBin {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGarbageBin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GarbageBin(void);
    
    //## auto_generated
    ~GarbageBin(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SensorSystem* getGarbagebinsensors(void) const;
    
    //## auto_generated
    const GarbageTank* getItsGarbageTank(void) const;
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    const SortingMechanism* getItsSortingMechanism(void) const;

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SensorSystem Garbagebinsensors;		//## classInstance Garbagebinsensors
    
    GarbageTank itsGarbageTank;		//## classInstance itsGarbageTank
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    SortingMechanism itsSortingMechanism;		//## classInstance itsSortingMechanism
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGarbageBin : virtual public AOMInstance {
    DECLARE_META(GarbageBin, OMAnimatedGarbageBin)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GarbageBin.h
*********************************************************************/
