
//Identifikasi setiap sensor
int redLed = 8;
int buzzer = 9;

//sensor MQ2
int smokeA0 = A0;
int batasNilai = 100;
char val; 
void setup() {
   pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
  pinMode(smokeA0, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  if( Serial.available() >0 )
  {
     val = Serial.read();
      Serial.println(val); 
 //nilai yang muncul di sensor MQ2
 int analogSensor = analogRead(smokeA0);

 //cetak secara serial
 Serial.print("Nilaior : ");
 Serial.println(analogSensor);

 //jika nilai sensor lebih besar dari batas nilai maka
 if (analogSensor > batasNilai)
 {
  //lampu led nyala
  digitalWrite(redLed, HIGH);

  //buzzer bunyi
  tone(buzzer, 2000, 1000);
 }
 else
 {
  //jika dibawah dari batas nilai maka
  //lampu led mati
  digitalWrite(redLed, LOW);

  //buzzer off
  noTone(buzzer);
 }

 //Diulangi tiap 3 detik
 delay(3000);
 }

  {
     
  }
    if( val == '1' ) {
      digitalWrite(3,LOW); }
    else if( val == '2' ) {
      digitalWrite(4,LOW); }
  '\5  else if( val == '3' ) {
      digitalWrite(5,LOW); }
    else if( val == '4' ) {
      digitalWrite(6,LOW); }
    else if( val == '5' ) {
  }
     else if( val == 'A' ) {
      digitalWrite(3,HIGH); }
     else if( val == 'B' ) {
      digitalWrite(4,HIGH); }
     else if( val == 'C' ) {
      digitalWrite(5,HIGH); }
     else if( val == 'D' ) {
      digitalWrite(6,HIGH); } 
     else if( val == 'E' ) {  
}
}      
      
