const int buttonPin = 2;
int buttonState = 0;
int lastButtonState = 0;


void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && lastButtonState == LOW) {
    Serial.println("Button pressed!");
    // Add a delay to avoid multiple button presses in quick succession
    delay(1000) // 1000 ms == 1s
    Serial.println("Sending signal to computer...")
    Serial.println("logout_signal") // Placeholder for the actual signal
  }

  lastButtonState = buttonState;

}
