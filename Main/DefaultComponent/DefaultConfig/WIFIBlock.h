/*********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WIFIBlock
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\WIFIBlock.h
*********************************************************************/

#ifndef WIFIBlock_H
#define WIFIBlock_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class WIFIBlock
class WIFIBlock {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWIFIBlock;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WIFIBlock(void);
    
    //## auto_generated
    ~WIFIBlock(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWIFIBlock : virtual public AOMInstance {
    DECLARE_META(WIFIBlock, OMAnimatedWIFIBlock)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WIFIBlock.h
*********************************************************************/
