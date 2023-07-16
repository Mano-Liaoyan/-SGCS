/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "User.h"
//## link itsSGCS
#include "SGCS.h"
//#[ ignore
#define SGCS_USECASE_User_User_SERIALIZE OM_NO_OP
//#]

//## package SGCS_USECASE

//## actor User
User::User(void) : itsSGCS(NULL) {
    NOTIFY_CONSTRUCTOR(User, User(), 0, SGCS_USECASE_User_User_SERIALIZE);
}

User::~User(void) {
    NOTIFY_DESTRUCTOR(~User, true);
    cleanUpRelations();
}

const SGCS* User::getItsSGCS(void) const {
    return itsSGCS;
}

void User::setItsSGCS(SGCS* const p_SGCS) {
    if(p_SGCS != NULL)
        {
            p_SGCS->_addItsUser(this);
        }
    _setItsSGCS(p_SGCS);
}

void User::cleanUpRelations(void) {
    if(itsSGCS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
            SGCS* current = itsSGCS;
            if(current != NULL)
                {
                    current->_removeItsUser(this);
                }
            itsSGCS = NULL;
        }
}

void User::__setItsSGCS(SGCS* const p_SGCS) {
    itsSGCS = p_SGCS;
    if(p_SGCS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSGCS", p_SGCS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSGCS");
        }
}

void User::_setItsSGCS(SGCS* p_SGCS) {
    if(itsSGCS != NULL)
        {
            itsSGCS->_removeItsUser(this);
        }
    __setItsSGCS(p_SGCS);
}

void User::_clearItsSGCS(void) {
    NOTIFY_RELATION_CLEARED("itsSGCS");
    itsSGCS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUser::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSGCS", false, true);
    if(myReal->itsSGCS)
        {
            aomsRelations->ADD_ITEM(myReal->itsSGCS);
        }
}
//#]

IMPLEMENT_META_P(User, SGCS_USECASE, SGCS_USECASE, false, OMAnimatedUser)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/
