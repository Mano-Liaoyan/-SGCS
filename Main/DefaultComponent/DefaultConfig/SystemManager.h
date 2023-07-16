/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SystemManager
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SystemManager.h
*********************************************************************/

#ifndef SystemManager_H
#define SystemManager_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SGCS_USECASE.h"
//## actor SystemManager
#include "User.h"
//## package SGCS_USECASE

//## actor SystemManager
class SystemManager : public User {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSystemManager;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SystemManager(void);
    
    //## auto_generated
    ~SystemManager(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSystemManager : public OMAnimatedUser {
    DECLARE_META(SystemManager, OMAnimatedSystemManager)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SystemManager.h
*********************************************************************/
