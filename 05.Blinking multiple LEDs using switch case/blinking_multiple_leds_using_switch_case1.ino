void setup()   
{  
  // Initialize serial communication  
  Serial.begin(9600);  

  // Initialize the LED pins  
  for (int LEDpin = 6; LEDpin < 13; LEDpin++) {  
    pinMode(LEDpin, OUTPUT);  
  }  
}

void loop()   
{  
  int a = 3; // You can change this value to 1, 2, 3, or 4 to see different LEDs turn on

  // Turn off all LEDs initially
  for (int LEDpin = 6; LEDpin < 13; LEDpin++) {
    digitalWrite(LEDpin, LOW);
  }
  
  // Use switch-case to control which LED turns on
  switch (a)   
  {  
    case 1:  
      digitalWrite(6, HIGH);  
      break;  
    case 2:  
      digitalWrite(8, HIGH);  
      break;  
    case 3:  
      digitalWrite(11, HIGH);  
      break;  
    case 4:  
      digitalWrite(12, HIGH);  
      break;  
    default:  
      // If no cases match, turn off all LEDs
      for (int LEDpin = 6; LEDpin < 13; LEDpin++)   
      {  
        digitalWrite(LEDpin, LOW);  
      }  
  }  

  delay(1000); // Wait for 1 second before the loop repeats
}
