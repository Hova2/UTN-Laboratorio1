#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main(){

    char seguir='s';
    int opcion=0;
    char existeOperador1=0;
    char existeOperador2=0;
    float num1;
    float num2;

    while(seguir=='s'){
        system("cls");
        fflush(stdin);

        if(existeOperador1){
            printf("1- Ingresar 1er operando (A=%.2f)\n",num1);
        }else{
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        if(existeOperador2){
            printf("2- Ingresar 2do operando (B=%.2f)\n",num2);
        }else{
            printf("2- Ingresar 2do operando (B=y)\n");
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
                existeOperador1=1;
                break;
            case 2:
                num2=leerNumero();
                existeOperador2=1;
                break;
            case 3:
                if(existeOperador1 && existeOperador2){
                    imprimirResultado(funcionSuma(num1,num2));
                }else{
                    imprimirError(1);
                }
                getche();
                break;
            case 4:
                if(existeOperador1 && existeOperador2){
                    imprimirResultado(funcionResta(num1,num2));
                }else{
                    imprimirError(1);
                }
                getche();
                break;
            case 5:
                if(existeOperador1 && existeOperador2){
                    if(num2!=0){
                        imprimirResultado(funcionDivision(num1,num2));
                    }else{
                        imprimirError(3);
                    }
                }else{
                    imprimirError(1);
                }
                getche();
                break;
            case 6:
                if(existeOperador1 && existeOperador2){
                    imprimirResultado(funcionMultiplicacion(num1,num2));
                }else{
                    imprimirError(1);
                }
                getche();
                break;
            case 7:
                if(existeOperador1){
                    if(esEntero(num1)){
                        imprimirResultado(funcionFactorial(num1));
                    }else{
                        imprimirError(4);
                    }
                }else{
                    imprimirError(2);
                }
                getche();
                break;
            case 8:
                if(existeOperador1 && existeOperador2){
                    printf("Suma:\n");
                    imprimirResultado(funcionSuma(num1,num2));
                    printf("Resta:\n");
                    imprimirResultado(funcionResta(num1,num2));
                    printf("Division:\n");
                    if(num2!=0){
                        imprimirResultado(funcionDivision(num1,num2));
                    }else{
                        imprimirError(3);
                    }
                    printf("Multiplicacion:\n");
                    imprimirResultado(funcionMultiplicacion(num1,num2));
                }else{
                    imprimirError(1);
                }
                if(existeOperador1){
                        printf("Factorial:\n");
                        if(esEntero(num1)){
                            imprimirResultado(funcionFactorial(num1));
                        }else{
                            imprimirError(4);
                        }
                }else{
                    imprimirError(2);
                }
                getche();
                break;
            case 9:
                seguir='n';
                break;
        }
    }
    return 0;
}
