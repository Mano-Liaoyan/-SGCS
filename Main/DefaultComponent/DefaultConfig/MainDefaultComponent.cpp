/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Default.h"
//## auto_generated
#include "SGCS_USECASE.h"
//## auto_generated
#include "UC_MonitorFillLevel.h"
//## auto_generated
#include "UC_SortGarbage.h"
DefaultComponent::DefaultComponent(void) {
    SGCS_USECASE_initRelations();
    (void) SGCS_USECASE_startBehavior();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                UC_MonitorFillLevel p_UC_MonitorFillLevel;
                p_UC_MonitorFillLevel.setShouldDelete(false);
                UC_SortGarbage p_UC_SortGarbage;
                p_UC_SortGarbage.setShouldDelete(false);
                DefaultComponent initializer_DefaultComponent;
                (void) p_UC_MonitorFillLevel.startBehavior();
                (void) p_UC_SortGarbage.startBehavior();
                //#[ configuration DefaultComponent::DefaultConfig 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
