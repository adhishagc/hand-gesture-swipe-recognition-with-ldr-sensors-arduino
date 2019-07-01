void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("A0 : ");
  Serial.print(analogRead(A0));

  Serial.print(", A1 : ");
  Serial.print(analogRead(A1));

  Serial.print(", A2 : ");
  Serial.print(analogRead(A2));

  Serial.println(""); 
}
