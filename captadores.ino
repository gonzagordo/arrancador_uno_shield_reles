
void configura_captadores(){
	pinMode(pulsador_arranque,INPUT_PULLUP);
	pinMode(pulsador_paro,INPUT_PULLUP);
	pinMode(pulsador_gas,INPUT_PULLUP);
	pinMode(selector_auto,INPUT_PULLUP);
	pinMode(rele_220,INPUT_PULLUP);
	pinMode(contacto_activacion,INPUT_PULLUP);
	
	
	}
	 
// las entradas son pullup por lo que al pulsar se detecta un cero para simplificar invierto  
boolean captador(int elegida){
	boolean estado= false;
	if (digitalRead(elegida)==0){
		Serial.print( "pulsada la = " );    //debug
		Serial.println(elegida);			//debug
		estado=true;
		}
	return estado;
	}

