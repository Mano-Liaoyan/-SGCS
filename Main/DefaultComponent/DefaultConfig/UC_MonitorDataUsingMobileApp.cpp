/********************************************************************
	Rhapsody	: 9.0 
	Login		: yanev
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_MonitorDataUsingMobileApp
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorDataUsingMobileApp.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UC_MonitorDataUsingMobileApp.h"
//#[ ignore
#define Default_UC_MonitorDataUsingMobileApp_UC_MonitorDataUsingMobileApp_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class UC_MonitorDataUsingMobileApp
UC_MonitorDataUsingMobileApp::UC_MonitorDataUsingMobileApp(void) : filllevel(0.0), locationX(0.0), locationY(0.0) {
    NOTIFY_CONSTRUCTOR(UC_MonitorDataUsingMobileApp, UC_MonitorDataUsingMobileApp(), 0, Default_UC_MonitorDataUsingMobileApp_UC_MonitorDataUsingMobileApp_SERIALIZE);
}

UC_MonitorDataUsingMobileApp::~UC_MonitorDataUsingMobileApp(void) {
    NOTIFY_DESTRUCTOR(~UC_MonitorDataUsingMobileApp, true);
}

const float UC_MonitorDataUsingMobileApp::getFilllevel(void) const {
    return filllevel;
}

void UC_MonitorDataUsingMobileApp::setFilllevel(const float p_filllevel) {
    filllevel = p_filllevel;
}

const float UC_MonitorDataUsingMobileApp::getLocationX(void) const {
    return locationX;
}

void UC_MonitorDataUsingMobileApp::setLocationX(const float p_locationX) {
    locationX = p_locationX;
}

const float UC_MonitorDataUsingMobileApp::getLocationY(void) const {
    return locationY;
}

void UC_MonitorDataUsingMobileApp::setLocationY(const float p_locationY) {
    locationY = p_locationY;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_MonitorDataUsingMobileApp::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("filllevel", x2String(myReal->filllevel));
    aomsAttributes->addAttribute("locationX", x2String(myReal->locationX));
    aomsAttributes->addAttribute("locationY", x2String(myReal->locationY));
}
//#]

IMPLEMENT_META_P(UC_MonitorDataUsingMobileApp, Default, Default, false, OMAnimatedUC_MonitorDataUsingMobileApp)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_MonitorDataUsingMobileApp.cpp
*********************************************************************/
