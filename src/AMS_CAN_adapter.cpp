#include "AMS_CAN_adapter.h"
#include <logger.h>
#include <cstdio>
#include <sstream>

void AMS_can_callback(CAN_message_t msg)
{
  //Log that we received the message at info level, and the data at debug level.
  char log_msg[100]; //Static as opposed to dynamic buffer size. Bad.
  snprintf(log_msg, 100, "CAN message received from %lo", msg.id);
  FSAE_log(INFO, log_msg);
  uint64_t msg_data;
  for (int i = 0; i < msg.len; i++)
    {
      msg_data = msg_data << 8; //Shift received byte up.
      msg_data &= static_cast<uint64_t>(msg.buf[i]);
    }
  FSAE_log_hex(DEBUG, msg_data);
}
