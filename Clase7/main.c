#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 5

int buscarLibre(int[],int);
float calcularPromedio(int,int);
int buscarLegajo(int[],int,int);

void main()
{
    int legajo[TAM]={}; // Inicializa todas las posiciones en 0.
    char nombre[TAM][21];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    int leg;
    do{
        fflush(stdin);
        system("cls");
        printf("1 - ALTAS\n");
        printf("2 - BAJAS\n");
        printf("3 - MODIFICACIONES\n");
        printf("4 - MOSTRAR\n");
        printf("9 - SALIR\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                index=buscarLibre(legajo,TAM);
                if(index!=-1){
                    printf("Ingrese legajo: ");
                    scanf("%d",&legajo[index]);
                    fflush(stdin);
                    printf("\nIngrese nombre: ");
                    gets(nombre[index]);
                    fflush(stdin);
                    printf("\nIngrese nota1: ");
                    scanf("%d",&nota1[index]);
                    fflush(stdin);
                    printf("\nIngrese nota2: ");
                    scanf("%d",&nota2[index]);
                    fflush(stdin);
                    promedio[index]=calcularPromedio(nota1[index],nota2[index]);
                }else{
                    printf("No hay mas espacio para guardar legajos!!!");
                    getche();
                }
                break;
            case 2:
                printf("Ingrese legajo: ");
                scanf("%d",&leg);
                fflush(stdin);
                index=buscarLegajo(legajo,TAM,leg);
                if(index!=-1){
                    legajo[index]=0;
                }else{
                    printf("Legajo no encontrado!!!");
                    getche();
                }
                break;
            case 3:
                printf("Ingrese legajo: ");
                scanf("%d",&leg);
                fflush(stdin);
                index=buscarLegajo(legajo,TAM,leg);
                if(index!=-1){
                    printf("\nLegajo N: %d",legajo[index]);
                    printf("\nModificar nombre: ");
                    gets(nombre[index]);
                    fflush(stdin);
                    printf("\nModificar nota1: ");
                    scanf("%d",&nota1[index]);
                    fflush(stdin);
                    printf("\nModificar nota2: ");
                    scanf("%d",&nota2[index]);
                    fflush(stdin);
                    promedio[index]=calcularPromedio(nota1[index],nota2[index]);

                }else{
                    printf("Legajo no encontrado!!!");
                    getche();
                }
                break;
            case 4:
                for(int i=0;i<TAM;i++){
                    if(legajo[i]!=0){
                        printf("\n---------------------");
                        printf("\nLegajo N: %d",legajo[i]);
                        printf("\nNombre: ");
                        puts(nombre[i]);
                        printf("Nota 1: %d",nota1[i]);
                        printf("\nNota 2: %d",nota2[i]);
                        printf("\nPromedio: %.1f",promedio[i]);
                    }
                }
                getche();
                break;
        }
    }while(opcion!=9);
}

int buscarLibre(int vec[],int tam){
    int index = -1;

    for(int i=0;i<tam;i++){
        if(vec[i]==0){
            index=i;
            break;
        }
    }

    return index;
}

float calcularPromedio(int nota1,int nota2){
    return ((float)(nota1+nota2))/2;
}

int buscarLegajo(int vec[],int tam,int legajo){
    for(int i=0;i<tam;i++){
        if(vec[i]==legajo){
            return i;
        }
    }
    return -1;
}

