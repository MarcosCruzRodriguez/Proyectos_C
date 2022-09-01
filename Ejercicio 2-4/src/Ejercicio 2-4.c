/*
 ============================================================================
 Marcos Cruz Roddriguez, Div D
 Ejercicio 2-4

 Ingresar 8 números enteros, distintos de cero. Mostrar:
 a. El menor número ingresado.
 b. De los pares el mayor número ingresado.
 c. Producto de los negativos.
 d. En qué lugar fue ingresado el mayor numero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int i;
	int numeroIngresado;
	int numeroMinimo;
	int numeroParMaximo;
	int banderaParMaxima;
	int productoNegativos;
	int numeroMaximo;
	int posicionMaxima;

	banderaParMaxima = 1;
	productoNegativos = 1;

	for(i = 0; i < 8; i++)
	{
		printf("Ingrese un numero distinto de 0: ");
		scanf("%d", &numeroIngresado);
		while(numeroIngresado == 0)
		{
			printf("Reingrese un numero distinto de 0: ");
			scanf("%d", &numeroIngresado);
		}

		if(numeroIngresado < numeroMinimo || i == 0)
		{
			numeroMinimo = numeroIngresado;
		}

		if(numeroIngresado > numeroMaximo || i == 0)
		{
			posicionMaxima = i;
			numeroMaximo = numeroIngresado;
		}

		if(numeroIngresado % 2 == 0)
		{
			if(numeroIngresado > numeroParMaximo || banderaParMaxima == 1)
			{
				numeroParMaximo = numeroIngresado;
				banderaParMaxima = 0;
			}
		}

		if(numeroIngresado < 0)
		{
			productoNegativos *= numeroIngresado;
		}
	}

	printf("\nEl menor numero ingresado es: %d", numeroMinimo);
	printf("\nEl numero par maximo ingresado es: %d", numeroParMaximo);
	printf("\nEl producto de los negativos es: %d", productoNegativos);
	printf("\nEl numero maximo: %d, fue ingresado en la vuelta : %d", numeroMaximo, posicionMaxima);

	return 0;
}
