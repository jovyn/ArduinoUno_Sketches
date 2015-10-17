// First Sketch : Blinking LED

const int LED = 13;  // LED connected to digital pin 13 

void setup()
{
  pinMode(LED, OUTPUT); // Set the pin as output
}

void loop()

{
  digitalWrite(LED, HIGH);  // turns LED on
  delay(500);
  digitalWrite(LED, LOW);  // turns LED off
  delay(500);
}
