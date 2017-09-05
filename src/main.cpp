#include "WProgram.h"
#include "logger.h"
#include <can_adapter.h>
#include "AMS_CAN_adapter.h"

int main()
{
  
  //Set up resources:
  initialize_logging(DEBUG);

  //Register the AMS_CAN_adapter callback as our can adapter callback.
  //TODO: MAKE CAN IDENTIFIER CONFIGURABLE THROUGH CONFIG FILE OR DB
  can_msg_callback callback = &AMS_can_callback;
  register_callback(callback, 400);

  //Start the can listener. Blocking call.
  start_listener();
}
