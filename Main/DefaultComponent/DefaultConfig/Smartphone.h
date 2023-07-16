/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smartphone
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Smartphone.h
*********************************************************************/

#ifndef Smartphone_H
#define Smartphone_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## class Smartphone
#include "Devices.h"
//## package Default

//## class Smartphone
class Smartphone : public Devices {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSmartphone;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Smartphone(void);
    
    //## auto_generated
    ~Smartphone(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSmartphone : public OMAnimatedDevices {
    DECLARE_META(Smartphone, OMAnimatedSmartphone)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smartphone.h
*********************************************************************/
