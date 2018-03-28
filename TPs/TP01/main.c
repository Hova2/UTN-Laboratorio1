#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main(){

    char seguir='s';
    int opcion=0;
    char operando1=0;
    char operando2=0;
    float num1;
    float num2;

    while(seguir=='s'){
        system("cls");
        fflush(stdin);

        if(operando1){
            printf("1- Ingresar 1er operando (A=%.2f)\n",num1);
        }else{
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        if(operando2){
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
                operando1=1;
                break;
            case 2:
                num2=leerNumero();
                operando2=1;
                break;
            case 3:
                existenOperandos(operando1,operando2,3,num1,num2);
                getche();
                break;
            case 4:
                existenOperandos(operando1,operando2,4,num1,num2);
                getche();
                break;
            case 5:
                existenOperandos(operando1,operando2,5,num1,num2);
                getche();
                break;
            case 6:
                existenOperandos(operando1,operando2,6,num1,num2);
                getche();
                break;
            case 7:
                existenOperandos(operando1,operando2,7,num1,num2);
                getche();
                break;
            case 8:
                existenOperandos(operando1,operando2,8,num1,num2);
                getche();
                break;
            case 9:
                seguir='n';
                break;
        }
    }
    return 0;
}
