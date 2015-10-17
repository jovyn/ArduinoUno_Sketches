// First Sketch : Blinking LED
// Courtesy: Getting Started With Arduino - Massimo Banzi
// O'Reilly link : http://shop.oreilly.com/product/9780596155520.do  


const int LED = 13;  // LED connected to digital pin 13 

void setup()
{
  pinMode(LED, OUTPUT); // Set the pin as output
}

void loop()

{
  digitalWrite(LED, HIGH);  // turns LED on
  delay(500);               // 0.5 sec delay
  digitalWrite(LED, LOW);  // turns LED off
  delay(500);
}
