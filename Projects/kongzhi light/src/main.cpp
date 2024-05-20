/*
 * @Author: shichenyi shichenyi23@163.com
 * @Date: 2024-05-18 08:31:15
 * @LastEditors: shichenyi shichenyi23@163.com
 * @LastEditTime: 2024-05-18 23:06:29
 * @FilePath: \kongzhi lightc:\Users\SCY\Documents\PlatformIO\Projects\kongzhi light\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include<HardwareSerial.h>

int i;
int oldi;
int ledpin1=2;
int ledpin2=3;
int ledpin3=4;
int ledpin4=5;
int led_state=0;


void setup() {
Serial.begin(9600);
pinMode(ledpin1,OUTPUT);
pinMode(ledpin2,OUTPUT);
pinMode(ledpin3,OUTPUT);
pinMode(ledpin4,OUTPUT);
}

void loop() {
while(Serial.available()>0){
i=Serial.read();
if(i=='R'){
  digitalWrite(ledpin1,HIGH);
}
else if(i=='r'){
  digitalWrite(ledpin1,LOW);
}
else if(i=='T'){
  digitalWrite(ledpin2,HIGH);
}
else if(i=='t'){
  digitalWrite(ledpin2,LOW);
}  
else if(i=='Y'){
  digitalWrite(ledpin3,HIGH);
}
else if(i=='y'){
  digitalWrite(ledpin3,LOW);
}
else if(i=='U'){
  digitalWrite(ledpin4,HIGH);
}
else if(i=='u'){
  digitalWrite(ledpin4,LOW);
}  
}
}