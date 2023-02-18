int led01 = 1;
int led02 = 2;
int led03 = 3;
int tempo = 1000;

void setup() {
  pinMode(led01,OUTPUT);
  pinMode(led02,OUTPUT);
  pinMode(led03,OUTPUT);

}

void loop() {
  digitalWrite(led01,HIGH);
  delay(1000);
  digitalWrite(led01,LOW);
  digitalWrite(led02,HIGH);
  delay(1000);
  digitalWrite(led02,LOW);
  digitalWrite(led03,HIGH);
  delay(1000);
  digitalWrite(led03,LOW);

}
