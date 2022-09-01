/*
 ================================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 2-3

 Usando el concepto de operadores lógicos booleanos en el condicional.
 Solicitar un número al usuario e informar si el número es par o impar.
 ================================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    setbuf(stdout, NULL);

    int numeroIngresado;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroIngresado);

    if(numeroIngresado % 2 == 0)
    {
        printf("El numero ingresado %d, es par", numeroIngresado);
    }
    else
    {
        printf("El numero ingresado %d, es impar", numeroIngresado);
    }

    return 0;
}
