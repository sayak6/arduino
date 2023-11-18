



#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the kpd
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the column pinouts of the kpd

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
char Keypressed_val;
int key1=0;
int key2=0;
int key3=0;
int key4=0;






void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
Keypressed_val = kpd.getKey();
if (Keypressed_val) {


if(Keypressed_val == '1'){
  key1 = 1;
}
if(Keypressed_val == '2'){
  key2 = 2;
}
if(Keypressed_val == '3'){
  key3 = 3;
}
if(Keypressed_val == '4'){
  key4 = 4;
}
Serial.print(key1);
Serial.print(" ");
Serial.print(key2);
Serial.print(" ");
Serial.print(key3);
Serial.print(" ");
Serial.println(key4);
Serial.println(Keypressed_val);
}
/*


if (keypressed_val == 50){
//forward
Forward();

}
if (keypressed_val == 56){
  //backward
Backward();

}
if (keypressed_val == 54){
  //right
Right();

}
if (keypressed_val == 52){
//left
Left();

}
if (keypressed_val == 53){
  //stop
Stop();
}
}
*/
}






