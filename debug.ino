void test_actuador(int elegido) 
{
on(elegido);
Serial.print( "enciendo la = " );
Serial.print(elegido);
delay(1000);
off(elegido);
Serial.println( "apago la = " );
Serial.print(elegido);
delay(1000);

}

void test_captador(int elegida){
	
	if (digitalRead(elegida)==0){
		Serial.print( "pulsada la = " );
		Serial.println(elegida);
		}
	}
