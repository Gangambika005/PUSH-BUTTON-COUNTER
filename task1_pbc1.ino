const int buttonPin = 2;
int counter = 0;
int previousState = LOW;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int currentState = digitalRead(buttonPin);

  if (currentState == HIGH && previousState == LOW) {
    counter++;
    Serial.print("Button Pressed: ");
    Serial.println(counter);
    delay(200); // simple debounce
  }

  previousState = currentState;
}

