/*
 * @Author: shichenyi shichenyi23@163.com
 * @Date: 2024-05-17 23:13:52
 * @LastEditors: shichenyi shichenyi23@163.com
 * @LastEditTime: 2024-05-17 23:54:12
 * @FilePath: \流水灯c:\Users\SCY\Documents\PlatformIO\Projects\liushui light\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>


void setup() {
  // 设定主角（程序里的变量对应硬件的引脚），引脚功能/作用（输入/输出）
for(int i = 2; i < 8; i++)
pinMode(i,OUTPUT);
}
 
void loop() {
  //来回for循环，设置好起止点
for(int i = 2; i < 8; i++ )
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
  }
  for(int i = 7;i > 2;i--)
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
    }
}
