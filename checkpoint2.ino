const byte startPin = 1;
const byte endPin = 8;

void setup() {
  for (byte i = startPin; i<= endPin; i++) {
  pinMode(i, OUTPUT);
  }
  }
byte i,g;

}

void loop() {
  
   for (i=startPin; i<= endPin; i++) {
     digitalWrite(i,HIGH);}
  delay(1000);
      for (i=startPin; i<= endPin; i++) {
        digitalWrite(i,LOW);}
  delay(1000);
         for (i=startPin; i<= endPin; i++) {
           digitalWrite(i,HIGH);}
  delay(1000);
            for (i=startPin; i<= endPin; i++) {
              digitalWrite(i,LOW);}
  delay(1000);
  byte lightPin = startPin;
for(g=1;g<=8;g++){
 // 所有 LED OFF
 for (i=startPin; i<= endPin; i++) {
 digitalWrite(i,LOW);
 }
 // 點亮 LED
 digitalWrite(lightPin, HIGH);
 delay(1000);
 
 if (lightPin < endPin)  
 {
 lightPin ++;
 } 
 else 
 {
 lightPin = startPin;
 }
}
   for (i=startPin; i<= endPin; i++) {
     digitalWrite(i,HIGH);}
  delay(1000);
      for (i=startPin; i<= endPin; i++) {
        digitalWrite(i,LOW);}
  delay(1000);
         for (i=startPin; i<= endPin; i++) {
           digitalWrite(i,HIGH);}
  delay(1000);
            for (i=startPin; i<= endPin; i++) {
              digitalWrite(i,LOW);}
  delay(1000);
lightPin = endPin;
   for(g=1;g<=8;g++){
 // 所有 LED OFF
 for (i=endPin; i>= startPin; i--) {
 digitalWrite(i,LOW);
 }
 // 點亮 LED
 digitalWrite(lightPin, HIGH);
 delay(1000);
 
 if (lightPin > startPin) 
 {
 lightPin --;
 } 
 else 
 {
 lightPin = endPin;
 }
}
}
