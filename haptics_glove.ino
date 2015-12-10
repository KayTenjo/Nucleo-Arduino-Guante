#include <ActuatorsFunctions.h>
#include <SensorsFunctions.h>

int BAUD_RATE = 9600;
int functionCase;

void setup() {
 
 	Serial.begin(9600);
}

void loop() {

	while (Serial.available() > 0) {

	    functionCase = Serial.parseInt();
	    
	    switch (functionCase) {

	    	case 1:

	    		initializeActuators();
	    		break;

	    	case 2:
	          
	    		activateActuators();
	    		break;

	    	case 3:

	    		analogRead();
	    		break;

	    	default:

	    	break;
	        
	    } 

	}
	   
}
