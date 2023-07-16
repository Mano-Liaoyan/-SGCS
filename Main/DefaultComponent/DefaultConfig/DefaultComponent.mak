
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  SGCS.obj \
  CommunicationSystem.obj \
  CentralServer.obj \
  GarbageBin.obj \
  Enviroment.obj \
  GarbgeCollectVehicle.obj \
  SensorSystem.obj \
  Garbage.obj \
  Notification.obj \
  Stakeholder.obj \
  GovernmentOfficers.obj \
  Devices.obj \
  Smartphone.obj \
  Computer.obj \
  GerographicInformationSystem.obj \
  Regulations.obj \
  GovernWasteManagement.obj \
  EnvironmentalProtection.obj \
  RecieveData.obj \
  UC_ManageData.obj \
  UC_ProcessingData.obj \
  UC_OpetimizeRoute.obj \
  UC_MonitorDataUsingMobileApp.obj \
  UC_MonitorDashBoard.obj \
  StoringData.obj \
  GarbageTank.obj \
  HumiditySensor.obj \
  TemperatureSensor.obj \
  Battery.obj \
  FillLevelSensor.obj \
  WIFIBlock.obj \
  GPSTracker.obj \
  UC_RecieveDataFromSensor.obj \
  UC_SendDataToServer.obj \
  SortingMechanism.obj \
  UC_MonitorFillLevel.obj \
  UC_SortGarbage.obj \
  UC_Littering.obj \
  SystemManager.obj \
  User.obj \
  Default.obj \
  SGCS_USECASE.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






SGCS.obj : SGCS.cpp SGCS.h    Default.h Enviroment.h CommunicationSystem.h CentralServer.h GarbageBin.h GarbgeCollectVehicle.h SensorSystem.h User.h Stakeholder.h Devices.h GerographicInformationSystem.h Regulations.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SGCS.obj" "SGCS.cpp" 



CommunicationSystem.obj : CommunicationSystem.cpp CommunicationSystem.h    Default.h SGCS.h Notification.h UC_RecieveDataFromSensor.h UC_SendDataToServer.h SensorSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationSystem.obj" "CommunicationSystem.cpp" 



CentralServer.obj : CentralServer.cpp CentralServer.h    Default.h SGCS.h Notification.h RecieveData.h UC_ManageData.h UC_ProcessingData.h UC_OpetimizeRoute.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CentralServer.obj" "CentralServer.cpp" 



GarbageBin.obj : GarbageBin.cpp GarbageBin.h    Default.h SGCS.h SensorSystem.h GarbageTank.h SortingMechanism.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GarbageBin.obj" "GarbageBin.cpp" 



Enviroment.obj : Enviroment.cpp Enviroment.h    Default.h SGCS.h UC_Littering.h UC_MonitorFillLevel.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Enviroment.obj" "Enviroment.cpp" 



GarbgeCollectVehicle.obj : GarbgeCollectVehicle.cpp GarbgeCollectVehicle.h    Default.h SGCS.h SensorSystem.h UC_RecieveDataFromSensor.h UC_SendDataToServer.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GarbgeCollectVehicle.obj" "GarbgeCollectVehicle.cpp" 



SensorSystem.obj : SensorSystem.cpp SensorSystem.h    Default.h SGCS.h WIFIBlock.h HumiditySensor.h TemperatureSensor.h Battery.h FillLevelSensor.h GPSTracker.h CommunicationSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorSystem.obj" "SensorSystem.cpp" 



Garbage.obj : Garbage.cpp Garbage.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Garbage.obj" "Garbage.cpp" 



Notification.obj : Notification.cpp Notification.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Notification.obj" "Notification.cpp" 



Stakeholder.obj : Stakeholder.cpp Stakeholder.h    Default.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Stakeholder.obj" "Stakeholder.cpp" 



GovernmentOfficers.obj : GovernmentOfficers.cpp GovernmentOfficers.h    Default.h Stakeholder.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GovernmentOfficers.obj" "GovernmentOfficers.cpp" 



Devices.obj : Devices.cpp Devices.h    Default.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Devices.obj" "Devices.cpp" 



Smartphone.obj : Smartphone.cpp Smartphone.h    Default.h Devices.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Smartphone.obj" "Smartphone.cpp" 



