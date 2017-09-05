#ifndef AMS_CAN_ADAPTER_H
#define AMS_CAN_ADAPTER_H

#include <can_adapter.h>

//The callback the AMS registers with the CAN adapter.
void AMS_can_callback(CAN_message_t msg);

#endif //AMS_CAN_ADAPTER_H
