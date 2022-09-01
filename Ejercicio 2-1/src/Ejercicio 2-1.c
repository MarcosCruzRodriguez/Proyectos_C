/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 2-1

 Ingresar 7 números negativos distintos de 0 calcular y mostrar el
 promedio de los números. Probar la aplicación con distintos valores.
 Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
 Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int i;
	int numero;
	int acumulador;
	float promedio;

	acumulador = 0;

	for(i=0; i<7; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);
		while(numero > -1)
		{
			printf("Reingrese un numero: ");
			scanf("%d", &numero);
		}

		acumulador += numero;
	}

	promedio = (float)acumulador / i;

	printf("El promedio de los numeros negativos es: %.2f", promedio);

	return 0;
}
