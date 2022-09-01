/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 2-2

 Ingresar números enteros, hasta que el usuario pida. Mostrar:
 a) El promedio de los positivos y su mínimo.
 b) El promedio de los negativos y su máximo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numeroIngresado;
	int respuesta;

	int acumuladorPositivos;
	int acumuladorNegativos;
	int contadorPositivos;
	int contadorNegativos;
	int numeroMinimoPositivo;
	int numeroMaximoNegativo;
	float promedioPositivos;
	float promedioNegativos;

	respuesta = 1;
	acumuladorPositivos = 0;
	acumuladorNegativos = 0;
	contadorPositivos = 0;
	contadorNegativos = 0;

	while(respuesta == 1)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);

		if(numeroIngresado > -1)
		{
			contadorPositivos++;
			acumuladorPositivos += numeroIngresado;
			if(numeroIngresado < numeroMinimoPositivo || contadorPositivos == 1)
			{
				numeroMinimoPositivo = numeroIngresado;
			}
		}
		else
		{
			contadorNegativos++;
			acumuladorNegativos += numeroIngresado;
			if(numeroIngresado > numeroMaximoNegativo || contadorNegativos == 1)
			{
				numeroMaximoNegativo = numeroIngresado;
			}
		}

		printf("Desea seguir ingresando numeros?\nEn ese caso ingrese el numero uno: ");
		scanf("%d", &respuesta);
	}
	promedioPositivos = (float)acumuladorPositivos / contadorPositivos;
	promedioNegativos = (float)acumuladorNegativos / contadorNegativos;

	if(contadorPositivos != 0)
	{
		printf("\nEl promedio de los positivos es: %.2f y su minimo: %d", promedioPositivos, numeroMinimoPositivo);
	}
	else
	{
		printf("\nNo hay numeros positivos");
	}

	if(contadorNegativos != 0)
	{
		printf("\nEl promedio de los negativos es: %.2f y su maximo: %d", promedioNegativos, numeroMaximoNegativo);
	}
	else
	{
		printf("\nNo hay numeros negativos");
	}

	return 0;
}
