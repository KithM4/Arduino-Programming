void setup ()  
{  
pinMode ( 8, OUTPUT);  // to set the OUTPUT mode of pin number 8.  
}  
void loop ()  
{  
digitalWrite (8, HIGH);   
delay(1000);  // 1 second = 1 x 1000 milliseconds  
digitalWrite (8, LOW);  
delay(500);  // 0.5 second = 0.5 x 1000 milliseconds  
}  