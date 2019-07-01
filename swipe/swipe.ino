void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float a0_reading = analogRead(A0);
  float a1_reading = analogRead(A1);
  float a2_reading = analogRead(A2);
  float benchmark = 2;
  Serial.print("A0 : ");
  Serial.print(analogRead(A1));

  Serial.print(", A1 : ");
  Serial.print(analogRead(A1));

  Serial.print(", A2 : ");
  Serial.print(analogRead(A2));

  Serial.println("");
  if(a0_reading <=benchmark && a1_reading <= benchmark && a2_reading <=benchmark){
    //Serial.println("Swiped"); 
  }
  
}
