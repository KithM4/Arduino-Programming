/*
  This program blinks LEDs connected to pin numbers 13, 8, and 4
*/

void setup()  
{  
  // Initialize the pins as OUTPUT
  pinMode(13, OUTPUT);  
  pinMode(8, OUTPUT);  
  pinMode(4, OUTPUT);  
}

void loop()  
{  
  // Blink the first LED once
  digitalWrite(13, HIGH);  
  delay(1000); // Wait for 1 second
  digitalWrite(13, LOW);  
  delay(1000); // Wait for 1 second

  // Blink the second LED twice
  for (int i = 0; i < 2; i++) 
  {  
    digitalWrite(8, HIGH);  
    delay(500); // Wait for 0.5 seconds
    digitalWrite(8, LOW);  
    delay(500); // Wait for 0.5 seconds
  }

  // Blink the third LED three times
  for (int i = 0; i < 3; i++) 
  {  
    digitalWrite(4, HIGH);  
    delay(500); // Wait for 0.5 seconds
    digitalWrite(4, LOW);  
    delay(500); // Wait for 0.5 seconds
  }  
}
