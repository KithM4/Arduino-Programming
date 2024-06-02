const int buttonPin = 8;
const int greenLEDPin = 2;
const int yellowLEDPin = 3;
const int redLEDPin = 4;
const int secondGreenLEDPin = 6;
const int secondRedLEDPin = 7;

bool buttonPressed = false;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(yellowLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(secondGreenLEDPin, OUTPUT);
  pinMode(secondRedLEDPin, OUTPUT);


  // Turn on LED number 2 & 6 initially
  digitalWrite(greenLEDPin, HIGH);
  digitalWrite(secondGreenLEDPin, HIGH);
}

void loop()
{
  checkButton();

  if (buttonPressed) {
    greenLight();
    yellowLight();
    redLight();
    secondGreenLight();

    buttonPressed = false;
  }
}

void checkButton() {
  if (digitalRead(buttonPin) == LOW) {
    buttonPressed = true; 
  }
}

void greenLight() {
  digitalWrite(greenLEDPin, HIGH);
  digitalWrite(yellowLEDPin, LOW);
  digitalWrite(redLEDPin, LOW);
  digitalWrite(secondGreenLEDPin, HIGH);
  digitalWrite(secondRedLEDPin, LOW);
  delay(20000); 
}

void yellowLight() {
  digitalWrite(greenLEDPin, LOW);
  digitalWrite(yellowLEDPin, HIGH);
  digitalWrite(redLEDPin, LOW);
  digitalWrite(secondGreenLEDPin, HIGH);
  digitalWrite(secondRedLEDPin, LOW);
  delay(10000); 
}

void redLight() {
  digitalWrite(greenLEDPin, LOW);
  digitalWrite(yellowLEDPin, LOW);
  digitalWrite(redLEDPin, HIGH);
  digitalWrite(secondGreenLEDPin, LOW);
  digitalWrite(secondRedLEDPin, HIGH);
  delay(25000); 
}

void secondGreenLight() {
  digitalWrite(greenLEDPin, HIGH);
  digitalWrite(yellowLEDPin, LOW);
  digitalWrite(redLEDPin, LOW);
  digitalWrite(secondGreenLEDPin, HIGH);
  digitalWrite(secondRedLEDPin, LOW);
  delay(20000); 
}


