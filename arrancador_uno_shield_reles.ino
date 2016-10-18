//+++++++++arrancador con arduinouno y shield de reles 

// +++++++++++++++AKI VAN INCLUDES NECESARIOS+++++++++++++++++++++++++++++++++++
#include "configuracion.h"



void setup()
{
	//++++++++++++++++++++++++bloque de configuracion+++++++++++++++++++
 Serial.begin(9600);
 Serial.println( "prueba de captadores" );

configura_actuadores();
configura_captadores();
}

void loop() 
{
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//++++++++++++control del paro++++++++++++++++++++++++++++++++++++++
if ( captador(pulsador_paro) || paro_automatico() ){
	on(paro);		
	}
	
else {
	off(paro);
	}
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//++++++++++++control del gas+++++++++++++++++++++++++++++++++++++++
if ( !captador(pulsador_gas) ){
	on (seguridad);
	on (gas);
	}
else {
	off (seguridad);
	off (gas);
	
	}	

	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
if ( !captador(rele_220) && ( captador(pulsador_arranque) || arranque_automatico() ) ){
	on (marcha);
	}
	
else {
	off (marcha);
	}
	
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//++++++++++++control del arranque++++++++++++++++++++++++++++++++++
	

	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//retardo entre ciclos es la base de tiempos de las temporizaciones
	delay(10);
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
}

