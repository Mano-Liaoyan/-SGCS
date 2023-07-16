/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GovernmentOfficers
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GovernmentOfficers.h
*********************************************************************/

#ifndef GovernmentOfficers_H
#define GovernmentOfficers_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## class GovernmentOfficers
#include "Stakeholder.h"
//## package Default

//## class GovernmentOfficers
class GovernmentOfficers : public Stakeholder {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGovernmentOfficers;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GovernmentOfficers(void);
    
    //## auto_generated
    ~GovernmentOfficers(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGovernmentOfficers : public OMAnimatedStakeholder {
    DECLARE_META(GovernmentOfficers, OMAnimatedGovernmentOfficers)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GovernmentOfficers.h
*********************************************************************/
