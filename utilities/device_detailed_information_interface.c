﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.2.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: 2019年10月2日
 ***********************************************************************************************/

#include "device_detailed_information_interface.h"

#define MAX_MASSAGE_SIZE 256

//
// Application state associated with this interface.
// It contains the DIGITALTWIN_INTERFACE_CLIENT_HANDLE used for responses in callbacks along with properties set
// and representations of the property update and command callbacks invoked on given interface
//
typedef struct DEVICE_DETAILED_INFORMATION_INTERFACE_STATE_TAG
{
    DIGITALTWIN_INTERFACE_CLIENT_HANDLE interfaceClientHandle;

} DEVICE_DETAILED_INFORMATION_INTERFACE_STATE;

static DEVICE_DETAILED_INFORMATION_INTERFACE_STATE appState;

// Device_Detailed_InformationInterface_PropertyCallback is invoked when a property is updated (or failed) going to server.
// ALL property callbacks will be routed to this function and just have the userContextCallback set to the propertyName.
// Product code will potentially have context stored in this userContextCallback.
static void Device_Detailed_InformationInterface_PropertyCallback(DIGITALTWIN_CLIENT_RESULT digitalTwinReportedStatus, void* userContextCallback)
{
    if (digitalTwinReportedStatus == DIGITALTWIN_CLIENT_OK)
    {
        ReportProperty_Succeeded_Callback("Device_Detailed_Information", (const char*)userContextCallback);
        LogInfo("DEVICE_DETAILED_INFORMATION_INTERFACE: Updating property=<%s> succeeded", (const char*)userContextCallback);
    }
    else
    {
        ReportProperty_Error_Callback("Device_Detailed_Information", (const char*)userContextCallback);
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: Updating property=<%s> failed, error=<%s>", (const char*)userContextCallback, MU_ENUM_TO_STRING(DIGITALTWIN_CLIENT_RESULT, digitalTwinReportedStatus));
    }
}

