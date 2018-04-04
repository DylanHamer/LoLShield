//Text.ino
//Display scrolling text on the LoLShield
//By Dylan Hamer

#include "Charliplexing.h"
#include "Myfont.h"

unsigned char text[]="Hello, World! \0"; // Text to be displayed

void setup() {
  LedSign::Init();  // Initialise the LoLShield
}

void loop() {
  Myfont::Banner(sizeof(text),text);  // Display the text
}
