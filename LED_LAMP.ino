#define BUTTONPIN 6
#define BUTTONPIN 7
#define BUTTONPIN 8

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop() 
{
  digitalWrite(6,1);digitalWrite(7,1);digitalWrite(8,0);
  delay(500);
  digitalWrite(6,1);digitalWrite(7,0);digitalWrite(8,1);
  delay(500);
  digitalWrite(6,0);digitalWrite(7,1);digitalWrite(8,1);
  delay(500);
  digitalWrite(6,1);digitalWrite(7,0);digitalWrite(8,0);
  delay(500);
  digitalWrite(6,0);digitalWrite(7,1);digitalWrite(8,0);
  delay(500);
  digitalWrite(6,0);digitalWrite(7,0);digitalWrite(8,1);
  delay(500);
  
}
