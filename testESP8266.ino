/*
  Created by SENSORVN.COM, February 18, 2021.
*/
#define SIG 4
#define LED 14

void setup()
{
  pinMode(SIG,INPUT_PULLUP);
  pinMode(LED,OUTPUT);
}

void loop()
{
  if(digitalRead(SIG)==HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}
