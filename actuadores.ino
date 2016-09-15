
void configura_actuadores(){
	pinMode(paro,OUTPUT);
	pinMode(marcha,OUTPUT);
	pinMode(seguridad,OUTPUT);
	pinMode(gas,OUTPUT);
	
	}

void on(int pin){
	digitalWrite(pin,HIGH);
	}

void off(int pin){
	digitalWrite(pin,LOW);
	}


