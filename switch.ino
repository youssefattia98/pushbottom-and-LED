/*
  Author: Youssef Attia
  Description: led control with pushbottom
*/
#define led 2
#define switch 3
int bottom;
void setup() {
  pinMode(switch, INPUT);
  pinMode(led, OUTPUT);
}
void loop() {
  bottom = digitalRead(switch);
  if (bottom == HIGH) {
    digitalWrite(led, LOW);
  }
  else if (bottom == LOW) {
    digitalWrite(led, HIGH);
  }
}
