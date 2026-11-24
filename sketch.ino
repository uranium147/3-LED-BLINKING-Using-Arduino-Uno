int redLED=8;
int greenLED=7;
int yellowLED=9;
int redBlink=100;
int greenBlink=500;
int yellowBlink=1000;



void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<5;i++){
    digitalWrite(redLED,HIGH);
  delay(redBlink);
  digitalWrite(redLED,LOW);
  delay(redBlink);
 }

 for(int i=0;i<10;i++){
  digitalWrite(greenLED,HIGH);
  delay(greenBlink);
  digitalWrite(greenLED,LOW);
  delay(greenBlink);
 }
 for(int i=0;i<15;i++){
  digitalWrite(yellowLED,HIGH);
  delay(yellowBlink);
  digitalWrite(yellowLED,LOW);
  delay(yellowBlink);

 }
 

  
  
}

