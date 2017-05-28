#include "Keyboard.h"

//Button Setup
const int BUTTON_CT = 7;
const int buttonPins[] = {5,6,7,8,9,10,11,12};
const int LED_PIN = 13;
const int BUTTON_DEBOUNCE_DELAY = 50;

//Varibles
int buttonPreviousState[] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH}; //keep the state of the button at least read

unsigned long buttonLastDebounceTime[] = {0,0,0,0,0,0,0,0};  // the last time the output pin was toggled
unsigned long debounceDelay = BUTTON_DEBOUNCE_DELAY; // the debounce time; increase if the output flickers

void setup() {
  // make the pushButton pin an input:
  for (int i=0; i <= BUTTON_CT; i++){
    pinMode(buttonPins[i], INPUT);
  } 

  // make ledPin output
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {  
  for (int i=0; i <= BUTTON_CT; i++) {
    int buttonState = digitalRead(buttonPins[i]); // read the pushbutton:
    if ((buttonState != buttonPreviousState[i])
        // and it's currently pressed:
        && (buttonState == HIGH)) {
        Keyboard.print(i+1);
    }
    buttonPreviousState[i] = buttonState;
  }
}
