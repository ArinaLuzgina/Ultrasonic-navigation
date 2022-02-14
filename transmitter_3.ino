int ConnectPin = 10;   
int trigPin = 9;
int echoPin = 11;


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ConnectPin, INPUT); 
}

void loop() {
  int r = pulseIn(ConnectPin, LOW);//третий датчик

  if (r < 4300  and r >2900 ){
  
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  delay(5);
  
  }
  

}
