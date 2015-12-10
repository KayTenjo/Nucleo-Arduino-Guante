#include "Arduino.h"
#include "ActuatorsFunctions.h"

static char TERMINAL_SIGN = 's';
static int DIGITAL_HIGH = -1;
static int DIGITAL_LOW = -2;


void initializeActuators()
{
	
	int pin_quantity = Serial.parseInt();
	int pins [pin_quantity];

	for(int i=0; i<pin_quantity; i++)
	{
		pins[i] = Serial.parseInt();		
	}

	if(Serial.read() == TERMINAL_SIGN)
	{
		for(int i=0; i<pin_quantity; i++)
		{
			pinMode(pins[i], OUTPUT);

		}
	}
};


void activateActuators()
{
	
	int pin_quantity = Serial.parseInt();
	int pins [pin_quantity];
	int values [pin_quantity];

	for(int i=0; i<pin_quantity; i++)
	{
		pins[i] = Serial.parseInt();
		values[i] = Serial.parseInt();
	}

	if(Serial.read() == TERMINAL_SIGN)
	{
		for(int i=0; i<pin_quantity; i++)
		{
			if(values[i]>=0)
			{
				analogWrite(pins[i],values[i]);
			}

			else
			{
				if(values[i] == DIGITAL_HIGH)
				{
					digitalWrite(pins[i], HIGH);
				}

				else
				{
					digitalWrite(pins[i], LOW);
				}
			}		
		}
	}
};