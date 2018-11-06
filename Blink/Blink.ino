/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// 3, 12, 13, 14, 16
const int relayPin = 12; // LED_BUILTIN;
const int relayPin2 = 14;
const int relayPin3 = 13;
const int relayPin4 = 16;
const int relayPin5 = 5;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);
  pinMode(relayPin5, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("Turning on");
  digitalWrite(relayPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);
  digitalWrite(relayPin5, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // wait for a second

  Serial.println("Turning off");
  digitalWrite(relayPin, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(relayPin2, LOW);
  digitalWrite(relayPin3, LOW);
  digitalWrite(relayPin4, LOW);
  digitalWrite(relayPin5, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                       // wait for a second
}
