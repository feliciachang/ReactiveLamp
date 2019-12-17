/*********
  Rui Santos
  Complete project details at http://randomnerdtutorials.com  
*********/

// Decode HTTP GET value
String redString = "255";
String greenString = "255";
String blueString = "255";
int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int pos4 = 0;

// Red, green, and blue pins for PWM control
const int redPin = 14;     // 13 corresponds to GPIO13
const int greenPin = 12;   // 12 corresponds to GPIO12
const int bluePin = 13;    // 14 corresponds to GPIO14

//photoreceptor
int lightSensorPin = 25;

// Setting PWM frequency, channels and bit resolution
const int freq = 5000;
const int redChannel = 0;
const int greenChannel = 1;
const int blueChannel = 2;
// Bit resolution 2^8 = 256
const int resolution = 8;

// Current time
unsigned long currentTime = millis();
// Previous time
unsigned long previousTime = 0; 
// Define timeout time in milliseconds (example: 2000ms = 2s)
const long timeoutTime = 2000;

void setup() {
  Serial.begin(115200);
  pinMode(lightSensorPin, INPUT);
  // configure LED PWM functionalitites
  ledcSetup(redChannel, freq, resolution);
  ledcSetup(greenChannel, freq, resolution);
  ledcSetup(blueChannel, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(redPin, redChannel);
  ledcAttachPin(greenPin, greenChannel);
  ledcAttachPin(bluePin, blueChannel);

}

void loop(){
  int val = analogRead(lightSensorPin);
  val = val/16.06;
  Serial.println(val);
            // Request sample: /?r201g32b255&
            // Red = 201 | Green = 32 | Blue = 255

              /*Serial.println(redString.toInt());
              Serial.println(greenString.toInt());
              Serial.println(blueString.toInt());*/
  ledcWrite(redChannel, 255);
  ledcWrite(greenChannel, 255);
  ledcWrite(blueChannel, 255);
  delay(50);

}
