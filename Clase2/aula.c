#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    int pares=0;
    int cantnumeros=0;
    int suma;
    int min;
    int max;
    int numero;

    printf("Ingrese numeros positivos, para terminar precione 0: ");
    scanf("%d",&numero);
    while(numero<=0){
        system ("cls");
        printf("Por favor, ingrese por lo menos 1 Nro posotivo: ");
        scanf("%d",&numero);
    }
    if((numero%2)==0){
        pares++;
    }
    min=numero;
    max=numero;
    suma=numero;
    cantnumeros++;

    do{
        system ("cls");
        printf("Ingrese numeros positivos, para terminar precione 0: ");
        scanf("%d", &numero);
        if(numero!=0){
            if(numero>0){
                if(min>numero){
                    min=numero;
                }else if(max<numero){
                    max=numero;
                }
                cantnumeros++;
                suma=suma+numero;
                if((numero%2)==0){
                    pares++;
                }
            }else{
                system ("cls");
                printf("Por favor, ingrese numeros positivos!!!!!");
            }
        }
    }while(numero!=0);

    system ("cls");
    printf("El promedio es: %f",(float)suma/cantnumeros);
    printf("\nLa cantidad de pares es: %d",pares);
    printf("\nEl minimo es: %d",min);
    printf("\nEl maximo es: %d",max);

    return 0;
}
