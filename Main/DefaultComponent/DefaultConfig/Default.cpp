/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance itsCentralServer
#include "CentralServer.h"
//## classInstance itsCommunicationSystem
#include "CommunicationSystem.h"
//## classInstance itsGarbageBin
#include "GarbageBin.h"
//## classInstance itsGarbgeCollectVehicle
#include "GarbgeCollectVehicle.h"
//## auto_generated
#include "Battery.h"
//## auto_generated
#include "Computer.h"
//## auto_generated
#include "Devices.h"
//## auto_generated
#include "Enviroment.h"
//## auto_generated
#include "EnvironmentalProtection.h"
//## auto_generated
#include "FillLevelSensor.h"
//## auto_generated
#include "Garbage.h"
//## auto_generated
#include "GarbageTank.h"
//## auto_generated
#include "GerographicInformationSystem.h"
//## auto_generated
#include "GovernmentOfficers.h"
//## auto_generated
#include "GovernWasteManagement.h"
//## auto_generated
#include "GPSTracker.h"
//## auto_generated
#include "HumiditySensor.h"
//## auto_generated
#include "Notification.h"
//## auto_generated
#include "RecieveData.h"
//## auto_generated
#include "Regulations.h"
//## auto_generated
#include "SensorSystem.h"
//## auto_generated
#include "SGCS.h"
//## auto_generated
#include "Smartphone.h"
//## auto_generated
#include "SortingMechanism.h"
//## auto_generated
#include "Stakeholder.h"
//## auto_generated
#include "StoringData.h"
//## auto_generated
#include "TemperatureSensor.h"
//## auto_generated
#include "UC_ManageData.h"
//## auto_generated
#include "UC_MonitorDashBoard.h"
//## auto_generated
#include "UC_MonitorDataUsingMobileApp.h"
//## auto_generated
#include "UC_OpetimizeRoute.h"
//## auto_generated
#include "UC_ProcessingData.h"
//## auto_generated
#include "UC_RecieveDataFromSensor.h"
//## auto_generated
#include "UC_SendDataToServer.h"
//## auto_generated
#include "WIFIBlock.h"
//## package Default


//## classInstance itsCentralServer
CentralServer itsCentralServer;

//## classInstance itsCommunicationSystem
CommunicationSystem itsCommunicationSystem;

//## classInstance itsGarbageBin
GarbageBin itsGarbageBin;

//## classInstance itsGarbgeCollectVehicle
GarbgeCollectVehicle itsGarbgeCollectVehicle;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations(void) {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsGarbageBin, GarbageBin, "itsGarbageBin", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsGarbgeCollectVehicle, GarbgeCollectVehicle, "itsGarbgeCollectVehicle", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsCommunicationSystem, CommunicationSystem, "itsCommunicationSystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsCentralServer, CentralServer, "itsCentralServer", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
