int trig=1;
int echo=0;


void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

}

void loop() {
  Serial.begin(9600);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(2);
  digitalWrite(trig, LOW);

  long time=pulseIn(echo,HIGH);
  int distance=(time*0.034)/2;

  
  Serial.println(distance);


}