/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
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
//## classInstance UC_MonitorDashBoard
#include "UC_MonitorDashBoard.h"
//## classInstance itsUC_MonitorDataUsingMobileApp
#include "UC_MonitorDataUsingMobileApp.h"
//## link itsCentralServer
class CentralServer;

//## link itsSGCS
class SGCS;

//## package Default

//## class CloudPlatform
class CloudPlatform {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

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
    const UC_MonitorDashBoard* getUC_MonitorDashBoard(void) const;
    
    //## auto_generated
    const CentralServer* getItsCentralServer(void) const;
    
    //## auto_generated
    void setItsCentralServer(CentralServer* const p_CentralServer);
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    const UC_MonitorDataUsingMobileApp* getItsUC_MonitorDataUsingMobileApp(void) const;

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    UC_MonitorDashBoard;		//## classInstance UC_MonitorDashBoard
    
    CentralServer* itsCentralServer;		//## link itsCentralServer
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    UC_MonitorDataUsingMobileApp itsUC_MonitorDataUsingMobileApp;		//## classInstance itsUC_MonitorDataUsingMobileApp
    
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
