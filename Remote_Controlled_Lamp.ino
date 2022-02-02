// C++ code
//
#include <Servo.h>


Servo servo_3;

void setup()
{
  pinMode(2, INPUT);
  servo_3.attach(3, 500, 2500);

  Serial.begin(9600);
  Serial.println(digitalRead(2));

}

void loop()
{
  if (digitalRead(2) == 0) {
    
    servo_3.write(0);
    Serial.println(digitalRead(2));
  } 

  else{
    delay(100);
    servo_3.write(360);
  }
}
