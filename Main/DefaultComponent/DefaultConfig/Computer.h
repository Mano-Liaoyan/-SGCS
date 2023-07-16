/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Computer
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Computer.h
*********************************************************************/

#ifndef Computer_H
#define Computer_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## class Computer
#include "Devices.h"
//## package Default

//## class Computer
class Computer : public Devices {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedComputer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Computer(void);
    
    //## auto_generated
    ~Computer(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedComputer : public OMAnimatedDevices {
    DECLARE_META(Computer, OMAnimatedComputer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Computer.h
*********************************************************************/
