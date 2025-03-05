#include "Arduino.h"
#include "Wire.h"

#define BOARD_ID 0x3C 

#define GPIO_1 32
#define GPIO_2 33
#define GPIO_3 25
#define GPIO_4 26
#define GPIO_5 27
#define GPIO_6 14
#define GPIO_7 12
#define GPIO_8 13
#define GPIO_9 2
#define GPIO_10 4
#define GPIO_11 16
#define GPIO_12 17
#define GPIO_13 5
#define GPIO_14 18
#define GPIO_15 19



void setup(){
  Serial.begin(115200);
}

void loop(){
  Serial.println("Hello World!");
  delay(1000);
}