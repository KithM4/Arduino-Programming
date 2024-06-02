int timer = 500;             
int LEDPins[] = {13, 12, 8, 4, 2};  // Array of declared pin numbers on the board  
int countOFpin = 5;  // Number of elements in the array (should be 5) 

void setup()   
{  
  // Initialize the LED pins as OUTPUT  
  for (int PIN = 0; PIN < countOFpin; PIN++)   
  {  
    pinMode(LEDPins[PIN], OUTPUT);  
  }  
}

void loop()  
{  
  // Loop from the lowest pin in the array to the highest  
  for (int PIN = 0; PIN < countOFpin; PIN++)   
  {  
    // Turn the pin ON  
    digitalWrite(LEDPins[PIN], HIGH);  
    delay(timer);  
    // Turn the pin OFF  
    digitalWrite(LEDPins[PIN], LOW);  
  }  

  // Loop from the highest pin in the array to the lowest  
  // This lights the LEDs in reverse order  
  for (int PIN = countOFpin - 1; PIN >= 0; PIN--)  
  {   
    digitalWrite(LEDPins[PIN], HIGH);  
    delay(timer);  
    digitalWrite(LEDPins[PIN], LOW);  
  }  
}
