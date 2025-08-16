// Pin assignments
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
const int buzzerPin = 8;
const int buttonPin = 2;

int state = 0;
bool lastButtonState = HIGH;
bool currentButtonState;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Button connected to GND

  setColor(0, 0, 0); // Start with LED off
  noTone(buzzerPin); // Start with buzzer off
}

void loop() {
  currentButtonState = digitalRead(buttonPin);

  if (lastButtonState == HIGH && currentButtonState == LOW) {
    unsigned long currentTime = millis();
    if (currentTime - lastDebounceTime > debounceDelay) {
      state = (state + 1) % 4;
      applyState(state);
      lastDebounceTime = currentTime;
    }
  }

  lastButtonState = currentButtonState;
}

void applyState(int s) {
  noTone(buzzerPin);    // Turn off any previous tone
  setColor(0, 0, 0);     // Turn off LED before setting new one

  switch (s) {
    case 0: // Solid Green + steady tone
      setColor(0, 255, 0);
      tone(buzzerPin, 1000); // Continuous tone
      break;

    case 1: // Solid Blue + higher steady tone
      setColor(0, 0, 255);
      tone(buzzerPin, 1500);
      break;

    case 2: // Solid Red + lower steady tone
      setColor(255, 0, 0);
      tone(buzzerPin, 800);
      break;

    case 3: // All off
      setColor(0, 0, 0);
      noTone(buzzerPin);
      break;
  }
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}