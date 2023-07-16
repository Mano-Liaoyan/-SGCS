/*********************************************************************
	Rhapsody	: 9.0 
	Login		: Yanyifan Liao
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Garbage
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Garbage.h
*********************************************************************/

#ifndef Garbage_H
#define Garbage_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Garbage
class Garbage {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGarbage;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Garbage(void);
    
    //## auto_generated
    ~Garbage(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGarbage : virtual public AOMInstance {
    DECLARE_META(Garbage, OMAnimatedGarbage)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Garbage.h
*********************************************************************/
