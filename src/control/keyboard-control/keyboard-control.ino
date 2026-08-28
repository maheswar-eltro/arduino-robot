const int AIN1 = 5;
const int AIN2 = 4;
const int PWMA = 3;

const int STBY = 7;

const int BIN1 = 9;
const int BIN2 = 10;
const int PWMB = 11;


void setup() {
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(STBY, OUTPUT);
  digitalWrite(STBY, HIGH);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {

    int left = Serial.parseInt();
    int right = Serial.parseInt();

    drive(left, right);
  }
}

void move_front (){
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  
  analogWrite(PWMA, 190);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  
  analogWrite(PWMB, 255);
}

void move_back (){
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  
  analogWrite(PWMA, 190);

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  
  analogWrite(PWMB, 255);
}

void turn_left () {
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  
  analogWrite(PWMA, 190);

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  
  analogWrite(PWMB, 255);
}

void turn_right() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  
  analogWrite(PWMA, 190);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  
  analogWrite(PWMB, 255);
}

void stop() {
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);
}


void drive (int left , int right) {
  if (left > 0) {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);
  } 
  else if (left < 0) {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);
  }
  else {
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, LOW);
  }

  if (right > 0) {
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, LOW);
  } 
  else if (right < 0) {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, HIGH);
  }
  else {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, LOW);
  }

  left = abs(left);
  right = abs(right);

  right = constrain(right, 0, 255);
  left = constrain(left, 0, 255);

  analogWrite(PWMA, right);
  analogWrite(PWMB, left);

}









