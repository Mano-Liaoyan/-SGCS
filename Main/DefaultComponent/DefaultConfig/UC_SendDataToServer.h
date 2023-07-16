/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_SendDataToServer
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_SendDataToServer.h
*********************************************************************/

#ifndef UC_SendDataToServer_H
#define UC_SendDataToServer_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class UC_SendDataToServer
class UC_SendDataToServer {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_SendDataToServer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_SendDataToServer(void);
    
    //## auto_generated
    ~UC_SendDataToServer(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_SendDataToServer : virtual public AOMInstance {
    DECLARE_META(UC_SendDataToServer, OMAnimatedUC_SendDataToServer)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_SendDataToServer.h
*********************************************************************/
