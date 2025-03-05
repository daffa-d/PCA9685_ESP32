/*
 * ************************** ESP32 Compatible Socket With PCA9685****************************************************
 *  PWM 1 : 32
 *  PWM 2 : 33
 *  PWM 3 : 25
 *  PWM 4 : 26
 *  PWM 5 : 27
 *  PWM 6 : 14
 *  PWM 7 : 12
 *  PWM 8 : 13
 *  PWM 9 : 2 
 *  PWM 10: 4
 *  PWM 11: 16
 *  PWM 12: 17
 *  PWM 13: 5
 *  PWM 14: 18
 *  PWM 15: 19
 *  PWM 16: 23
 */

 #define PWM_1 32
 #define PWM_2 33

 #define FREQUENCY 5000
 #define BIT_WIDTH 12

 void setup(){
  Serial.begin(115200);
  ledcAttach(PWM_1, FREQUENCY, BIT_WIDTH);
  ledcAttach(PWM_2, FREQUENCY, BIT_WIDTH);
 }

 void loop(){
  ledcFade(PWM_1, 0, 4095, 2000);
  ledcFade(PWM_2, 0, 4095, 2000);
  delay(1000);
 }
