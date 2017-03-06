const byte startPin = 1;
const byte endPin = 8;
const byte sw = 13;

void setup() {
  pinMode(sw, INPUT);
// 將每個 Pin 設定成輸出
  for (byte i = startPin; i<= endPin; i++) {
  pinMode(i, OUTPUT);
  }
  byte i,g;
}

void loop() {
  boolean val = digitalRead(13);
  if(val)
  {  for (i=startPin; i<= endPin; i++) {
     digitalWrite(i,HIGH);}
  delay(500);
      for (i=startPin; i<= endPin; i++) {
        digitalWrite(i,LOW);}
  delay(500);
         for (i=startPin; i<= endPin; i++) {
           digitalWrite(i,HIGH);}
  delay(500);
            for (i=startPin; i<= endPin; i++) {
              digitalWrite(i,LOW);}
  delay(500);
  byte lightPin = startPin;
for(g=1;g<=8;g++){
 // 所有 LED OFF
 for (i=startPin; i<= endPin; i++) {
 digitalWrite(i,LOW);
 }
 // 點亮 LED
 digitalWrite(lightPin, HIGH);
 delay(500);
 
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
  delay(500);
      for (i=startPin; i<= endPin; i++) {
        digitalWrite(i,LOW);}
  delay(500);
         for (i=startPin; i<= endPin; i++) {
           digitalWrite(i,HIGH);}
  delay(500);
            for (i=startPin; i<= endPin; i++) {
              digitalWrite(i,LOW);}
  delay(500);
lightPin = endPin;
   for(g=1;g<=8;g++){
 // 所有 LED OFF
 for (i=endPin; i>= startPin; i--) {
 digitalWrite(i,LOW);
 }
 // 點亮 LED
 digitalWrite(lightPin, HIGH);
 delay(500);
 
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
  else
  {
    byte lightPin = startPin;
      for(g=1;g<=8;g++)
      {
          for (i=startPin; i<= endPin; i++) {
          digitalWrite(i,LOW);
      }
 // 點亮 LED
 digitalWrite(lightPin, HIGH);
 delay(500);
 
 if (lightPin < endPin)  
 {
 lightPin ++;
 } 
 else 
 {
 lightPin = startPin;
 }
}
lightPin = endPin;
   for(g=1;g<=8;g++){
 // 所有 LED OFF
 for (i=endPin; i>= startPin; i--) {
 digitalWrite(i,LOW);
 }
 // 點亮 LED
 digitalWrite(lightPin, HIGH);
 delay(500);
 
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

}
