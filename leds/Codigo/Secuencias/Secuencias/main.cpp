#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA =0xFF;
	int dato =0;
	
	while (1)
	{
	int salida =0;
		while(1)
		{
			PORTA= dato;
			_delay_ms(500);
            dato = pow(2,salida);
			salida = salida+1;
			if (salida>8){break;}
		
			
			if (salida==0xFF){break;}
		
	    }
	}
	return 0;
}