// Device_Detailed_InformationInterface_ReportProperty_Internal is a helper function to report a Device_Detailed_Information's properties.
// It invokes underlying DigitalTwin API for reporting properties and sets up its callback on completion.
DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_ReportProperty_Internal(DIGITALTWIN_INTERFACE_CLIENT_HANDLE interfaceHandle, const char* propertyName, const char* propertyData)
{
    DIGITALTWIN_CLIENT_RESULT result = DigitalTwin_InterfaceClient_ReportPropertyAsync(interfaceHandle, propertyName,
        (const char*)propertyData, NULL,
        Device_Detailed_InformationInterface_PropertyCallback, (void*)propertyName);

    if (result == DIGITALTWIN_CLIENT_OK)
    {
        LogInfo("DEVICE_DETAILED_INFORMATION_INTERFACE: Queued async report read only property for %s", propertyName);
        
    }
    else
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: Reporting property=<%s> failed, error=<%s>", propertyName, MU_ENUM_TO_STRING(DIGITALTWIN_CLIENT_RESULT, result));
    }

    DigitalTwinClientHelper_Check();
    return result;
}

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportBiosVersion()
{
    if (appState.interfaceClientHandle == NULL)
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: interfaceClientHandle is required to be initialized before reporting properties");
    }

    char payloadBuffer[MAX_MASSAGE_SIZE];
    if (Device_Detailed_Information_SerializeBiosVersionProperty(payloadBuffer, MAX_MASSAGE_SIZE))
    {
        return Device_Detailed_InformationInterface_ReportProperty_Internal(appState.interfaceClientHandle, Device_Detailed_InformationInterface_BiosRevisionProperty, payloadBuffer);
    }
    else
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: serialize read only property BiosVersion failed");
        return DIGITALTWIN_CLIENT_ERROR;
    }
}

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportECFirmware()
{
    if (appState.interfaceClientHandle == NULL)
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: interfaceClientHandle is required to be initialized before reporting properties");
    }

    char payloadBuffer[MAX_MASSAGE_SIZE];
    if (Device_Detailed_Information_SerializeECFirmwareProperty(payloadBuffer, MAX_MASSAGE_SIZE))
    {
        return Device_Detailed_InformationInterface_ReportProperty_Internal(appState.interfaceClientHandle, Device_Detailed_InformationInterface_ECFirmwareProperty, payloadBuffer);
    }
    else
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: serialize read only property ECFirmware failed");
        return DIGITALTWIN_CLIENT_ERROR;
    }
}

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportDriverVersion()
{
    if (appState.interfaceClientHandle == NULL)
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: interfaceClientHandle is required to be initialized before reporting properties");
    }

    char payloadBuffer[MAX_MASSAGE_SIZE];
    if (Device_Detailed_Information_SerializeDriverVersionProperty(payloadBuffer, MAX_MASSAGE_SIZE))
    {
        return Device_Detailed_InformationInterface_ReportProperty_Internal(appState.interfaceClientHandle, Device_Detailed_InformationInterface_DriverVersionProperty, payloadBuffer);
    }
    else
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: serialize read only property DriverVersion failed");
        return DIGITALTWIN_CLIENT_ERROR;
    }
}

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportLibraryVersion()
{
    if (appState.interfaceClientHandle == NULL)
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: interfaceClientHandle is required to be initialized before reporting properties");
    }

    char payloadBuffer[MAX_MASSAGE_SIZE];
    if (Device_Detailed_Information_SerializeLibraryVersionProperty(payloadBuffer, MAX_MASSAGE_SIZE))
    {
        return Device_Detailed_InformationInterface_ReportProperty_Internal(appState.interfaceClientHandle, Device_Detailed_InformationInterface_LibraryVersionProperty, payloadBuffer);
    }
    else
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: serialize read only property LibraryVersion failed");
        return DIGITALTWIN_CLIENT_ERROR;
    }
}

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportFirmwareVersion()
{
    if (appState.interfaceClientHandle == NULL)
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: interfaceClientHandle is required to be initialized before reporting properties");
    }

    char payloadBuffer[MAX_MASSAGE_SIZE];
    if (Device_Detailed_Information_SerializeFirmwareVersionProperty(payloadBuffer, MAX_MASSAGE_SIZE))
    {
        return Device_Detailed_InformationInterface_ReportProperty_Internal(appState.interfaceClientHandle, Device_Detailed_InformationInterface_FirmwareVersionProperty, payloadBuffer);
    }
    else
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: serialize read only property FirmwareVersion failed");
        return DIGITALTWIN_CLIENT_ERROR;
    }
}

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportLastConnectedAt()
{
    if (appState.interfaceClientHandle == NULL)
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: interfaceClientHandle is required to be initialized before reporting properties");
    }

    char payloadBuffer[MAX_MASSAGE_SIZE];
    if (Device_Detailed_Information_SerializeLastConnectedAtProperty(payloadBuffer, MAX_MASSAGE_SIZE))
    {
        return Device_Detailed_InformationInterface_ReportProperty_Internal(appState.interfaceClientHandle, Device_Detailed_InformationInterface_LastConnectedAtProperty, payloadBuffer);
    }
    else
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: serialize read only property LastConnectedAt failed");
        return DIGITALTWIN_CLIENT_ERROR;
    }
}

DIGITALTWIN_CLIENT_RESULT Device_Detailed_InformationInterface_Property_ReportAll()
{
    DIGITALTWIN_CLIENT_RESULT result;

    // NOTE: Future versions of SDK will support ability to send multiple properties in a single
    // send.  For now, one at a time is sufficient albeit less efficient.
    if (((result = Device_Detailed_InformationInterface_Property_ReportBiosVersion()) != DIGITALTWIN_CLIENT_OK) ||
        ((result = Device_Detailed_InformationInterface_Property_ReportECFirmware()) != DIGITALTWIN_CLIENT_OK) ||
        ((result = Device_Detailed_InformationInterface_Property_ReportDriverVersion()) != DIGITALTWIN_CLIENT_OK) ||
        ((result = Device_Detailed_InformationInterface_Property_ReportLibraryVersion()) != DIGITALTWIN_CLIENT_OK) ||
        ((result = Device_Detailed_InformationInterface_Property_ReportFirmwareVersion()) != DIGITALTWIN_CLIENT_OK) ||
        ((result = Device_Detailed_InformationInterface_Property_ReportLastConnectedAt()) != DIGITALTWIN_CLIENT_OK) )

    {
        LogError("DEVICE_INFO: Reporting properties failed.");
    }
    else
    {
        LogInfo("DEVICE_INFO: Queuing of all properties to be reported has succeeded");
    }

    return result;
}

