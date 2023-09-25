#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
    // put your setup code here, to run once:

}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  
  for (int i=0; i<5; i++) {
    digitalWrite(PIN_LED, LOW);
    delay(200);
    digitalWrite(PIN_LED, HIGH);
    delay(200);
  }
  digitalWrite(PIN_LED, LOW);
  while(1) {} // infinite loop




  // put your main code here, to run repeatedly:

}
