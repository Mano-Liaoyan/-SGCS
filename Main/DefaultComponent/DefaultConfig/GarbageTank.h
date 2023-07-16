/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GarbageTank
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\GarbageTank.h
*********************************************************************/

#ifndef GarbageTank_H
#define GarbageTank_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class GarbageTank
class GarbageTank {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGarbageTank;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    GarbageTank(void);
    
    //## auto_generated
    ~GarbageTank(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGarbageTank : virtual public AOMInstance {
    DECLARE_META(GarbageTank, OMAnimatedGarbageTank)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GarbageTank.h
*********************************************************************/