Computer.obj : Computer.cpp Computer.h    Default.h Devices.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Computer.obj" "Computer.cpp" 



GerographicInformationSystem.obj : GerographicInformationSystem.cpp GerographicInformationSystem.h    Default.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GerographicInformationSystem.obj" "GerographicInformationSystem.cpp" 



Regulations.obj : Regulations.cpp Regulations.h    Default.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Regulations.obj" "Regulations.cpp" 



GovernWasteManagement.obj : GovernWasteManagement.cpp GovernWasteManagement.h    Default.h Regulations.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GovernWasteManagement.obj" "GovernWasteManagement.cpp" 



EnvironmentalProtection.obj : EnvironmentalProtection.cpp EnvironmentalProtection.h    Default.h Regulations.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EnvironmentalProtection.obj" "EnvironmentalProtection.cpp" 



RecieveData.obj : RecieveData.cpp RecieveData.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"RecieveData.obj" "RecieveData.cpp" 



UC_ManageData.obj : UC_ManageData.cpp UC_ManageData.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_ManageData.obj" "UC_ManageData.cpp" 



UC_ProcessingData.obj : UC_ProcessingData.cpp UC_ProcessingData.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_ProcessingData.obj" "UC_ProcessingData.cpp" 



UC_OpetimizeRoute.obj : UC_OpetimizeRoute.cpp UC_OpetimizeRoute.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_OpetimizeRoute.obj" "UC_OpetimizeRoute.cpp" 



UC_MonitorDataUsingMobileApp.obj : UC_MonitorDataUsingMobileApp.cpp UC_MonitorDataUsingMobileApp.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_MonitorDataUsingMobileApp.obj" "UC_MonitorDataUsingMobileApp.cpp" 



UC_MonitorDashBoard.obj : UC_MonitorDashBoard.cpp UC_MonitorDashBoard.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_MonitorDashBoard.obj" "UC_MonitorDashBoard.cpp" 



StoringData.obj : StoringData.cpp StoringData.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StoringData.obj" "StoringData.cpp" 



GarbageTank.obj : GarbageTank.cpp GarbageTank.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GarbageTank.obj" "GarbageTank.cpp" 



HumiditySensor.obj : HumiditySensor.cpp HumiditySensor.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"HumiditySensor.obj" "HumiditySensor.cpp" 



TemperatureSensor.obj : TemperatureSensor.cpp TemperatureSensor.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TemperatureSensor.obj" "TemperatureSensor.cpp" 



Battery.obj : Battery.cpp Battery.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Battery.obj" "Battery.cpp" 



FillLevelSensor.obj : FillLevelSensor.cpp FillLevelSensor.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"FillLevelSensor.obj" "FillLevelSensor.cpp" 



WIFIBlock.obj : WIFIBlock.cpp WIFIBlock.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WIFIBlock.obj" "WIFIBlock.cpp" 



GPSTracker.obj : GPSTracker.cpp GPSTracker.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GPSTracker.obj" "GPSTracker.cpp" 



UC_RecieveDataFromSensor.obj : UC_RecieveDataFromSensor.cpp UC_RecieveDataFromSensor.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_RecieveDataFromSensor.obj" "UC_RecieveDataFromSensor.cpp" 



UC_SendDataToServer.obj : UC_SendDataToServer.cpp UC_SendDataToServer.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_SendDataToServer.obj" "UC_SendDataToServer.cpp" 



SortingMechanism.obj : SortingMechanism.cpp SortingMechanism.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SortingMechanism.obj" "SortingMechanism.cpp" 



UC_MonitorFillLevel.obj : UC_MonitorFillLevel.cpp UC_MonitorFillLevel.h    SGCS_USECASE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_MonitorFillLevel.obj" "UC_MonitorFillLevel.cpp" 



UC_SortGarbage.obj : UC_SortGarbage.cpp UC_SortGarbage.h    SGCS_USECASE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_SortGarbage.obj" "UC_SortGarbage.cpp" 



UC_Littering.obj : UC_Littering.cpp UC_Littering.h    SGCS_USECASE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_Littering.obj" "UC_Littering.cpp" 



