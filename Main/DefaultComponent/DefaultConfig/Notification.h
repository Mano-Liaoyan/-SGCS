/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Notification
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Notification.h
*********************************************************************/

#ifndef Notification_H
#define Notification_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Notification
class Notification {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNotification;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Notification(void);
    
    //## auto_generated
    ~Notification(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNotification : virtual public AOMInstance {
    DECLARE_META(Notification, OMAnimatedNotification)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Notification.h
*********************************************************************/
