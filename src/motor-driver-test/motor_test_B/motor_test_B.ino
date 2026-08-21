// Motor B test through TB6612FNG
const int BIN1 = 9;
const int BIN2 = 10;
const int PWMB = 11;

const int STBY = 7;

void setup() {

  pinMode(BIN1 , OUTPUT);
  pinMode(BIN2 , OUTPUT);
  pinMode(PWMB , OUTPUT);

  pinMode(STBY , OUTPUT);
  digitalWrite(STBY , HIGH);

}

void loop() {
  digitalWrite(BIN1 , HIGH);
  digitalWrite(BIN2 , LOW);
  
  analogWrite(PWMB , 255);
}

