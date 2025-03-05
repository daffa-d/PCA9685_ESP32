//Relay Active LOW

#define PELTIER 8
#define FAN 10

unsigned long prevTime;
bool state = true;

void setup() {
  pinMode(FAN, OUTPUT);
  pinMode(PELTIER, OUTPUT);
  digitalWrite(FAN, LOW);
  digitalWrite(PELTIER, LOW);
}

void loop() {
  if (millis() - prevTime > 1.2e+6) {
    state = !state;
    prevTime = millis();
  }

  if (state) {
    digitalWrite(PELTIER, LOW);
    digitalWrite(FAN, LOW);
  } else{
    digitalWrite(PELTIER, HIGH);
    digitalWrite(FAN, LOW);
    delay(1.2e+6);
    digitalWrite(FAN, HIGH);
  }
}
