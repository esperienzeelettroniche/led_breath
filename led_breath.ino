#define DELAY 8

float pwm, c = 0.18;
  
void setup() {
  pinMode(3, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  for(float i = 0; i <= 500; i++){
    pwm = 255.0 * exp( -pow( ( ( ( i/500 ) - 0.5 ) / c ), 2.0) );
    Serial.println(int(pwm));
    analogWrite(3, int(pwm));
    delay(DELAY);
  }
}