SystemManager.obj : SystemManager.cpp SystemManager.h    SGCS_USECASE.h User.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SystemManager.obj" "SystemManager.cpp" 



User.obj : User.cpp User.h    SGCS_USECASE.h SGCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



Default.obj : Default.cpp Default.h    SGCS.h CommunicationSystem.h CentralServer.h GarbageBin.h Enviroment.h GarbgeCollectVehicle.h SensorSystem.h Garbage.h Notification.h Stakeholder.h GovernmentOfficers.h Devices.h Smartphone.h Computer.h GerographicInformationSystem.h Regulations.h GovernWasteManagement.h EnvironmentalProtection.h RecieveData.h UC_ManageData.h UC_ProcessingData.h UC_OpetimizeRoute.h UC_MonitorDataUsingMobileApp.h UC_MonitorDashBoard.h StoringData.h GarbageTank.h HumiditySensor.h TemperatureSensor.h Battery.h FillLevelSensor.h WIFIBlock.h GPSTracker.h UC_RecieveDataFromSensor.h UC_SendDataToServer.h SortingMechanism.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Default.obj" "Default.cpp" 



SGCS_USECASE.obj : SGCS_USECASE.cpp SGCS_USECASE.h    UC_MonitorFillLevel.h UC_SortGarbage.h UC_Littering.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SGCS_USECASE.obj" "SGCS_USECASE.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist SGCS.obj erase SGCS.obj
	if exist CommunicationSystem.obj erase CommunicationSystem.obj
	if exist CentralServer.obj erase CentralServer.obj
	if exist GarbageBin.obj erase GarbageBin.obj
	if exist Enviroment.obj erase Enviroment.obj
	if exist GarbgeCollectVehicle.obj erase GarbgeCollectVehicle.obj
	if exist SensorSystem.obj erase SensorSystem.obj
	if exist Garbage.obj erase Garbage.obj
	if exist Notification.obj erase Notification.obj
	if exist Stakeholder.obj erase Stakeholder.obj
	if exist GovernmentOfficers.obj erase GovernmentOfficers.obj
	if exist Devices.obj erase Devices.obj
	if exist Smartphone.obj erase Smartphone.obj
	if exist Computer.obj erase Computer.obj
	if exist GerographicInformationSystem.obj erase GerographicInformationSystem.obj
	if exist Regulations.obj erase Regulations.obj
	if exist GovernWasteManagement.obj erase GovernWasteManagement.obj
	if exist EnvironmentalProtection.obj erase EnvironmentalProtection.obj
	if exist RecieveData.obj erase RecieveData.obj
	if exist UC_ManageData.obj erase UC_ManageData.obj
	if exist UC_ProcessingData.obj erase UC_ProcessingData.obj
	if exist UC_OpetimizeRoute.obj erase UC_OpetimizeRoute.obj
	if exist UC_MonitorDataUsingMobileApp.obj erase UC_MonitorDataUsingMobileApp.obj
	if exist UC_MonitorDashBoard.obj erase UC_MonitorDashBoard.obj
	if exist StoringData.obj erase StoringData.obj
	if exist GarbageTank.obj erase GarbageTank.obj
	if exist HumiditySensor.obj erase HumiditySensor.obj
	if exist TemperatureSensor.obj erase TemperatureSensor.obj
	if exist Battery.obj erase Battery.obj
	if exist FillLevelSensor.obj erase FillLevelSensor.obj
	if exist WIFIBlock.obj erase WIFIBlock.obj
	if exist GPSTracker.obj erase GPSTracker.obj
	if exist UC_RecieveDataFromSensor.obj erase UC_RecieveDataFromSensor.obj
	if exist UC_SendDataToServer.obj erase UC_SendDataToServer.obj
	if exist SortingMechanism.obj erase SortingMechanism.obj
	if exist UC_MonitorFillLevel.obj erase UC_MonitorFillLevel.obj
	if exist UC_SortGarbage.obj erase UC_SortGarbage.obj
	if exist UC_Littering.obj erase UC_Littering.obj
	if exist SystemManager.obj erase SystemManager.obj
	if exist User.obj erase User.obj
	if exist Default.obj erase Default.obj
	if exist SGCS_USECASE.obj erase SGCS_USECASE.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
