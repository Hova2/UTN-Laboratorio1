#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main(){

    char seguir='s';
    int opcion=0;
    char x='x';
    char y='y';
    float num1;
    float num2;

    while(seguir=='s'){
        system("cls");
        if(x=='x'){
            printf("1- Ingresar 1er operando (A=x)\n");
        }else{
            printf("1- Ingresar 1er operando (A=%.2f)\n",num1);
        }
        if(y=='y'){
            printf("2- Ingresar 2do operando (B=y)\n");
        }else{
            printf("2- Ingresar 2do operando (B=%.2f)\n",num2);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                num1=leerNumero();
                x='l';
                break;
            case 2:
                num2=leerNumero();
                y='l';
                break;
            case 3:
                funcionSuma(x,y,num1,num2);
                break;
            case 4:
                break;
            case 5:
                funcionDivision(x,y,num1,num2);
                break;
            case 6:
                break;
            case 7:
                funcionFactorial(x,num1);
                break;
            case 8:
                break;
            case 9:
                seguir='n';
                break;
        }
    }
    return 0;
}
float leerNumero(void){

    float num;

    fflush(stdin);
    printf("Ingrese un numero: ");
    scanf("%f",&num);

    return num;
}

int numeroCargado(char c){
    if(c=='l'){
        return 1;
    }
    return 0;
}

int esEntero(float num){
    if((num-(float)((int)num))==0){
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
    getche();
}

void imprimirErrores(int codigo){
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
     getche();
}

float factorial(float num){
	if(num==0){
		return 1;
	}else{
		return num*factorial(num-1);
	}
}

void funcionSuma(char x, char y, float num1, float num2){
    if(numeroCargado(x) && numeroCargado(y)){
        imprimirResultado(num1+num2);
    }else{
        imprimirErrores(1);
    }
}

void funcionDivision(char x, char y, float num1, float num2){
    if(numeroCargado(x) && numeroCargado(y)){
        if(num2!=0){
            imprimirResultado(num1/num2);
        }else{
            imprimirErrores(3);
        }
    }else{
        imprimirErrores(1);
    }
}

void funcionFactorial(char x, float num){
    if(numeroCargado(x)){
        if(esEntero(num)){
            imprimirResultado(factorial(num));
        }else{
            imprimirErrores(4);
        }
    }else{
        imprimirErrores(2);
    }
}
