#include<math.h>
#include <Servo.h>

int pos;
int signalPin = 0;

Servo servo_9;

void setup()
{
  Serial.begin(9600);
  servo_9.attach(9);
}

void loop()
{
  pos = analogRead(signalPin);
  pos = map(pos, 0, 1023, 0, 180);
  Serial.print(pos);
  Serial.print(" , ");
  servo_9.write(pos);
  delay(2000);
}