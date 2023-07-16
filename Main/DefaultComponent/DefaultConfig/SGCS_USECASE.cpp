/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SGCS_USECASE
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SGCS_USECASE.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SGCS_USECASE.h"
//## auto_generated
#include "UC_Littering.h"
//## auto_generated
#include "UC_MonitorFillLevel.h"
//## auto_generated
#include "UC_SortGarbage.h"
//#[ ignore
#define evStartLittering_SERIALIZE OM_NO_OP

#define evStartLittering_UNSERIALIZE OM_NO_OP

#define evStartLittering_CONSTRUCTOR evStartLittering()

#define evStartSorting_SERIALIZE OM_NO_OP

#define evStartSorting_UNSERIALIZE OM_NO_OP

#define evStartSorting_CONSTRUCTOR evStartSorting()

#define evLitterGenerated_SERIALIZE OM_NO_OP

#define evLitterGenerated_UNSERIALIZE OM_NO_OP

#define evLitterGenerated_CONSTRUCTOR evLitterGenerated()

#define evOverfill_SERIALIZE OM_NO_OP

#define evOverfill_UNSERIALIZE OM_NO_OP

#define evOverfill_CONSTRUCTOR evOverfill()
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

//## event evStartSorting()
evStartSorting::evStartSorting(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evStartSorting)
    setId(evStartSorting_SGCS_USECASE_id);
}

//#[ ignore
const IOxfEvent::ID evStartSorting_SGCS_USECASE_id(30002);
//#]

IMPLEMENT_META_EVENT_P(evStartSorting, SGCS_USECASE, SGCS_USECASE, evStartSorting())

//## event evLitterGenerated()
evLitterGenerated::evLitterGenerated(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evLitterGenerated)
    setId(evLitterGenerated_SGCS_USECASE_id);
}

//#[ ignore
const IOxfEvent::ID evLitterGenerated_SGCS_USECASE_id(30003);
//#]

IMPLEMENT_META_EVENT_P(evLitterGenerated, SGCS_USECASE, SGCS_USECASE, evLitterGenerated())

//## event evOverfill()
evOverfill::evOverfill(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evOverfill)
    setId(evOverfill_SGCS_USECASE_id);
}

//#[ ignore
const IOxfEvent::ID evOverfill_SGCS_USECASE_id(30004);
//#]

IMPLEMENT_META_EVENT_P(evOverfill, SGCS_USECASE, SGCS_USECASE, evOverfill())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SGCS_USECASE.cpp
*********************************************************************/
