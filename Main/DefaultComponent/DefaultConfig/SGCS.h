/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
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
//## link itsCentralServer
class CentralServer;

//## link itsCloudPlatform
class CloudPlatform;

//## link itsCommunicationSystem
class CommunicationSystem;

//## link itsEnviroment
class Enviroment;

//## link itsGarbageBin
class GarbageBin;

//## link itsGarbgeCollectVehicle
class GarbgeCollectVehicle;

//## link itsSensorSystem
class SensorSystem;

//## link itsUser
class User;

//## package Default

//## class SGCS
class SGCS {
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
    const CloudPlatform* getItsCloudPlatform(void) const;
    
    //## auto_generated
    void setItsCloudPlatform(CloudPlatform* const p_CloudPlatform);
    
    //## auto_generated
    const CommunicationSystem* getItsCommunicationSystem(void) const;
    
    //## auto_generated
    void setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
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
    const GarbgeCollectVehicle* getItsGarbgeCollectVehicle(void) const;
    
    //## auto_generated
    void setItsGarbgeCollectVehicle(GarbgeCollectVehicle* const p_GarbgeCollectVehicle);
    
    //## auto_generated
    const SensorSystem* getItsSensorSystem(void) const;
    
    //## auto_generated
    void setItsSensorSystem(SensorSystem* const p_SensorSystem);
    
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
    
    CloudPlatform* itsCloudPlatform;		//## link itsCloudPlatform
    
    CommunicationSystem* itsCommunicationSystem;		//## link itsCommunicationSystem
    
    Enviroment* itsEnviroment;		//## link itsEnviroment
    
    GarbageBin* itsGarbageBin;		//## link itsGarbageBin
    
    GarbageBin* itsGarbageBin_1;		//## link itsGarbageBin_1
    
    GarbageBin* itsGarbageBin_2;		//## link itsGarbageBin_2
    
    GarbgeCollectVehicle* itsGarbgeCollectVehicle;		//## link itsGarbgeCollectVehicle
    
    SensorSystem* itsSensorSystem;		//## link itsSensorSystem
    
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
    void __setItsCloudPlatform(CloudPlatform* const p_CloudPlatform);
    
    //## auto_generated
    void _setItsCloudPlatform(CloudPlatform* const p_CloudPlatform);
    
    //## auto_generated
    void _clearItsCloudPlatform(void);
    
    //## auto_generated
    void __setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _clearItsCommunicationSystem(void);
    
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
    void __setItsSensorSystem(SensorSystem* const p_SensorSystem);
    
    //## auto_generated
    void _setItsSensorSystem(SensorSystem* const p_SensorSystem);
    
    //## auto_generated
    void _clearItsSensorSystem(void);
    
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
