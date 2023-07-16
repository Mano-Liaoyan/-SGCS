/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CentralServer
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CentralServer.h
*********************************************************************/

#ifndef CentralServer_H
#define CentralServer_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## link itsCloudPlatform
class CloudPlatform;

//## link itsSGCS
class SGCS;

//## package Default

//## class CentralServer
class CentralServer {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCentralServer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CentralServer(void);
    
    //## auto_generated
    ~CentralServer(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const CloudPlatform* getItsCloudPlatform(void) const;
    
    //## auto_generated
    void setItsCloudPlatform(CloudPlatform* const p_CloudPlatform);
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    CloudPlatform* itsCloudPlatform;		//## link itsCloudPlatform
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCloudPlatform(CloudPlatform* const p_CloudPlatform);
    
    //## auto_generated
    void _setItsCloudPlatform(CloudPlatform* const p_CloudPlatform);
    
    //## auto_generated
    void _clearItsCloudPlatform(void);
    
    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCentralServer : virtual public AOMInstance {
    DECLARE_META(CentralServer, OMAnimatedCentralServer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CentralServer.h
*********************************************************************/
