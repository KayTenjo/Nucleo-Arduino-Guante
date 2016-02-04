#include <GloveFunctions.h>
#include <GeneralFunctions.h>

int BAUD_RATE = 38400;
int functionCase;

void setup() {
 
 	Serial.begin(38400);

}

void loop() {

	while (Serial.available() > 0) {
		//Serial.println("datos disponibles");
	    functionCase = Serial.parseInt();
	    //Serial.println(functionCase);

	    switch (functionCase) {

	    	case 1:

	    		initializeMotor();
	    		break;

	    	case 2:
	          
	    		activateMotor();
	    		break;

	    	case 3:

	    		analogRead();
	    		break;

	    	case 4:

	    		digitalRead();
	    		break;

	    	case 5:

	    		initializeDigitalInputs();
	    		break;

	    	case 6:

	    		pinMode();
	    		break;

	    	case 7:

	    		digitalWrite();
	    		break;

	    	case 8:

	    		analogWrite();
	    		break;

	    	default:

	    	break;
	        
	    } 

	}
	   
}
