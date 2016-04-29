int mosfetpin1 = 5;
//int btnPin = 2;
//boolean btnPressed = false;
int proximitySensorPin = A7; //analog pin 3

void setup() {
pinMode(mosfetpin1, OUTPUT);
//pinMode(btnPin, INPUT);  
Serial.begin(9600);
Serial.println("begin!");
}

void loop() {
  //read button
  //btnPressed = digitalRead(btnPin);
  int proximityReading = analogRead(proximitySensorPin);
  Serial.print("proximity reading obtained: ");
  Serial.println(proximityReading);  
  //if(btnPressed == HIGH) {
  if(proximityReading < 200) {
    //Serial.println("Button now pressed");  
    Serial.println("proximity sensor ACTIVATED");  
    Serial.println("Start writing HIGH");
    digitalWrite(mosfetpin1, HIGH);
    delay(500);

  } else {
    //Serial.println("Button unpressed");
    Serial.println("proximity sensor detects nothing");
    Serial.println("Start writing LOW");
    digitalWrite(mosfetpin1, LOW);
  }
  delay(400);
} 
