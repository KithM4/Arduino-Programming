void setup ()  
{  
  pinMode(13, OUTPUT);  // Set pin 13 as OUTPUT
  pinMode(7, OUTPUT);   // Set pin 7 as OUTPUT
}  

void loop ()  
{  
  digitalWrite(13, HIGH);  // Turn the LED on pin 13 on
  digitalWrite(7, LOW);    // Turn the LED on pin 7 off
  delay(1500);             // Wait for 1.5 seconds
  
  digitalWrite(13, LOW);   // Turn the LED on pin 13 off
  digitalWrite(7, HIGH);   // Turn the LED on pin 7 on
  delay(1000);             // Wait for 1 second
}
