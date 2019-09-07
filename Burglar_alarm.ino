/*
Code by: www.munphurid.com
M.Hashir

This is a code for a burglar alarm
It plays buzzer whenever shadow falls on LDR

Hardware:
-Arduino
-LDR
-Buzzer

Connections:
Connect one leg of LDR to GND of Arduino
Connect other leg of LDR to A0 of Arduino
Connect small leg of Buzzer to GND
Connect longer leg of Buzzer to pin 11 of Arduino
*/

int buzzer = 11;    //Connect buzzer to pin 11 of Arduino
int ldr = A0;        //Connect ldr to pin A0 of Arduino

void setup() {
pinMode(buzzer,OUTPUT);      //Do not edit this line
pinMode(ldr,INPUT_PULLUP);    //Do not edit this line
Serial.begin(9600);          //Do not edit this line
}

void loop() {
int input = analogRead(ldr);    //Take input 
Serial.println(input);          //Send input to computer for display
if(input>200){  
digitalWrite(buzzer,HIGH);      //If there is shadow, turn on Buzzer
delay(2000);                    //wait
}
else{
digitalWrite(buzzer,LOW);        //Otherwise if there is light, turn off Buzzer
}

}
