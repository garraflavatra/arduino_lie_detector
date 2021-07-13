#define ANALOG_PIN A0
#define LED_RED    4
#define LED_YELLOW 3
#define LED_GREEN  2

int val;

void setup() {
  Serial.begin(9600);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop() {
  val = analogRead(ANALOG_PIN);
  Serial.println(val);

  if (val > 30) {
    turnOn(LED_RED);
  } else if (val > 15) {
    turnOn(LED_YELLOW);
  } else {
    turnOn(LED_GREEN);
  }

  delay(20);
}

void turnOn(int led) {
  if (led == LED_RED) {
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_GREEN, LOW);
  } else if (led == LED_YELLOW) {
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_YELLOW, HIGH);
    digitalWrite(LED_GREEN, LOW);
  } else if (led == LED_GREEN) {
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_GREEN, HIGH);
  }
}

//void setup()
//{
//  Serial.begin(9600);
//  pinMode(2, OUTPUT);
//  pinMode(3, OUTPUT);
//  pinMode(4, OUTPUT);
//  digitalWrite(2, HIGH);
//  delay(500);
//  digitalWrite(3, HIGH);
//  delay(500);
//  digitalWrite(4, HIGH);
//  delay(500);
//}
//
//void loop()
//{
//  if (analogRead(A0) > 60)
//  {
//    digitalWrite(4, HIGH);
//  }
//  else
//  {
//    digitalWrite(4, LOW);
//  }
//  if (analogRead(A0) > 20)
//  {
//    digitalWrite(2, HIGH);
//  }
//  else
//  {
//    digitalWrite(2, LOW);
//  }
//  if (analogRead(A0) > 45)
//  {
//    digitalWrite(3, HIGH);
//  }
//  else
//  {
//    digitalWrite(3, LOW);
//  }
//
//  Serial.println(analogRead(A0));
//  delay(20);
//}
