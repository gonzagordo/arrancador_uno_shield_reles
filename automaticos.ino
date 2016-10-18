//funciones que controlan las acciones automaticas

bool parada_confirmada()
	{
	bool estado = false;
	
	if ( captador(rele_220) ) temporizador_parada++;
	else temporizador_parada=0;
	
	if (temporizador_parada>=tiempo_parada) 
		{
		temporizador_parada=tiempo_parada;
		estado=true;
		}
	return estado;
	}

bool paro_automatico(){
	bool estado = false;
	if (captador(selector_auto) && !captador(contacto_activacion) && !parada_confirmada() )
		{
		Serial.println( "paro automatico" );    //debug
		estado = true;
		}
	return estado;
}


bool gas_automatico(){
	bool estado = false;
	return estado;
	}


bool arranque_automatico(){
	bool estado = false;
	return estado;
	}
	
	
