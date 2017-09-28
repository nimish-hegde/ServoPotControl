
#include <Servo.h> //Access Arduino Servo Library to control the motors 

Servo myservo;  // Create the servo object to manipulate 

int value;    // Create variable to read value from the analog pin on the Uno

void setup()
{
  myservo.attach(9);  // Ensure that the output is to the 9th pin on the Uno
}

void loop() 
{ 
  value = analogRead(1);            // Read the value of the potentiometer from pin A1 (0 to 1023)
  value = map(value, 0, 1023, 0, 180);     // Convert the output value of the potentionmeter into degrees so that the Uno can understand how to turn the servo
  myservo.write(value);                  // Set servo position according to reading from potentiometer
  delay(15);                           // Create a small Delay to avoid jerk motion or overlap
} 

