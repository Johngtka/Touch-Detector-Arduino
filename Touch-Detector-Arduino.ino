int ledRGBR = 2;
int ledRGBG = 3;
int ledRGBB = 4;
int touchPin = 7;
int buzzPin = 8;
int currentState;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(touchPin, INPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  digitalWrite(buzzPin, LOW);
  // put your main code here, to run repeatedly:
  currentState = digitalRead(touchPin);
  //  Serial.print(currentState);
  if(currentState == HIGH){
    Buzzer();
  Serial.println("The sensor is touched");
    for (int i = 0 ; i <= 255; i++) {
      analogWrite(ledRGBR, i);
      analogWrite(ledRGBG, i);
      analogWrite(ledRGBB, i);
      delay(1);
    }
    for (int i = 255 ; i >= 0; i--) {
      analogWrite(ledRGBR, i);
      analogWrite(ledRGBG, i);
      analogWrite(ledRGBB, i);
      delay(1);
    }
  }
}
void Buzzer(){
  digitalWrite(buzzPin, LOW);
  delay(1);
  digitalWrite(buzzPin, HIGH);
  delay(1);
  return;
}
