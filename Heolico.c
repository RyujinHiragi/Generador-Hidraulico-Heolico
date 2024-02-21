const int sensorPin = A0; 

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); 
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.print("Valor del sensor: ");
  Serial.println(sensorValue);

  if (sensorValue > umbral) {
   
    digitalWrite(relayPin, HIGH);
    Serial.println("Generador encendido");
  } else {
    
    digitalWrite(relayPin, LOW);
    Serial.println("Generador apagado");
  }

  delay(1000); 
}
