/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
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
//## classInstance itsNotification
#include "Notification.h"
//## classInstance itsRecieveData
#include "RecieveData.h"
//## classInstance itsUC_ManageData
#include "UC_ManageData.h"
//## classInstance itsUC_OpetimizeRoute
#include "UC_OpetimizeRoute.h"
//## classInstance itsUC_ProcessingData
#include "UC_ProcessingData.h"
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
    const float getBinfilllevel(void) const;
    
    //## auto_generated
    void setBinfilllevel(const float p_binfilllevel);
    
    //## auto_generated
    const float getLocationX(void) const;
    
    //## auto_generated
    void setLocationX(const float p_locationX);
    
    //## auto_generated
    const float getLocationY(void) const;
    
    //## auto_generated
    void setLocationY(const float p_locationY);
    
    //## auto_generated
    const Notification* getItsNotification(void) const;
    
    //## auto_generated
    const RecieveData* getItsRecieveData(void) const;
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    const UC_ManageData* getItsUC_ManageData(void) const;
    
    //## auto_generated
    const UC_OpetimizeRoute* getItsUC_OpetimizeRoute(void) const;
    
    //## auto_generated
    const UC_ProcessingData* getItsUC_ProcessingData(void) const;

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    float binfilllevel;		//## attribute binfilllevel
    
    float locationX;		//## attribute locationX
    
    float locationY;		//## attribute locationY
    
    ////    Relations and components    ////
    
    Notification itsNotification;		//## classInstance itsNotification
    
    RecieveData itsRecieveData;		//## classInstance itsRecieveData
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    UC_ManageData itsUC_ManageData;		//## classInstance itsUC_ManageData
    
    UC_OpetimizeRoute itsUC_OpetimizeRoute;		//## classInstance itsUC_OpetimizeRoute
    
    UC_ProcessingData itsUC_ProcessingData;		//## classInstance itsUC_ProcessingData
    
    ////    Framework operations    ////

public :

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

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CentralServer.h
*********************************************************************/
