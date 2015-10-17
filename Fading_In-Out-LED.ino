
//2nd sketch - Fading LED in and out
// Courtesy: Getting Started With Arduino - Massimo Banzi
// O'Reilly link : http://shop.oreilly.com/product/9780596155520.do


const int LED = 9; // Pin 9 for LED 
int i =0;  // For counter


void setup(){
  pinMode(LED, OUTPUT); //Set the pin as output
}

void loop(){
  
  for (i=0; i<255; i++)  // Brightining from 0 to 254
    {
      analogWrite(LED,i);
      delay(10);          // wait 10ms
    }
  for (i=255; i>0; i--)    // Fading from 254 to 1
    {
      analogWrite(LED,i);
      delay(10);
    }
  } // loop() closed
