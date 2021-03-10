
// constants won't change. Used here to set a pin number:
const int ledPin1 = 4;// the number of the LED pin
const int ledPin2 = 7;
// Variables will change:
int ledState1 = LOW;             // ledState used to set the LED
int ledState2 = LOW;


// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis1 = 0;        // will store last time LED was updated
unsigned long previousMillis2 = 0;        // will store last time LED was updated

// constants won't change:
const long interval1 = 500;           // interval at which to blink (milliseconds)
const long interval2 = 100;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  unsigned long currentMillis1 = millis();

  if (currentMillis1 - previousMillis1 >= interval1) {
    // save the last time you blinked the LED
    previousMillis1 = currentMillis1;

    // if the LED is off turn it on and vice-versa:
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState1);
  }

  unsigned long currentMillis2 = millis();
  if (currentMillis2 - previousMillis2 >= interval2) {
    // save the last time you blinked the LED
    previousMillis2 = currentMillis2;

    // if the LED is off turn it on and vice-versa:
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin2, ledState2);
  }

  
  
}
