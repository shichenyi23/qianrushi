/*
 * @Author: shichenyi shichenyi23@163.com
 * @Date: 2024-05-18 22:46:15
 * @LastEditors: shichenyi shichenyi23@163.com
 * @LastEditTime: 2024-05-19 09:48:51
 * @FilePath: \LCD\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal Icd(12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2);

int i;


void setup()
{
 Icd.begin(16, 2);
while (1)
{
 Icd.home();
 Icd.print("What");
 delay(800);
 Icd.setCursor(5, 0);
 Icd.print("Can");
 delay(800);
 Icd.setCursor(9, 0);
 Icd.print("I");
 delay(800);
 Icd.setCursor(11, 0);
 Icd.print("Say");
 delay(1200);
Icd.clear();
Icd.setCursor(0, 0);
Icd.print("MAMBA");
Icd.setCursor(0, 1);
Icd.print("OUT");
for (i = 0; i < 3; i++)
{
 Icd.noDisplay();
 delay(500);
 Icd.display();
 delay(500);
}
 Icd.clear();
 delay(1000);       
}
}
void loop()
{}