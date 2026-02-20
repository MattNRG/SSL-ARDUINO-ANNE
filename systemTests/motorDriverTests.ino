// CHANGE BEFORE USING
#define PIN_MOTDR_L1_SPD 4
#define PIN_MOTDR_L1_FOR 24
#define PIN_MOTDR_L1_BAC 26
#define PIN_MOTDR_L2_SPD 6
#define PIN_MOTDR_L2_FOR 30
#define PIN_MOTDR_L2_BAC 28

#define PIN_MOTDR_R1_SPD 3
#define PIN_MOTDR_R1_FOR 25
#define PIN_MOTDR_R1_BAC 27
#define PIN_MOTDR_R2_SPD 5
#define PIN_MOTDR_R2_FOR 31
#define PIN_MOTDR_R2_BAC 29

void motorTest() {
  digitalWrite(PIN_MOTDR_L1_FOR, HIGH);
  digitalWrite(PIN_MOTDR_L2_FOR, HIGH);

  digitalWrite(PIN_MOTDR_R1_FOR, HIGH);
  digitalWrite(PIN_MOTDR_R2_FOR, HIGH);

  delay(3000);

  digitalWrite(PIN_MOTDR_L1_FOR, LOW);
  digitalWrite(PIN_MOTDR_L2_FOR, LOW);

  digitalWrite(PIN_MOTDR_R1_FOR, LOW);
  digitalWrite(PIN_MOTDR_R2_FOR, LOW);

  digitalWrite(PIN_MOTDR_L1_BAC, HIGH);
  digitalWrite(PIN_MOTDR_L2_BAC, HIGH);

  digitalWrite(PIN_MOTDR_R1_BAC, HIGH);
  digitalWrite(PIN_MOTDR_R2_BAC, HIGH);
  
  delay(3000);

  digitalWrite(PIN_MOTDR_L1_BAC, LOW);
  digitalWrite(PIN_MOTDR_L2_BAC, LOW);

  digitalWrite(PIN_MOTDR_R1_BAC, LOW);
  digitalWrite(PIN_MOTDR_R2_BAC, LOW);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_MOTDR_L1_SPD, OUTPUT);
  pinMode(PIN_MOTDR_L1_FOR, OUTPUT);
  pinMode(PIN_MOTDR_L1_BAC, OUTPUT);
  pinMode(PIN_MOTDR_L2_SPD, OUTPUT);
  pinMode(PIN_MOTDR_L2_FOR, OUTPUT);
  pinMode(PIN_MOTDR_L2_BAC, OUTPUT);

  pinMode(PIN_MOTDR_R1_SPD, OUTPUT);
  pinMode(PIN_MOTDR_R1_FOR, OUTPUT);
  pinMode(PIN_MOTDR_R1_BAC, OUTPUT);
  pinMode(PIN_MOTDR_R2_SPD, OUTPUT);
  pinMode(PIN_MOTDR_R2_FOR, OUTPUT);
  pinMode(PIN_MOTDR_R2_BAC, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(PIN_MOTDR_L1_SPD, 128);
  analogWrite(PIN_MOTDR_L2_SPD, 128);
  analogWrite(PIN_MOTDR_R1_SPD, 128);
  analogWrite(PIN_MOTDR_R2_SPD, 128);
  motorTest();

  delay(5000);
  
  analogWrite(PIN_MOTDR_L1_SPD, 255);
  analogWrite(PIN_MOTDR_L2_SPD, 255);
  analogWrite(PIN_MOTDR_R1_SPD, 255);
  analogWrite(PIN_MOTDR_R2_SPD, 255);
  motorTest();

  delay(5000);
}
