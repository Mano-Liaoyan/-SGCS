/********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: UC_MonitorFillLevel_Simulation
	Model Element	: UC_MonitorFillLevel_Simulation
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\UC_MonitorFillLevel_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "UC_MonitorFillLevel.h"
RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                UC_MonitorFillLevel p_UC_MonitorFillLevel;
                p_UC_MonitorFillLevel.setShouldDelete(false);
                (void) p_UC_MonitorFillLevel.startBehavior();
                //#[ configuration DefaultComponent::UC_MonitorFillLevel_Simulation 
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
	File Path	: DefaultComponent\UC_MonitorFillLevel_Simulation\MainDefaultComponent.cpp
*********************************************************************/
