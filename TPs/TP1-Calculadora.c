/*
 * calculadora.c
 *
 *  Created on: Mar 21, 2018
 *      Author: iguglielmone
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void dibujarcalculadora();
int funcionsumar(int num1, int num2);
int funcionrestar(int num1, int num2);
int funcionmultiplicar(int num1, int num2);
float funciondividir(int num1, int num2);
int funcionfactorial(int num1);

void main(){

	char opcion;
	int num1;
	int num2;

	do{
		system ("clear");
		fflush(stdin);
		dibujarcalculadora();
		scanf("%c",&opcion);
		system ("clear");
		switch(opcion){
			case 48:
				printf("Ingrese el numero 1: ");
				scanf("%d",&num1);
				printf("\nIngrese el numero 2: ");
				scanf("%d",&num2);
				printf("\nEl resultado de la suma es: %d",funcionsumar(num1,num2));
				printf("\n");
				sleep(2);
				break;
			case 49:
				printf("Ingrese el numero 1: ");
				scanf("%d",&num1);
				printf("\nIngrese el numero 2: ");
				scanf("%d",&num2);
				printf("\nEl resultado de la resta es: %d",funcionrestar(num1,num2));
				printf("\n");
				sleep(2);
				break;
			case 50:
				printf("Ingrese el numero 1: ");
				scanf("%d",&num1);
				printf("\nIngrese el numero 2: ");
				scanf("%d",&num2);
				printf("\nEl resultado de la multiplicacion es: %d",funcionmultiplicar(num1,num2));
				printf("\n");
				sleep(2);
				break;
			case 51:
				printf("Ingrese el dividendo: ");
				scanf("%d",&num1);
				printf("\nIngrese el divisor: ");
				scanf("%d",&num2);
				while(num2==0){
					printf("\nEl divisor no puede ser 0: ");
					scanf("%d",&num2);
				}
				printf("\nEl resultado de la division es: %2.2f",funciondividir(num1,num2));
				printf("\n");
				sleep(2);
				break;
			case 52:
				printf("Ingrese un numero: ");
				scanf("%d",&num1);
				printf("\nEl resultado del factorial: %d",funcionfactorial(num1));
				printf("\n");
				sleep(2);
				break;
		}
		printf("\n");
	}while(opcion!=27);
}

void dibujarcalculadora(){
	printf("-----------------------------\n");
	printf("|0-Suma----------|1-Resta---|\n");
	printf("|2-Multiplicacion|3-Division|\n");
	printf("|4-Factorial-----|----------|\n");
	printf("-----------------------------\n");
	printf("Presione ESC para salir\n");
	printf("\n");
	printf("Ingrese una opcion: ");
}

int funcionsumar(int num1, int num2){
	return num1+num2;
}

int funcionrestar(int num1, int num2){
	return num1-num2;
}

int funcionmultiplicar(int num1, int num2){
	return num1*num2;
}

float funciondividir(int num1, int num2){
	return (float)num1/(float)num2;
}

int funcionfactorial(int num1){
	if(num1==0){
		return 1;
	}else{
		return num1*funcionfactorial(num1-1);
	}
}
