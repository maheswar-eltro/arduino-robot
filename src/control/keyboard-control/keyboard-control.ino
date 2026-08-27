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

    char command = Serial.read();

    if (command == 'w') {
      move_front();
    }
    else if (command == 's') {
      move_back();
    }
    else if (command == 'a') {
      turn_left();
    }
    else if (command == 'd') {
      turn_right();
    }
    else if (command == 'x') {
      stop();
    }
    else if (command == 'e'){
      spin();
    }
  }
}


void move_front (){
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  
  analogWrite(PWMA, 130);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  
  analogWrite(PWMB, 255);
}

void move_back (){
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  
  analogWrite(PWMA, 150);

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  
  analogWrite(PWMB, 255);
}

void turn_left () {
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  
  analogWrite(PWMA, 130);

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, LOW);
  
  analogWrite(PWMB, 0);
}

void turn_right() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);
  
  analogWrite(PWMA, 0);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  
  analogWrite(PWMB, 255);
}

void stop() {
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);
}

void spin() {
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 150);

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 255);
}
