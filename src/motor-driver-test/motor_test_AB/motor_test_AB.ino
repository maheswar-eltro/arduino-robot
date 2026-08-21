// Both motors test through TB6612FNG

// Motor A (RIGHT)
const int AIN1 = 5;
const int AIN2 = 4;
const int PWMA = 3;

// Motor B (LEFT)
const int BIN1 = 9;
const int BIN2 = 10;
const int PWMB = 11;

const int STBY = 7;

void setup() {

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  pinMode(STBY, OUTPUT);

  digitalWrite(STBY, HIGH);
}

void loop() {

  // BOTH FORWARD
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);

  analogWrite(PWMA, 255);
  analogWrite(PWMB, 255);

  delay(500);

  // STOP
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

  delay(1000);

  // BOTH REVERSE
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);

  analogWrite(PWMA, 255);
  analogWrite(PWMB, 255);

  delay(500);

  // STOP
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

  delay(1000);
}