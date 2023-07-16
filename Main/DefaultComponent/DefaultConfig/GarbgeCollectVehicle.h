/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GarbgeCollectVehicle
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GarbgeCollectVehicle.h
*********************************************************************/

#ifndef GarbgeCollectVehicle_H
#define GarbgeCollectVehicle_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## classInstance VehicleSensors
#include "SensorSystem.h"
//## classInstance itsUC_RecieveDataFromSensor
#include "UC_RecieveDataFromSensor.h"
//## classInstance itsUC_SendDataToServer
#include "UC_SendDataToServer.h"
//## link itsSGCS
class SGCS;

//## package Default

//## class GarbgeCollectVehicle
class GarbgeCollectVehicle {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGarbgeCollectVehicle;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GarbgeCollectVehicle(void);
    
    //## auto_generated
    ~GarbgeCollectVehicle(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SensorSystem* getVehicleSensors(void) const;
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    const UC_RecieveDataFromSensor* getItsUC_RecieveDataFromSensor(void) const;
    
    //## auto_generated
    const UC_SendDataToServer* getItsUC_SendDataToServer(void) const;

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SensorSystem VehicleSensors;		//## classInstance VehicleSensors
    
    SGCS* itsSGCS;		//## link itsSGCS
    
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
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGarbgeCollectVehicle : virtual public AOMInstance {
    DECLARE_META(GarbgeCollectVehicle, OMAnimatedGarbgeCollectVehicle)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GarbgeCollectVehicle.h
*********************************************************************/
