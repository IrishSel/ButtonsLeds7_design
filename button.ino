#define button 1
#define led_pin 8

void setup()
{
  pinMode(button,INPUT); 
  pinMode(led_pin,OUTPUT); 
}

void loop()
{
  bool val = digitalRead(button);
  if(val == 1) {
    digitalWrite(led_pin, HIGH);
  }
  else {
    digitalWrite(led_pin, LOW);
  }
  digitalWrite(led_pin, val);
}
