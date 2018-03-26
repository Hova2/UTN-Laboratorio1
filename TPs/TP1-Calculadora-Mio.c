/*
 * calculadora.c
 *
 *  Created on: Mar 21, 2018
 *      Author: iguglielmone
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void dibujarCalculadora(void);
float funcionSumar(float num1, float num2);
float funcionRestar(float num1, float num2);
float funcionMultiplicar(float num1, float num2);
float funcionDividir(float num1, float num2);
float funcionFactorial(float num1);

void main(void){

	char opcion;
	float num1;
	float num2;

	do{
		system ("cls");
		fflush(stdin);
		dibujarCalculadora();
		opcion = getche();
		system ("cls");
		switch(opcion){
			case 48:
				printf("SUMAR\n");
				printf("\n");
				printf("Ingrese el numero 1: ");
				scanf("%f",&num1);
				printf("\nIngrese el numero 2: ");
				scanf("%f",&num2);
				printf("\nEl resultado de la suma es: %.2f",funcionSumar(num1,num2));
				printf("\n");
				getche();
				break;
			case 49:
				printf("RESTAR\n");
				printf("\n");
				printf("Ingrese el numero 1: ");
				scanf("%f",&num1);
				printf("\nIngrese el numero 2: ");
				scanf("%f",&num2);
				printf("\nEl resultado de la resta es: %.2f",funcionRestar(num1,num2));
				printf("\n");
				getche();
				break;
			case 50:
				printf("MULTIPLICAR\n");
				printf("\n");
				printf("Ingrese el numero 1: ");
				scanf("%f",&num1);
				printf("\nIngrese el numero 2: ");
				scanf("%f",&num2);
				printf("\nEl resultado de la multiplicacion es: %.2f",funcionMultiplicar(num1,num2));
				printf("\n");
				getche();
				break;
			case 51:
				printf("DIVIDIR\n");
				printf("\n");
				printf("Ingrese el dividendo: ");
				scanf("%f",&num1);
				printf("\nIngrese el divisor: ");
				scanf("%f",&num2);
				while(num2==0){
					printf("\nEl divisor no puede ser 0: ");
					scanf("%f",&num2);
				}
				printf("\nEl resultado de la division es: %.2f",funcionDividir(num1,num2));
				printf("\n");
				getche();
				break;
			case 52:
				printf("FACTORIAL\n");
				printf("\n");
				printf("Ingrese un numero: ");
				scanf("%f",&num1);
				printf("\nEl resultado del factorial: %.0f",funcionFactorial(num1));
				printf("\n");
				getche();
				break;
		}
		printf("\n");
	}while(opcion!=27);
}

void dibujarCalculadora(){
	printf("-----CALCULADORA-UTN-FRA-----\n");
	printf("\n");
	printf("-----------------------------\n");
	printf("|0-Suma----------|1-Resta---|\n");
	printf("|2-Multiplicacion|3-Division|\n");
	printf("|4-Factorial-----|----------|\n");
	printf("-----------------------------\n");
	printf("Presione ESC para salir\n");
	printf("\n");
	printf("Ingrese una opcion: ");
}

float funcionSumar(float num1, float num2){
	return num1+num2;
}

float funcionRestar(float num1, float num2){
	return num1-num2;
}

float funcionMultiplicar(float num1, float num2){
	return num1*num2;
}

float funcionDividir(float num1, float num2){
	return num1/num2;
}

float funcionFactorial(float num1){
	if(num1==0){
		return 1;
	}else{
		return num1*funcionFactorial(num1-1);
	}
}
