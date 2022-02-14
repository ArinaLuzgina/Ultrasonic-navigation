int ConnectPin = 10;
int trigPin = 9;
int echoPin = 11;


void setup() {
  Serial.begin (115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ConnectPin, OUTPUT);
}

void loop() {
  long duration;
  int distance;
  //первый
  tone(ConnectPin, 38000, 10);

  delayMicroseconds(1500);
  digitalWrite(trigPin, LOW);

  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH, 200000);

  distance = duration * 0.033;

  if (distance <= 6000) {
    Serial.print(distance);
    Serial.println(" cm - 1");
  }
  distance = 0;
  //второй
  tone(ConnectPin, 38000, 20);
  delayMicroseconds(2800);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH, 200000);
  distance = duration * 0.033;
  if (distance <= 6000) {
    Serial.print(distance);
    Serial.println(" cm - 2");
  }
  distance = 0;
  //третий
  tone(ConnectPin, 38000, 30);
  delayMicroseconds(4800);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH, 200000);
  distance = duration * 0.033;
  if (distance <= 6000) {
    Serial.print(distance);
    Serial.println(" cm - 3");
  }
  distance = 0;

  delayMicroseconds(10);
}
