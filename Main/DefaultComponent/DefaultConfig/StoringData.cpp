/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StoringData
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\StoringData.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "StoringData.h"
//#[ ignore
#define Default_StoringData_StoringData_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class StoringData
StoringData::StoringData(void) : filllevel(0.0), locationX(0.0), locationY(0.0) {
    NOTIFY_CONSTRUCTOR(StoringData, StoringData(), 0, Default_StoringData_StoringData_SERIALIZE);
}

StoringData::~StoringData(void) {
    NOTIFY_DESTRUCTOR(~StoringData, true);
}

const float StoringData::getFilllevel(void) const {
    return filllevel;
}

void StoringData::setFilllevel(const float p_filllevel) {
    filllevel = p_filllevel;
}

const float StoringData::getLocationX(void) const {
    return locationX;
}

void StoringData::setLocationX(const float p_locationX) {
    locationX = p_locationX;
}

const float StoringData::getLocationY(void) const {
    return locationY;
}

void StoringData::setLocationY(const float p_locationY) {
    locationY = p_locationY;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStoringData::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("filllevel", x2String(myReal->filllevel));
    aomsAttributes->addAttribute("locationX", x2String(myReal->locationX));
    aomsAttributes->addAttribute("locationY", x2String(myReal->locationY));
}
//#]

IMPLEMENT_META_P(StoringData, Default, Default, false, OMAnimatedStoringData)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StoringData.cpp
*********************************************************************/
