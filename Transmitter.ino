/*
                 Передатчик|Transmitter
        
        HC-12 - ARDUINO       Joystick - ARDUINO
        VCC   -   5V          VCC      -   5V
        GND   -   GND         GND      -   GND
        RX    -   TX(1)       VRX      -   A0
        TX    -   RX(0)       VRY      -   A1
*/
int xAxis, yAxis;

void setup() {
  Serial.begin(9600);
}

void loop() {
  xAxis = analogRead(A0);
  yAxis = analogRead(A1);
  
  Serial.write(xAxis/4);
  Serial.write(yAxis/4);
  delay(20);
}
