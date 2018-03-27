#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float leerNumero(void){

    float num;

    fflush(stdin);
    printf("Ingrese un numero: ");
    scanf("%f",&num);

    return num;
}

int esEntero(float num){
    if((num-(int)num)==0){
        return 1;
    }
    return 0;
}

void imprimirResultado(float result){
    if(esEntero(result)){
        printf("El resultado de la operacion es: %.0f\n",result);
    }else{
        printf("El resultado de la operacion es: %.2f\n",result);
    }
}

void imprimirError(int codigo){
     switch(codigo){
        case 1:
            printf("Se deben ingresar los 2 operadores!!!!\n");
            break;
        case 2:
            printf("Se deben ingresar el operador A!!!!\n");
            break;
        case 3:
            printf("Error de division por 0!!!!\n");
            break;
        case 4:
            printf("El numero a factorear debe ser entero!!!!\n");
            break;
     }
}

float funcionSuma(float num1, float num2){
    return num1+num2;
}

float funcionResta(float num1, float num2){
    return num1-num2;
}

float funcionMultiplicacion(float num1, float num2){
    return num1*num2;
}

float funcionDivision(float num1, float num2){
    return num1/num2;
}

float funcionFactorial(float num){
    if(num==0){
		return 1;
	}else{
		return num*funcionFactorial(num-1);
	}
}
