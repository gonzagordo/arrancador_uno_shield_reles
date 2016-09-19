//+++++++++arrancador con arduinouno y shield de reles 

// +++++++++++++++AKI VAN INCLUDES NECESARIOS+++++++++++++++++++++++++++++++++++


#define pulsador_arranque 13	//verde
#define pulsador_paro 12		//rojo
#define pulsador_gas  11		//blanco
#define selector_auto  10		//naranja_banco
#define rele_220  9				//marron_blanco
#define contacto_activacion  8	//azul

#define paro 7
#define marcha 6
#define seguridad 5
#define gas 4

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
	
	
	
}

