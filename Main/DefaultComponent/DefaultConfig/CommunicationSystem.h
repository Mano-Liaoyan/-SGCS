/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationSystem
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.h
*********************************************************************/

#ifndef CommunicationSystem_H
#define CommunicationSystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## classInstance itsNotification
#include "Notification.h"
//## classInstance itsUC_RecieveDataFromSensor
#include "UC_RecieveDataFromSensor.h"
//## classInstance itsUC_SendDataToServer
#include "UC_SendDataToServer.h"
//## link itsSGCS
class SGCS;

//## link itsSensorSystem
class SensorSystem;

//## package Default

//## class CommunicationSystem
class CommunicationSystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunicationSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommunicationSystem(void);
    
    //## auto_generated
    ~CommunicationSystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const float getBinlocation(void) const;
    
    //## auto_generated
    void setBinlocation(const float p_Binlocation);
    
    //## auto_generated
    const float getBinfilllevel(void) const;
    
    //## auto_generated
    void setBinfilllevel(const float p_binfilllevel);
    
    //## auto_generated
    const float getVehiclelocation(void) const;
    
    //## auto_generated
    void setVehiclelocation(const float p_vehiclelocation);
    
    //## auto_generated
    const Notification* getItsNotification(void) const;
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    const SensorSystem* getItsSensorSystem(void) const;
    
    //## auto_generated
    void setItsSensorSystem(SensorSystem* const p_SensorSystem);
    
    //## auto_generated
    const UC_RecieveDataFromSensor* getItsUC_RecieveDataFromSensor(void) const;
    
    //## auto_generated
    const UC_SendDataToServer* getItsUC_SendDataToServer(void) const;

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    float Binlocation;		//## attribute Binlocation
    
    float binfilllevel;		//## attribute binfilllevel
    
    float vehiclelocation;		//## attribute vehiclelocation
    
    ////    Relations and components    ////
    
    Notification itsNotification;		//## classInstance itsNotification
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    SensorSystem* itsSensorSystem;		//## link itsSensorSystem
    
    UC_RecieveDataFromSensor itsUC_RecieveDataFromSensor;		//## classInstance itsUC_RecieveDataFromSensor
    
    UC_SendDataToServer itsUC_SendDataToServer;		//## classInstance itsUC_SendDataToServer
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
    
    //## auto_generated
    void __setItsSensorSystem(SensorSystem* const p_SensorSystem);
    
    //## auto_generated
    void _setItsSensorSystem(SensorSystem* const p_SensorSystem);
    
    //## auto_generated
    void _clearItsSensorSystem(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunicationSystem : virtual public AOMInstance {
    DECLARE_META(CommunicationSystem, OMAnimatedCommunicationSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.h
*********************************************************************/
