/***************************************************************************
 Marcos Cruz Rodriguez, Div D
 Ejercicio 1-3

 Ingresar 3 números y mostrar el número del medio, sólo si existe. En
 caso de que no exista también informarlo.
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	int numero3;

	printf("Ingrese primer numero : ");
	scanf("%d",&numero1);

	printf("\nIngrese segundo numero : ");
	scanf("%d",&numero2);

	printf("\nIngrese tercer numero : ");
	scanf("%d",&numero3);

	if((numero1>numero2&&numero1<numero3)||(numero1<numero2&&numero1>numero3))
	{
		printf("El del medio es numero %d: ",numero1);
	}else
		{
			if((numero2>numero1&&numero2<numero3)||(numero2<numero1&&numero2>numero3))
			{
				printf("el del medio es numero %d",numero2);
			}else
				{
					if((numero3>numero1&&numero3<numero2)||(numero3<numero1&&numero3>numero2))
					{
						printf("el del medio es el numero %d",numero3);

					}else
						{
							printf("no hay numero en el medio");
						}
				}
		}

	return 0;
}
