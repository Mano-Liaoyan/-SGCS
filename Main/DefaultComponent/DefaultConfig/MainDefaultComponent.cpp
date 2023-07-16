/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
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
#include "UC_Littering.h"
DefaultComponent::DefaultComponent(void) {
    Default_initRelations();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                UC_Littering p_UC_Littering;
                p_UC_Littering.setShouldDelete(false);
                DefaultComponent initializer_DefaultComponent;
                (void) p_UC_Littering.startBehavior();
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
