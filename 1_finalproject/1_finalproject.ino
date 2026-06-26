//

int sensor =8;
int ledRed =5;
int ledBlue =6;
void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
    digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, LOW);
}

void loop()
{
  int sonido = digitalRead(sensor);
  Serial.println(sonido);
 
 if(sonido==0){
  Serial.println("Mucho ruido");
  ruido();
 }
 else{
  Serial.println("Okk");
  digitalWrite(ledBlue, HIGH);
 }

}


void ruido(){
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}
