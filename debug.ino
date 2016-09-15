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


