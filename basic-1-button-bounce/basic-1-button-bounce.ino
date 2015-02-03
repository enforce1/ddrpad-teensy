#include <Bounce.h>

const int buttonPin = 0;
Bounce leftArrow = Bounce(buttonPin, 10);  // 10 ms debounce

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);

}

byte previousState = HIGH;         // what state was the button last time


void loop() {
  if (leftArrow.update()) {
    if (leftArrow.fallingEdge()) {

    }
  } 
}

