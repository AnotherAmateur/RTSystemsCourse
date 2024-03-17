// 5 пинов с периодами 50 мкс, 100 мкс, 500 мкс, 1 мс, 10 мс

const int pin1 = 2;
const int pin2 = 3;
const int pin3 = 4;
const int pin4 = 5;
const int pin5 = 6;

bool pin1_state = false;
bool pin2_state = false;
bool pin3_state = false;
bool pin4_state = false;
bool pin5_state = false;

unsigned int counter = 0;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);  
}

// тут и без delay() выходит задержка под 50 мкс
void loop() {
	pin1_state = !pin1_state;
	digitalWrite(pin1, pin1_state);

	if (counter % 2 == 0) {
		pin2_state = !pin2_state;
		digitalWrite(pin2, pin2_state);
	}

	if (counter % 10 == 0) {
		pin3_state = !pin3_state;
		digitalWrite(pin3, pin3_state);
	}

	if (counter % 20 == 0) {
		pin4_state = !pin4_state;
		digitalWrite(pin4, pin4_state);
	}

	if (counter % 200 == 0) {
		pin5_state = !pin5_state;
		digitalWrite(pin5, pin5_state);
	}

	++counter;
	delayMicroseconds(50);
}