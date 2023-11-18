#include <SoftwareSerial.h>

SoftwareSerial bluetooth (3,2);
int recieve_data;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
bluetooth.begin(9600);
recieve_data = 0;

}

void loop() {
  // put your main code here, to run repeatedly:
if (bluetooth.available()) {
 recieve_data = bluetooth.read();
 Serial.println(recieve_data);
}
}
