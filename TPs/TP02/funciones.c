#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int obtenerEspacioLibre(EPersona lista[]){
    int indice=0;

    while(lista[indice++].estado && indice<=TPERSONA);

    return indice-1;
}

void inisializarListaPersona(EPersona lista[]){
    int indice=0;

    while(!(lista[indice++].estado=0) && indice<TPERSONA);
}

void agregarPersona(EPersona lista[]){
    int indice=obtenerEspacioLibre(lista);

}

char *leerString(char *dato){

    fflush(stdin);
    gets(dato);

    for(int i=0;i<TDATO && dato[i]!='\0';i++ ){
        if (!(dato[i] >= 'A' && dato[i] <= 'Z' || dato[i] >= 'a' && dato[i] <= 'z')){
            dato=NULL;
            break;
        }
    }

    return dato;
}

int *leerInt(int *dato){

    fflush(stdin);
    gets(dato);

    for(int i=0;i<TDATO && dato[i]!='\0';i++ ){
        if (!(dato[i] >= '0' && dato[i] <= '9')){
            dato=NULL;
            break;
        }
    }

    return &(atoi(dato));

}
