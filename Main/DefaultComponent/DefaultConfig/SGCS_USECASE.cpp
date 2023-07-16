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
//## classInstance itsUC_SortGarbage
#include "UC_SortGarbage.h"
//## auto_generated
#include "UC_MonitorFillLevel.h"
//#[ ignore
#define evStartLittering_SERIALIZE \
    OMADD_SER(v, x2String(myEvent->v))\
    OMADD_SER(recyclable, x2String(myEvent->recyclable))
#define evStartLittering_UNSERIALIZE \
    OMADD_UNSER(int, v, OMDestructiveString2X)\
    OMADD_UNSER(bool, recyclable, OMDestructiveString2X)
#define evStartLittering_CONSTRUCTOR evStartLittering(v, recyclable)

#define evStartSorting_SERIALIZE OMADD_SER(recyclable, x2String(myEvent->recyclable))

#define evStartSorting_UNSERIALIZE OMADD_UNSER(bool, recyclable, OMDestructiveString2X)

#define evStartSorting_CONSTRUCTOR evStartSorting(recyclable)
//#]

//## package SGCS_USECASE


//## classInstance itsUC_SortGarbage
UC_SortGarbage itsUC_SortGarbage;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SGCS_USECASE, SGCS_USECASE)
#endif // _OMINSTRUMENT

void SGCS_USECASE_initRelations(void) {
    {
        {
            itsUC_SortGarbage.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool SGCS_USECASE_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsUC_SortGarbage.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsUC_SortGarbage, UC_SortGarbage, "itsUC_SortGarbage", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
SGCS_USECASE_OMInitializer::SGCS_USECASE_OMInitializer(void) {
    SGCS_USECASE_initRelations();
    (void) SGCS_USECASE_startBehavior();
}

SGCS_USECASE_OMInitializer::~SGCS_USECASE_OMInitializer(void) {
}
//#]

//## event evStartLittering(int,bool)
evStartLittering::evStartLittering(void) {
    NOTIFY_EVENT_CONSTRUCTOR(evStartLittering)
    setId(evStartLittering_SGCS_USECASE_id);
}

evStartLittering::evStartLittering(const int p_v, const bool p_recyclable) : OMEvent() ,v(p_v),recyclable(p_recyclable) {
    NOTIFY_EVENT_CONSTRUCTOR(evStartLittering)
    setId(evStartLittering_SGCS_USECASE_id);
}

int evStartLittering::getV(void) const {
    return v;
}

void evStartLittering::setV(const int p_v) {
    v = p_v;
}

bool evStartLittering::getRecyclable(void) const {
    return recyclable;
}

void evStartLittering::setRecyclable(const bool p_recyclable) {
    recyclable = p_recyclable;
}

//#[ ignore
const IOxfEvent::ID evStartLittering_SGCS_USECASE_id(30001);
//#]

IMPLEMENT_META_EVENT_P(evStartLittering, SGCS_USECASE, SGCS_USECASE, evStartLittering(int,bool))

//## event evStartSorting(bool)
evStartSorting::evStartSorting(void) {
    NOTIFY_EVENT_CONSTRUCTOR(evStartSorting)
    setId(evStartSorting_SGCS_USECASE_id);
}

evStartSorting::evStartSorting(const bool p_recyclable) : OMEvent() ,recyclable(p_recyclable) {
    NOTIFY_EVENT_CONSTRUCTOR(evStartSorting)
    setId(evStartSorting_SGCS_USECASE_id);
}

bool evStartSorting::getRecyclable(void) const {
    return recyclable;
}

void evStartSorting::setRecyclable(const bool p_recyclable) {
    recyclable = p_recyclable;
}

//#[ ignore
const IOxfEvent::ID evStartSorting_SGCS_USECASE_id(30002);
//#]

IMPLEMENT_META_EVENT_P(evStartSorting, SGCS_USECASE, SGCS_USECASE, evStartSorting(bool))

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SGCS_USECASE.cpp
*********************************************************************/
