/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GerographicInformationSystem
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GerographicInformationSystem.h
*********************************************************************/

#ifndef GerographicInformationSystem_H
#define GerographicInformationSystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## link itsSGCS
class SGCS;

//## package Default

//## class GerographicInformationSystem
class GerographicInformationSystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGerographicInformationSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GerographicInformationSystem(void);
    
    //## auto_generated
    ~GerographicInformationSystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SGCS* itsSGCS;		//## link itsSGCS
    
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
class OMAnimatedGerographicInformationSystem : virtual public AOMInstance {
    DECLARE_META(GerographicInformationSystem, OMAnimatedGerographicInformationSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GerographicInformationSystem.h
*********************************************************************/
