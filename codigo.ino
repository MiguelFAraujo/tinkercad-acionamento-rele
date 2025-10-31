int rele = 10;

void setup(){
 pinMode(rele, OUTPUT);

}

void loop(){
 digitalWrite(rele, HIGH);
 delay(2000);
 digitalWrite(rele, LOW);
 delay(2000);

