/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Notification
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Notification.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Notification.h"
//#[ ignore
#define Default_Notification_Notification_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Notification
Notification::Notification(void) {
    NOTIFY_CONSTRUCTOR(Notification, Notification(), 0, Default_Notification_Notification_SERIALIZE);
}

Notification::~Notification(void) {
    NOTIFY_DESTRUCTOR(~Notification, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Notification, Default, Default, false, OMAnimatedNotification)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Notification.cpp
*********************************************************************/
