/* UTN FRBA SSL - HelloWorld
 * Ejercicio1.4.c
 *
 * 2015 04 14
 * por Nicolas Gastiazoro
 *
 * Programa para transformar grados Celcius en grados Fahrenheit
 */

#include <stdio.h>

main()
{

float fahr,celsius;
int lower,upper,step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	
	while (celsius <= upper){
		fahr = ((9.0/5.0)*celsius) + 32.0;
		printf("%3.0f\t%6.2f\n",celsius,fahr);
		celsius = celsius + step;
	}
}
