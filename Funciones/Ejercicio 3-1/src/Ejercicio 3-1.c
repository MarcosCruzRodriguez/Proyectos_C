/*
 ============================================================================
 Marcos Cruz Roriguez, Div D
 Ejercicio 3-1 / funciones

 Crear una función que muestre por pantalla el número entero que
 recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarNumero (int numero);

int main(void)
{
	setbuf(stdout, NULL);
	int numeroIngresado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroIngresado);

	mostrarNumero(numeroIngresado);

	return 0;
}

void mostrarNumero (int numero)
{
	printf("\nEl numero ingresado es: %d", numero);
}
