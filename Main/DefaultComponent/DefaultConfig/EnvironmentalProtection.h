/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EnvironmentalProtection
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\EnvironmentalProtection.h
*********************************************************************/

#ifndef EnvironmentalProtection_H
#define EnvironmentalProtection_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## class EnvironmentalProtection
#include "Regulations.h"
//## package Default

//## class EnvironmentalProtection
class EnvironmentalProtection : public Regulations {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEnvironmentalProtection;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EnvironmentalProtection(void);
    
    //## auto_generated
    ~EnvironmentalProtection(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEnvironmentalProtection : public OMAnimatedRegulations {
    DECLARE_META(EnvironmentalProtection, OMAnimatedEnvironmentalProtection)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EnvironmentalProtection.h
*********************************************************************/
