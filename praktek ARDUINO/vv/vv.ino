//Identifikasi setiap sensor
int redLed = 8;
int buzzer = 9;

//sensor MQ2
int smokeA0 = A0;
int batasNilai = 100;

void setup() 
{
  Serial.begin(9600);
  pinMode(smokeA0, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() 
{
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
  digitalWrite(redLed,LOW);

  //buzzer off
  noTone(buzzer);
 }

 //Diulangi tiap 3 detik
 delay(3000);
 }
