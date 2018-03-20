#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

//Poner el compilador en modo 1999 desde settings

int main()
{
    int num1;
    float num2;
    float suma;
    char letra;

    printf("Ingrese el numero1: ");
    scanf("%d",&num1);
    printf("\nIngrese el numero2: ");
    scanf("%f",&num2);
    suma = num1 + num2;
    printf("\nLa suma de %d y %2.f es: %2.f",num1,num2,suma);
    printf("\n");
    printf("\nIngrese una letra: ");
    fflush(stdin); //borra el buffer
    scanf("%c",&letra);
    printf("\nLa letra es: %c",letra);
    printf("\n");
    printf("\nIngrese otra letra: ");
    letra = getche(); // No pide el enter, getchar() pide el enter por eso hay que usar el fflush
    printf("\n");
    printf("\nLa letra es: %c",letra);
    printf("\n");
    printf("\nIngrese otra letra: ");
    letra = getch(); //No muestra la letra
    printf("\n");
    printf("\nLa letra es: %c",letra);
    printf("\n");
    letra = toupper(letra); //Convierte una letra en mayuscula, tolower a minuscula
    printf("\nLa letra en mayuscula es: %c",letra);
    printf("\n");

    return 0;
}
