/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SystemManager
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SystemManager.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SystemManager.h"
//#[ ignore
#define SGCS_USECASE_SystemManager_SystemManager_SERIALIZE OM_NO_OP
//#]

//## package SGCS_USECASE

//## actor SystemManager
SystemManager::SystemManager(void) : User() {
    NOTIFY_CONSTRUCTOR(SystemManager, SystemManager(), 0, SGCS_USECASE_SystemManager_SystemManager_SERIALIZE);
}

SystemManager::~SystemManager(void) {
    NOTIFY_DESTRUCTOR(~SystemManager, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSystemManager::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUser::serializeAttributes(aomsAttributes);
}

void OMAnimatedSystemManager::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUser::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(SystemManager, SGCS_USECASE, false, User, OMAnimatedUser, OMAnimatedSystemManager)

OMINIT_SUPERCLASS(User, OMAnimatedUser)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SystemManager.cpp
*********************************************************************/