// Device_Detailed_InformationInterface_InterfaceRegisteredCallback is invoked when this interface
// is successfully or unsuccessfully registered with the service, and also when the interface is deleted.
static void Device_Detailed_InformationInterface_InterfaceRegisteredCallback(DIGITALTWIN_CLIENT_RESULT dtInterfaceStatus, void* userInterfaceContext)
{
    LogInfo("Device_Detailed_InformationInterface_InterfaceRegisteredCallback with status=<%s>, userContext=<%p>", MU_ENUM_TO_STRING(DIGITALTWIN_CLIENT_RESULT, dtInterfaceStatus), userInterfaceContext);
    if (dtInterfaceStatus == DIGITALTWIN_CLIENT_OK)
    {
        // Once the interface is registered, send our reported properties to the service.  
        // It *IS* safe to invoke most DigitalTwin API calls from a callback thread like this, though it 
        // is NOT safe to create/destroy/register interfaces now.
        LogInfo("DEVICE_DETAILED_INFORMATION_INTERFACE: Interface successfully registered.");
    }
    else if (dtInterfaceStatus == DIGITALTWIN_CLIENT_ERROR_INTERFACE_UNREGISTERING)
    {
        // Once an interface is marked as unregistered, it cannot be used for any DigitalTwin SDK calls.
        LogInfo("DEVICE_DETAILED_INFORMATION_INTERFACE: Interface received unregistering callback.");
    }
    else
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: Interface received failed, status=<%s>.", MU_ENUM_TO_STRING(DIGITALTWIN_CLIENT_RESULT, dtInterfaceStatus));
    }
}

//
// Create DigitalTwin interface client handle
//
DIGITALTWIN_INTERFACE_CLIENT_HANDLE Device_Detailed_InformationInterface_Create()
{
    DIGITALTWIN_INTERFACE_CLIENT_HANDLE interfaceHandle;
    DIGITALTWIN_CLIENT_RESULT result;

    memset(&appState, 0, sizeof(DEVICE_DETAILED_INFORMATION_INTERFACE_STATE));

    if ((result = DigitalTwin_InterfaceClient_Create(Device_Detailed_InformationInterfaceId,  Device_Detailed_InformationInterfaceInstanceName, Device_Detailed_InformationInterface_InterfaceRegisteredCallback, (void*)&appState, &interfaceHandle)) != DIGITALTWIN_CLIENT_OK)
    {
        LogError("DEVICE_DETAILED_INFORMATION_INTERFACE: Unable to allocate interface client handle for interfaceId=<%s>, interfaceInstanceName=<%s>, error=<%s>", Device_Detailed_InformationInterfaceId, Device_Detailed_InformationInterfaceInstanceName, MU_ENUM_TO_STRING(DIGITALTWIN_CLIENT_RESULT, result));
        interfaceHandle = NULL;
    }

    else
    {
        LogInfo("DEVICE_DETAILED_INFORMATION_INTERFACE: Created DIGITALTWIN_INTERFACE_CLIENT_HANDLE successfully for interfaceId=<%s>, interfaceInstanceName=<%s>, handle=<%p>", Device_Detailed_InformationInterfaceId, Device_Detailed_InformationInterfaceInstanceName, interfaceHandle);
        appState.interfaceClientHandle = interfaceHandle;
    }

    return interfaceHandle;
}

void Device_Detailed_InformationInterface_Close(DIGITALTWIN_INTERFACE_CLIENT_HANDLE digitalTwinInterfaceClientHandle)
{
    // On shutdown, in general the first call made should be to DigitalTwin_InterfaceClient_Destroy.
    // This will block if there are any active callbacks in this interface, and then
    // mark the underlying handle such that no future callbacks shall come to it.
    DigitalTwin_InterfaceClient_Destroy(digitalTwinInterfaceClientHandle);

    // After DigitalTwin_InterfaceClient_Destroy returns, it is safe to assume
    // no more callbacks shall arrive for this interface and it is OK to free
    // resources callbacks otherwise may have needed.

}
