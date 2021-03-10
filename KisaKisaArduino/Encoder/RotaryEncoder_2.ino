
#define inputCLK 5
#define inputDT 6
#define SW 2 

// LED Outputs
#define ledCW 9
#define ledCCW 8

int counter = 0;
int currentStateCLK;
int previousStateCLK;
bool SWState=false;

String encdir = "";

void setup() {

  // Set encoder pins as inputs
  pinMode (inputCLK, INPUT);
  pinMode (inputDT, INPUT);
  pinMode (SW , INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), DugmeBas, FALLING); // pin2 için kesme

  // Set LED pins as outputs
  pinMode (ledCW, OUTPUT);
  pinMode (ledCCW, OUTPUT);

  // Setup Serial Monitor
  Serial.begin (9600);

  // Read the initial state of inputCLK
  // Assign to previousStateCLK variable
  previousStateCLK = digitalRead(inputCLK);

}

void loop() {

  // Read the current state of inputCLK
  currentStateCLK = digitalRead(inputCLK);

  // If the previous and the current state of the inputCLK are different then a pulse has occured
  if (currentStateCLK != previousStateCLK) {

    // If the inputDT state is different than the inputCLK state then
    // the encoder is rotating counterclockwise
    if (digitalRead(inputDT) != currentStateCLK) {
      counter --;
      encdir = "CCW";
      Serial.println("Saat yönü tersi");
      digitalWrite(ledCW, LOW);
      digitalWrite(ledCCW, HIGH);

    } else {
      // Encoder is rotating clockwise
      counter ++;
      encdir = "CW";
      Serial.println("Saat yönü");
      digitalWrite(ledCW, HIGH);
      digitalWrite(ledCCW, LOW);

    }
    Serial.print("Direction: ");
    Serial.print(encdir);
    Serial.print(" -- Value: ");
    Serial.println(counter);
  }

  if (SWState) {
    SWState=false;  
    counter=0;
    digitalWrite(ledCW, LOW);
    digitalWrite(ledCCW, LOW);
    Serial.println("Düğme Basıldı");
    Serial.print(" -- Value: ");
    Serial.println(counter);
    delay(5);    
    
  }

  // Update previousStateCLK with the current state
  previousStateCLK = currentStateCLK;
}
void DugmeBas(){
  detachInterrupt(digitalPinToInterrupt(SW));
  attachInterrupt(digitalPinToInterrupt(SW), DugmeBirak, RISING); // pin2 için kesme
 
}

void DugmeBirak() {
  detachInterrupt(digitalPinToInterrupt(SW));
  attachInterrupt(digitalPinToInterrupt(SW), DugmeBas, FALLING); // pin2 için kesme
  counter=0;
  SWState=true;
}
