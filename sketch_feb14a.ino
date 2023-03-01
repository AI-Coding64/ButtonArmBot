// Code For Button Arm Bot
const int Button1 = A0; // Set pin A0 to button one
const int Button2 = A1; // Set pin A1 to button two

int ButtonState1 = 0;
int ButtonState2 = 0;
int ButtonState3 = 0;

void setup() {
 	pinMode(Button1, INPUT_PULLUP);
  	pinMode(Button2, INPUT_PULLUP);
	// Motor Four
  	pinMode(2, OUTPUT); // Positive side
	pinMode(3, OUTPUT); // Negative side
	// Motor Three
	pinMode(4, OUTPUT); // Positive side
	pinMode(5, OUTPUT); // Negative side
	// Motor Two
	pinMode(6, OUTPUT); // Positive side
	pinMode(7, OUTPUT); // Negative side
	// Motor One
	pinMode(8, OUTPUT); // Positive side
	pinMode(9, OUTPUT); // Negative side

	pinMode(10, OUTPUT); // Electromagnet Zero
}

void loop() {
	ButtonState1 = digitalRead(Button1); // Mode One
	ButtonState2 = digitalRead(Button2); // Mode Two
	ButtonState3 = digitalRead(Button1) && digitalRead(Button2); // Mode Reset

	if (ButtonState1 == LOW) { // Mode One for button One
		delay(500);
		digitalWrite(8, LOW); // Positive Motor One On
		delay(3000);
		digitalWrite(8, HIGH); // Positive Motor One Off
		digitalWrite(6, LOW); // Positive Motor Two On
		delay(2000);
		digitalWrite(6, HIGH);// Positive Motor Two Off
		digitalWrite(10, HIGH); // Electromagnet On
		delay(5000);
		digitalWrite(10, LOW); // Electromagnet Off
		digitalWrite(7, LOW); // Negative Motor Two On
		delay(2000);
		digitalWrite(7, HIGH); // Negative Motor Two Off
		digitalWrite(9, LOW); // Negative Motor One On
		delay(3000);
		digitalWrite(9, HIGH); // Negative Motor One Off
  	} else {
		digitalWrite(6, HIGH); // Motor Off
		digitalWrite(7, HIGH); // Motor Off
    		digitalWrite(8, HIGH); // Motor Off
    		digitalWrite(9, HIGH); // Motor Off
		digitalWrite(10, LOW); // Electromagnet Off
  	}

  	if (ButtonState2 == LOW) { // Mode Two for button Two
    		delay(500);
    		digitalWrite();
  	} else {
    		digitalWrite();
  	}

  	if (ButtonState3 == LOW) { // Return Statment / Reset
		delay(500);
		digitalWrite();
  	} else {
		digitalWrite();
  	}
}
