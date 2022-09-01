/******************************************************************************
 Marcos Cruz Rodriguez, Div D
 Ejercicio 1-1

 Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
 resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
 da como resultado 5”
 *******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese un numero");
    scanf("%d" , &numeroUno);

    while(numeroUno < -50 || numeroUno > 100)
    {
        printf("Reingrese un numero entre -50 y 100");
        scanf("%d" , &numeroUno);

    }

    printf("Ingrese un numero");
    scanf("%d" , &numeroDos);

    while(numeroDos < -50 || numeroDos > 100)
    {
        printf("Reingrese un numero entre -50 y 100");
        scanf("%d" , &numeroDos);

    }

    suma = numeroUno + numeroDos;

    printf("La suma entre %d, y %d, da como resultado: %d" ,numeroUno, numeroDos, suma);

    return 0;
}
