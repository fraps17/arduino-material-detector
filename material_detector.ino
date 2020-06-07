#define PIN_METAL_DETECTOR 12
#define PIN_INFRARED 11
#define PIN_PHOTO_SENSOR A0
#define PIN_PAPER_LED 2
#define PIN_PLASTIC_LED 3
#define PIN_METAL_LED 4

int infraredReading;
int metalDetectorReading;
int photoSensorReading;

void setup() {
  pinMode(PIN_PAPER_LED, OUTPUT);
  pinMode(PIN_PLASTIC_LED, OUTPUT);
  pinMode(PIN_METAL_LED, OUTPUT);
  pinMode(PIN_METAL_DETECTOR, INPUT);
  pinMode(PIN_INFRARED, INPUT);
  pinMode(PIN_PHOTO_SENSOR, INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(PIN_PAPER_LED, LOW);
  digitalWrite(PIN_PLASTIC_LED, LOW);
  digitalWrite(PIN_METAL_LED, LOW);
  Serial.println("Insert an object to analyze");
  while(infraredReading) {
    infraredReading = digitalRead(PIN_INFRARED);
    Serial.println(empty);
  }
  Serial.println("Analyzing...");
  metalDetectorReading = digitalRead(PIN_METAL_DETECTOR);
  if(metalDetectorReading == 0){
    Serial.println("Detected metal");
    digitalWrite(PIN_METAL_LED, HIGH);
  }
  else {
    photoSensorReading = analogRead(PIN_PHOTO_SENSOR);
    Serial.print("Light detected: ");
    Serial.println(light);
    if(photoSensorReading < 800){ // Need tuning
      Serial.println("Detected paper");
      digitalWrite(PIN_PAPER_LED, HIGH);
    }
    else {
      Serial.println("Detected plastic");
      digitalWrite(PIN_PLASTIC_LED, HIGH);
    }
  }
  delay(500); 
  infraredReading = digitalRead(PIN_INFRARED); 
}
