/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SortingMechanism
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SortingMechanism.h
*********************************************************************/

#ifndef SortingMechanism_H
#define SortingMechanism_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class SortingMechanism
class SortingMechanism {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSortingMechanism;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SortingMechanism(void);
    
    //## auto_generated
    ~SortingMechanism(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSortingMechanism : virtual public AOMInstance {
    DECLARE_META(SortingMechanism, OMAnimatedSortingMechanism)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SortingMechanism.h
*********************************************************************/
