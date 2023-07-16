/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CloudPlatform
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CloudPlatform.h
*********************************************************************/

#ifndef CloudPlatform_H
#define CloudPlatform_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## link itsCentralServer
class CentralServer;

//## link itsSGCS
class SGCS;

//## package Default

//## class CloudPlatform
class CloudPlatform {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCloudPlatform;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CloudPlatform(void);
    
    //## auto_generated
    ~CloudPlatform(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const CentralServer* getItsCentralServer(void) const;
    
    //## auto_generated
    void setItsCentralServer(CentralServer* const p_CentralServer);
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    CentralServer* itsCentralServer;		//## link itsCentralServer
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCentralServer(CentralServer* const p_CentralServer);
    
    //## auto_generated
    void _setItsCentralServer(CentralServer* const p_CentralServer);
    
    //## auto_generated
    void _clearItsCentralServer(void);
    
    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCloudPlatform : virtual public AOMInstance {
    DECLARE_META(CloudPlatform, OMAnimatedCloudPlatform)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CloudPlatform.h
*********************************************************************/
