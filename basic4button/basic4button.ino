/* Basic USB Joystick Example
   Teensy becomes a USB joystick

   You must select Joystick from the "Tools > USB Type" menu

   Pushbuttons should be connected to digital pins 0 and 1.
   Wire each button between the digital pin and ground.
   Potentiometers should be connected to analog inputs 0 to 1.

   This example code is in the public domain.
*/

void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  // read analog inputs and set X-Y position


  // read the digital inputs and set the buttons
  Joystick.button(1, digitalRead(0));
  Joystick.button(2, digitalRead(1));  
  Joystick.button(3, digitalRead(2));  
  Joystick.button(4, digitalRead(3));  

  // a brief delay, so this runs 20 times per second
  delay(10);
}

