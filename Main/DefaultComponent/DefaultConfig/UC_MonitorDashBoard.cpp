/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_MonitorDashBoard
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorDashBoard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UC_MonitorDashBoard.h"
//#[ ignore
#define Default_UC_MonitorDashBoard_UC_MonitorDashBoard_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class UC_MonitorDashBoard
UC_MonitorDashBoard::UC_MonitorDashBoard(void) : filllevel(0.0), locationX(0.0), locationY(0.0) {
    NOTIFY_CONSTRUCTOR(UC_MonitorDashBoard, UC_MonitorDashBoard(), 0, Default_UC_MonitorDashBoard_UC_MonitorDashBoard_SERIALIZE);
}

UC_MonitorDashBoard::~UC_MonitorDashBoard(void) {
    NOTIFY_DESTRUCTOR(~UC_MonitorDashBoard, true);
}

const float UC_MonitorDashBoard::getFilllevel(void) const {
    return filllevel;
}

void UC_MonitorDashBoard::setFilllevel(const float p_filllevel) {
    filllevel = p_filllevel;
}

const float UC_MonitorDashBoard::getLocationX(void) const {
    return locationX;
}

void UC_MonitorDashBoard::setLocationX(const float p_locationX) {
    locationX = p_locationX;
}

const float UC_MonitorDashBoard::getLocationY(void) const {
    return locationY;
}

void UC_MonitorDashBoard::setLocationY(const float p_locationY) {
    locationY = p_locationY;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_MonitorDashBoard::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("filllevel", x2String(myReal->filllevel));
    aomsAttributes->addAttribute("locationX", x2String(myReal->locationX));
    aomsAttributes->addAttribute("locationY", x2String(myReal->locationY));
}
//#]

IMPLEMENT_META_P(UC_MonitorDashBoard, Default, Default, false, OMAnimatedUC_MonitorDashBoard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorDashBoard.cpp
*********************************************************************/
