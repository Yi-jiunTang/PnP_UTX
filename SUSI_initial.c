#include "../SampleLib/OsDeclarations.h"
#include "../SampleLib/SusiIoT.h"
#include "../SampleLib/IoTJsonLibrary.h"

static json_t* jsonCapabilityPackage;

SusiIoTStatus_t SUSI_IOT_API SusiIoTInitialize(void)
{
    json_t* funcPacks[1] = {0};
    funcPacks[0] = createOEM();
    jsonCapabilityPackage = createIoTJsonCapability(funcPacks, 1);
    return SUSIIOT_STATUS_SUCCESS;
}