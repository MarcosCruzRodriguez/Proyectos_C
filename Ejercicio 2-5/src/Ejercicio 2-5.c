/*
 ============================================================================
 Marcos Cruz Roddriguez, Div D
 Ejercicio 2-5

 Debemos generar el pedido de libretas universitarias a la imprenta para los alumnos
 al regreso a la presencialidad. De cada persona debemos obtener los siguientes
 datos:
 número de legajo (4 cifras sin ceros a la derecha),
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad (más de 17),
 año de ingreso (validar por favor)
 y género ('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: El precio por libreta universitaria es de $450.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas mayores de 60 años.
 b) El legajo y edad de la mujer que ingreso hace más tiempo.
 c) Cuanto debe abonar la facultad por las libretas sin el descuento
 d) Si se solicitan mas de 5 libretas hay un 5% de descuento, si se solicitan más de
 10 libretas se hace 10%. Además, por cada alumno mayor de 60 años al valor original
 de la libreta se le hace un 25%. Informar los valores si corresponde.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //variable = tolower(variable);
#define LIBRETA 450

int main(void)
{
	setbuf(stdout, NULL);

	int respuesta;
	int numeroLegajo;
	char estadoCivil;
	int edad;
	int yearIngresado;
	char genero;

	int yearValido;
	int contadorMayores60;
	int mujerMayorIngreso;
	int contadorFemenino;
	int edadMayorIngreso;
	int legajoMayorIngreso;
	int acumuladorBruto;
	int contadorLibretas;
	int porcentaje;
	float sumaDescuentoMayores;
	float totalDescuento;
	float totalDescuentoMayores;

	respuesta = 1;
	contadorMayores60 = 0;
	contadorFemenino = 0;
	acumuladorBruto = 0;
	contadorLibretas = 0;
	totalDescuentoMayores = 0;

	while(respuesta)
	{
		printf("Ingrese los ultimos 4 digitos del legajo: ");
		scanf("%d", &numeroLegajo);
		while(numeroLegajo < 1000 || numeroLegajo > 9999)
		{
			printf("Reingrese los ultimos 4 digitos del legajo");
			scanf("%d", &numeroLegajo);
		}
		printf("Ingrese su estado civil: ");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		estadoCivil = tolower(estadoCivil);
		while(estadoCivil!='s' && estadoCivil!='c'&&estadoCivil!='v')
		{
			printf("Reingrese su estado civil: ");
			fflush(stdin);
			scanf("%c", &estadoCivil);
			estadoCivil = tolower(estadoCivil);
		}
		printf("Ingrese su edad: ");
		scanf("%d", &edad);
		while(edad < 18)
		{
			printf("Reingrese su edad: ");
			scanf("%d", &edad);
		}
		yearValido = 2022 - (edad - 18);

		printf("Año de ingreso: ");
		scanf("%d", &yearIngresado);
		while(yearIngresado < yearValido || yearIngresado > 2022)
		{
			printf("Error. Año de ingreso: ");
			scanf("%d", &yearIngresado);
		}
		printf("Ingrese un genero: ");
		fflush(stdin);
		scanf("%c", &genero);
		genero = tolower(genero);
		while(genero!='f' && genero!='m' && genero!='o')
		{
			printf("Reingrese un genero: ");
			fflush(stdin);
			scanf("%c", &genero);
			genero = tolower(genero);
		}

		if(edad > 60)
		{
			contadorMayores60++;
		}

		if(genero == 'f')
		{
			contadorFemenino++;
			if(yearIngresado > mujerMayorIngreso || contadorFemenino == 1)
			{
				mujerMayorIngreso = yearIngresado;
				edadMayorIngreso = edad;
				legajoMayorIngreso = numeroLegajo;
			}
		}

		contadorLibretas++;
		acumuladorBruto += LIBRETA;

		printf("Ingrese 1 en caso de continuar con el registro datos");
		scanf("%d", &respuesta);
	}

	printf("\nHay un total de %d mayoes de 60 años", contadorMayores60);
	printf("\nLa mujer que ingreso hace mas tiempo tiene %d años de edad, y su legajo es: %d", edadMayorIngreso,legajoMayorIngreso);
	printf("\nLa facultad debe de abonar un total de: %d", acumuladorBruto);

	if(contadorLibretas > 5)
	{
		porcentaje = -5;
	}
	else
	{
		if(contadorLibretas > 10)
		{
			porcentaje = -10;
		}
		else
		{
			porcentaje = 0;
		}
	}

	if(contadorMayores60 != 0)
	{
		sumaDescuentoMayores = (LIBRETA * contadorMayores60) * 0.75;
		totalDescuento = LIBRETA * (contadorLibretas - contadorMayores60);
		totalDescuento = totalDescuento + (totalDescuento * porcentaje) / 100;
		totalDescuentoMayores += sumaDescuentoMayores;
		printf("\nEl total con descuento incluyendo mayores de 60 años es de: %.2f", totalDescuentoMayores);
	}
	else
	{
		totalDescuento = acumuladorBruto + (acumuladorBruto * porcentaje) / 100;
		printf("\nEl total con descuento sin el ingreso de mayores de 60 años es de: %.2f", totalDescuento);
	}

	return 0;
}
