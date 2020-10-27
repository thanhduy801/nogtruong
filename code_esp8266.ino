#include <ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
BlynkTimer timer;
WidgetLED led1(V0);
char auth[] ="ma blynk";
char ssid[]="ten wifi";
char pass[]="mat khau";

void sendSensor(){
  if(led1.getValue()){
    led1.off();
  }else{
    led1.on();
  }
  Blynk.virtualWrite(V5,h);
  Blynk.virtualWrite(V6,t);
  Blynk.virtualWrite(V4,yl)
  
}
void setup(){
  Blynk.gegin(auth,ssid,pass);
  timer.setInterval(1000L,sendSensor);
  }
  void loop(){
    Blynk.run();
    timer.run();
}
