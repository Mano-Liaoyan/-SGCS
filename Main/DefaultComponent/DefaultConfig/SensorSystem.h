/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorSystem
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SensorSystem.h
*********************************************************************/

#ifndef SensorSystem_H
#define SensorSystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## classInstance itsBattery
#include "Battery.h"
//## classInstance itsFillLevelSensor
#include "FillLevelSensor.h"
//## classInstance itsGPSTracker
#include "GPSTracker.h"
//## classInstance itsHumiditySensor
#include "HumiditySensor.h"
//## classInstance itsTemperatureSensor
#include "TemperatureSensor.h"
//## classInstance itsWIFIBlock
#include "WIFIBlock.h"
//## link itsCommunicationSystem
class CommunicationSystem;

//## link itsSGCS
class SGCS;

//## package Default

//## class SensorSystem
class SensorSystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SensorSystem(void);
    
    //## auto_generated
    ~SensorSystem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const float getFillleve(void) const;
    
    //## auto_generated
    void setFillleve(const float p_fillleve);
    
    //## auto_generated
    const float getLocationX(void) const;
    
    //## auto_generated
    void setLocationX(const float p_locationX);
    
    //## auto_generated
    const float getLocationY(void) const;
    
    //## auto_generated
    void setLocationY(const float p_locationY);
    
    //## auto_generated
    const float getTemp(void) const;
    
    //## auto_generated
    void setTemp(const float p_temp);
    
    //## auto_generated
    const Battery* getItsBattery(void) const;
    
    //## auto_generated
    const CommunicationSystem* getItsCommunicationSystem(void) const;
    
    //## auto_generated
    void setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    const FillLevelSensor* getItsFillLevelSensor(void) const;
    
    //## auto_generated
    const GPSTracker* getItsGPSTracker(void) const;
    
    //## auto_generated
    const HumiditySensor* getItsHumiditySensor(void) const;
    
    //## auto_generated
    const SGCS* getItsSGCS(void) const;
    
    //## auto_generated
    void setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    const TemperatureSensor* getItsTemperatureSensor(void) const;
    
    //## auto_generated
    const WIFIBlock* getItsWIFIBlock(void) const;

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    float fillleve;		//## attribute fillleve
    
    float locationX;		//## attribute locationX
    
    float locationY;		//## attribute locationY
    
    float temp;		//## attribute temp
    
    ////    Relations and components    ////
    
    Battery itsBattery;		//## classInstance itsBattery
    
    CommunicationSystem* itsCommunicationSystem;		//## link itsCommunicationSystem
    
    FillLevelSensor itsFillLevelSensor;		//## classInstance itsFillLevelSensor
    
    GPSTracker itsGPSTracker;		//## classInstance itsGPSTracker
    
    HumiditySensor itsHumiditySensor;		//## classInstance itsHumiditySensor
    
    SGCS* itsSGCS;		//## link itsSGCS
    
    TemperatureSensor itsTemperatureSensor;		//## classInstance itsTemperatureSensor
    
    WIFIBlock itsWIFIBlock;		//## classInstance itsWIFIBlock
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _clearItsCommunicationSystem(void);
    
    //## auto_generated
    void __setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _setItsSGCS(SGCS* const p_SGCS);
    
    //## auto_generated
    void _clearItsSGCS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensorSystem : virtual public AOMInstance {
    DECLARE_META(SensorSystem, OMAnimatedSensorSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorSystem.h
*********************************************************************/
