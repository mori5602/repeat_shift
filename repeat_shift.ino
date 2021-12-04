#include "Keyboard.h"

#define PIN_KEYSW (9)

int prevKeyState;
int currKeyState;
const unsigned long waitTime = 240000; // 4 * 60 * 1,000(ms)

void setup() {
  pinMode(PIN_KEYSW, INPUT_PULLUP);
  prevKeyState = HIGH;
  currKeyState = HIGH;

  Keyboard.begin();
}

void loop() {
    Keyboard.press(KEY_LEFT_SHIFT);    
    delay(10);
    Keyboard.releaseAll(); 

    delay(waitTime);

}
