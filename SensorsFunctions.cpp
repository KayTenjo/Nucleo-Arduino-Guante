#include "Arduino.h"
#include "SensorsFunctions.h"

static char TERMINAL_SIGN = 's';
static int DIGITAL_HIGH = -1;
static int DIGITAL_LOW = -2;

void analogRead()
{
	
	int pin = Serial.parseInt();

	if(Serial.read() == TERMINAL_SIGN)
	{
		Serial.println(analogRead(pin));
	}
	
};
