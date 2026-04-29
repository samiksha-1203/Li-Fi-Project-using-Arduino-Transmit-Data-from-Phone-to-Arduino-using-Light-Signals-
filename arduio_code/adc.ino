#include <LiquidCrystal.h>

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define LDR 9

String data = "";
String lastMessage = "";

void setup() {
  Serial.begin(9600);
  pinMode(LDR, INPUT);

  lcd.begin(16,2);
  
  lcd.clear();
  lcd.print("LiFi Project");
  delay(2000);

  lcd.clear();
  lcd.print("Send message");
  lcd.setCursor(0,1);
  lcd.print("from LiFi App");
  delay(2000);

  lcd.clear();
  lcd.print("Waiting...");
}

void loop() {

  int val = digitalRead(LDR);

  if(val == LOW) {   // light detected
    data += "0";
  }
  else {             // no light
    data += "1";
  }

  Serial.println(data);

  String msg = decodeMessage(data);

  if(msg != "" && msg != lastMessage) {
    lastMessage = msg;

    lcd.clear();
    lcd.print(msg);

    Serial.print("Received: ");
    Serial.println(msg);

    data = "";
  }

  if(data.length() > 15) {
    data = "";
  }

  delay(100);
}

String decodeMessage(String d) {

  if(d == "001") return "hi";
  if(d == "0001") return "hello";
  if(d == "00001") return "how are you";
  if(d == "000001") return "I am fine";
  if(d == "0000001") return "ok";
  if(d == "00000001") return "good morning";
  if(d == "000000001") return "good afternoon";
  if(d == "0000000001") return "good evening";
  if(d == "00000000001") return "thank you";
  if(d == "000000000001") return "sorry";

  return "";
}