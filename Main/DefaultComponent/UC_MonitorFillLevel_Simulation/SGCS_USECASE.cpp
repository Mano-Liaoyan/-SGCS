/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: UC_MonitorFillLevel_Simulation
	Model Element	: SGCS_USECASE
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\UC_MonitorFillLevel_Simulation\SGCS_USECASE.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SGCS_USECASE.h"
//## auto_generated
#include "UC_MonitorFillLevel.h"
//#[ ignore
#define evStartLittering_SERIALIZE OM_NO_OP

#define evStartLittering_UNSERIALIZE OM_NO_OP

#define evStartLittering_CONSTRUCTOR evStartLittering()

#define evStart_SERIALIZE OM_NO_OP

#define evStart_UNSERIALIZE OM_NO_OP

#define evStart_CONSTRUCTOR evStart()
//#]

//## package SGCS_USECASE


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SGCS_USECASE, SGCS_USECASE)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evStartLittering()
evStartLittering::evStartLittering(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartLittering)
    setId(evStartLittering_SGCS_USECASE_id);
}

//#[ ignore
const IOxfEvent::ID evStartLittering_SGCS_USECASE_id(30001);
//#]

IMPLEMENT_META_EVENT_P(evStartLittering, SGCS_USECASE, SGCS_USECASE, evStartLittering())

//## event evStart()
evStart::evStart(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_SGCS_USECASE_id);
}

//#[ ignore
const IOxfEvent::ID evStart_SGCS_USECASE_id(30002);
//#]

IMPLEMENT_META_EVENT_P(evStart, SGCS_USECASE, SGCS_USECASE, evStart())

/*********************************************************************
	File Path	: DefaultComponent\UC_MonitorFillLevel_Simulation\SGCS_USECASE.cpp
*********************************************************************/
