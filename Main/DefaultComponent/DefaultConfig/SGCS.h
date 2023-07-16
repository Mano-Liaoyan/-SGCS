/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SGCS
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SGCS.h
*********************************************************************/

#ifndef SGCS_H
#define SGCS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include "omcollec.h"
//## classInstance itsCentralServer_1
#include "CentralServer.h"
//## classInstance itsCommunicationSystem_1
#include "CommunicationSystem.h"
//## classInstance itsGarbageBin_3
#include "GarbageBin.h"
//## classInstance itsGarbgeCollectVehicle_1
#include "GarbgeCollectVehicle.h"
//## link itsDevices
class Devices;

//## link itsEnviroment
class Enviroment;

//## link itsGerographicInformationSystem
class GerographicInformationSystem;

//## link itsRegulations
class Regulations;

//## link itsSensorSystem
class SensorSystem;

//## link itsStakeholder
class Stakeholder;

//## link itsUser
class User;

//## package Default

//## class SGCS
class SGCS {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSGCS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SGCS(void);
    
    //## auto_generated
    ~SGCS(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const CentralServer* getItsCentralServer(void) const;
    
    //## auto_generated
    void setItsCentralServer(CentralServer* const p_CentralServer);
    
    //## auto_generated
    const CentralServer* getItsCentralServer_1(void) const;
    
    //## auto_generated
    const CommunicationSystem* getItsCommunicationSystem(void) const;
    
    //## auto_generated
    void setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    const CommunicationSystem* getItsCommunicationSystem_1(void) const;
    
    //## auto_generated
    const Devices* getItsDevices(void) const;
    
    //## auto_generated
    void setItsDevices(Devices* const p_Devices);
    
    //## auto_generated
    const Enviroment* getItsEnviroment(void) const;
    
    //## auto_generated
    void setItsEnviroment(Enviroment* const p_Enviroment);
    
    //## auto_generated
    const GarbageBin* getItsGarbageBin(void) const;
    
    //## auto_generated
    void setItsGarbageBin(GarbageBin* const p_GarbageBin);
    
    //## auto_generated
    const GarbageBin* getItsGarbageBin_1(void) const;
    
    //## auto_generated
    void setItsGarbageBin_1(GarbageBin* const p_GarbageBin);
    
    //## auto_generated
    const GarbageBin* getItsGarbageBin_2(void) const;
    
    //## auto_generated
    void setItsGarbageBin_2(GarbageBin* const p_GarbageBin);
    
    //## auto_generated
    const GarbageBin* getItsGarbageBin_3(void) const;
    
    //## auto_generated
    const GarbgeCollectVehicle* getItsGarbgeCollectVehicle(void) const;
    
    //## auto_generated
    void setItsGarbgeCollectVehicle(GarbgeCollectVehicle* const p_GarbgeCollectVehicle);
    
    //## auto_generated
    const GarbgeCollectVehicle* getItsGarbgeCollectVehicle_1(void) const;
    
    //## auto_generated
    const GerographicInformationSystem* getItsGerographicInformationSystem(void) const;
    
    //## auto_generated
    void setItsGerographicInformationSystem(GerographicInformationSystem* const p_GerographicInformationSystem);
    
    //## auto_generated
    const Regulations* getItsRegulations(void) const;
    
    //## auto_generated
    void setItsRegulations(Regulations* const p_Regulations);
    
    //## auto_generated
    const SensorSystem* getItsSensorSystem(void) const;
    
    //## auto_generated
    void setItsSensorSystem(SensorSystem* const p_SensorSystem);
    
    //## auto_generated
    const Stakeholder* getItsStakeholder(void) const;
    
    //## auto_generated
    void setItsStakeholder(Stakeholder* const p_Stakeholder);
    
    //## auto_generated
    OMIterator<User*> getItsUser(void) const;
    
    //## auto_generated
    void addItsUser(User* const p_User);
    
    //## auto_generated
    void removeItsUser(User* p_User);
    
    //## auto_generated
    void clearItsUser(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    CentralServer* itsCentralServer;		//## link itsCentralServer
    
    CentralServer itsCentralServer_1;		//## classInstance itsCentralServer_1
    
    CommunicationSystem* itsCommunicationSystem;		//## link itsCommunicationSystem
    
    CommunicationSystem itsCommunicationSystem_1;		//## classInstance itsCommunicationSystem_1
    
    Devices* itsDevices;		//## link itsDevices
    
    Enviroment* itsEnviroment;		//## link itsEnviroment
    
    GarbageBin* itsGarbageBin;		//## link itsGarbageBin
    
    GarbageBin* itsGarbageBin_1;		//## link itsGarbageBin_1
    
    GarbageBin* itsGarbageBin_2;		//## link itsGarbageBin_2
    
    GarbageBin itsGarbageBin_3;		//## classInstance itsGarbageBin_3
    
    GarbgeCollectVehicle* itsGarbgeCollectVehicle;		//## link itsGarbgeCollectVehicle
    
    GarbgeCollectVehicle itsGarbgeCollectVehicle_1;		//## classInstance itsGarbgeCollectVehicle_1
    
    GerographicInformationSystem* itsGerographicInformationSystem;		//## link itsGerographicInformationSystem
    
    Regulations* itsRegulations;		//## link itsRegulations
    
    SensorSystem* itsSensorSystem;		//## link itsSensorSystem
    
    Stakeholder* itsStakeholder;		//## link itsStakeholder
    
    OMCollection<User*> itsUser;		//## link itsUser
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCentralServer(CentralServer* const p_CentralServer);
    
    //## auto_generated
    void _setItsCentralServer(CentralServer* const p_CentralServer);
    
    //## auto_generated
    void _clearItsCentralServer(void);
    
    //## auto_generated
    void __setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _clearItsCommunicationSystem(void);
    
    //## auto_generated
    void __setItsDevices(Devices* const p_Devices);
    
    //## auto_generated
    void _setItsDevices(Devices* const p_Devices);
    
    //## auto_generated
    void _clearItsDevices(void);
    
    //## auto_generated
    void __setItsEnviroment(Enviroment* const p_Enviroment);
    
    //## auto_generated
    void _setItsEnviroment(Enviroment* const p_Enviroment);
    
    //## auto_generated
    void _clearItsEnviroment(void);
    
    //## auto_generated
    void __setItsGarbageBin(GarbageBin* const p_GarbageBin);
    
    //## auto_generated
    void _setItsGarbageBin(GarbageBin* const p_GarbageBin);
    
    //## auto_generated
    void _clearItsGarbageBin(void);
    
    //## auto_generated
    void __setItsGarbgeCollectVehicle(GarbgeCollectVehicle* const p_GarbgeCollectVehicle);
    
    //## auto_generated
    void _setItsGarbgeCollectVehicle(GarbgeCollectVehicle* const p_GarbgeCollectVehicle);
    
    //## auto_generated
    void _clearItsGarbgeCollectVehicle(void);
    
    //## auto_generated
    void __setItsGerographicInformationSystem(GerographicInformationSystem* const p_GerographicInformationSystem);
    
    //## auto_generated
    void _setItsGerographicInformationSystem(GerographicInformationSystem* const p_GerographicInformationSystem);
    
    //## auto_generated
    void _clearItsGerographicInformationSystem(void);
    
    //## auto_generated
    void __setItsRegulations(Regulations* const p_Regulations);
    
    //## auto_generated
    void _setItsRegulations(Regulations* const p_Regulations);
    
    //## auto_generated
    void _clearItsRegulations(void);
    
    //## auto_generated
    void __setItsSensorSystem(SensorSystem* const p_SensorSystem);
    
    //## auto_generated
    void _setItsSensorSystem(SensorSystem* const p_SensorSystem);
    
    //## auto_generated
    void _clearItsSensorSystem(void);
    
    //## auto_generated
    void __setItsStakeholder(Stakeholder* const p_Stakeholder);
    
    //## auto_generated
    void _setItsStakeholder(Stakeholder* const p_Stakeholder);
    
    //## auto_generated
    void _clearItsStakeholder(void);
    
    //## auto_generated
    void _addItsUser(User* const p_User);
    
    //## auto_generated
    void _removeItsUser(User* const p_User);
    
    //## auto_generated
    void _clearItsUser(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSGCS : virtual public AOMInstance {
    DECLARE_META(SGCS, OMAnimatedSGCS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SGCS.h
*********************************************************************/
