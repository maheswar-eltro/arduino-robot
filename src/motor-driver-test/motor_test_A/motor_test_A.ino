const int AIN1 = 5;
const int AIN2 = 4;
const int PWMA = 3;

const int STBY = 7;

void setup() {

  pinMode(AIN1 , OUTPUT);
  pinMode(AIN2 , OUTPUT);
  pinMode(PWMA , OUTPUT);

  pinMode(STBY , OUTPUT);
  digitalWrite(STBY , HIGH);

}

void loop() {
  digitalWrite(AIN2 , HIGH);
  digitalWrite(AIN1 , LOW);
  
  analogWrite(PWMA , 255);
}
