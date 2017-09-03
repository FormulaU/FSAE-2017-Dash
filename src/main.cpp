#include "WProgram.h"
#include "logger.h"

int main()
{
  
  //Set up resources:
  initialize_logging(DEBUG);
   
  //Set up the LED pin as an output.
  pinMode(13, OUTPUT);
  
  //Control Loop:
  while (1)
    {
      digitalWriteFast(13, HIGH);
      delay(250);
      digitalWriteFast(13, LOW);
      delay(250);
    }
}
