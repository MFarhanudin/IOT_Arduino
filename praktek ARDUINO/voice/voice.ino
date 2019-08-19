String voice;
int
led1 = 3, //Connect LED 1 To Pin #3
led2 = 4, //Connect LED 2 To Pin #4
led3 = 5, //Connect LED 3 To pin #5
led4 = 6 //Connect LED 4 To Pin #6
;
//Hahahahahahahahahaha//
void allon(){
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);  
digitalWrite(led3, LOW);  
digitalWrite(led4, LOW); 
}
//wixwixwixwix//
void alloff(){
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);    
}
//ahahahahahah//
void setup(){
 Serial.begin(9600);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT); 
}
//ihihihihihihih//
void loop(){
while (Serial.available()){ //Cek apakah ada data yang masuk
delay(18); //Jeda waktu 10mS
char c = Serial.read(); //Menampung sata serial yang masuk pada variabel "c"
if (c == '#') {break;} //Keluar dari looping while saat ada karakter #
voice += c; //Menampung karakter yang masuk ke variable voice    
}
if (voice.length() >0){
  //Serial.printl(voice);
  //lampu hitam nyala//

 if(voice == "semua hidup") {allon();} //memanggil fungsi all on
 else if(voice == "semua mati") {alloff();} //memanggil fungsi all off
 //matikan setiap led dengan perintah//
 else if(voice == "lampu depan hidup"){digitalWrite(led1, HIGH);}
 else if(voice == "lampu lima hidup"){digitalWrite(led2, HIGH);} 
 else if(voice == "lampu tamu hidup"){digitalWrite(led3, HIGH);} 
 else if(voice == "lampu samping hidup"){digitalWrite(led4, HIGH);}
 //matikan led dengan perintah//
 else if(voice == "lampu depan mati"){digitalWrite(led1, LOW);}
 else if(voice == "lampu lima mati"){digitalWrite(led2, LOW);} 
 else if(voice == "lampu tamu mati"){digitalWrite(led3, LOW);} 
 else if(voice == "lampu samping mati"){digitalWrite(led4, LOW);} 
 //HAHAHAHA//
 voice="";}} //menghapus data di variable voice

  
