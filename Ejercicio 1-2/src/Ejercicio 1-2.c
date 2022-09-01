/*******************************************************************************
 Marcos Cruz Rodriguez, Div D
 Ejercicio 1-2

 Ingresar 3 números y mostrar cuál de los tres es el mayor.
 Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números
 es el segundo: 9”
 *******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
    int numeroUno;
    int numeroDos;
    int numeroTres;

    printf("Ingrese su primer número");
    scanf("%d", &numeroUno);

    printf("Ingrese su segundo número");
    scanf("%d", &numeroDos);

    printf("Ingrese su tercer número");
    scanf("%d", &numeroTres);

    if(numeroUno > numeroDos && numeroUno > numeroTres) {
        printf("El mayor de los números es el primero: %d", numeroUno);
    }
    else {
        if(numeroDos > numeroTres) {
            printf("El mayor de los números es el segundo: %d", numeroDos);
        }
        else {
            printf("El mayor de los números es el tercer: %d", numeroTres);
        }
    }

    return 0;
}
