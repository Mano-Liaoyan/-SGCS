/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovernWasteManagement
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GovernWasteManagement.h
*********************************************************************/

#ifndef GovernWasteManagement_H
#define GovernWasteManagement_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## class GovernWasteManagement
#include "Regulations.h"
//## package Default

//## class GovernWasteManagement
class GovernWasteManagement : public Regulations {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGovernWasteManagement;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GovernWasteManagement(void);
    
    //## auto_generated
    ~GovernWasteManagement(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGovernWasteManagement : public OMAnimatedRegulations {
    DECLARE_META(GovernWasteManagement, OMAnimatedGovernWasteManagement)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovernWasteManagement.h
*********************************************************************/
