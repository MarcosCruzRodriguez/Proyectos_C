/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 2-6

 Ingresar 5 caracteres e informar cuantas letras m (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	setbuf(stdout, NULL);

	int i;
	char caracter;
	int contadorM;

	contadorM = 0;

	for(i = 0; i < 5; i++)
	{
		printf("Ingrese un caracter: ");
		fflush(stdin);
		scanf("%c", &caracter);
		caracter = tolower(caracter);

		if(caracter == 'm')
		{
			contadorM++;
		}
	}

	printf("\nSe han ingresado %d letras m", contadorM);


	return 0;
}
