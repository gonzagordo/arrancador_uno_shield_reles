// este es el archivo de configuracion


// entradas				
#define pulsador_arranque 13	//verde
#define pulsador_paro 12		//rojo
#define pulsador_gas  11		//blanco
#define selector_auto  10		//naranja_banco
#define rele_220  9				//marron_blanco
#define contacto_activacion  8	//azul
//salidas
#define paro 7
#define marcha 6
#define seguridad 5
#define gas 4
//tiempos de funcionamiento tiempo =valor *10 milisegundos
int tiempo_parada=20;


//varibles auxiliares
int temporizador_parada = 0;
