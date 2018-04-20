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
    int i=0;

    fflush(stdin);
    gets(dato);
    if(!(strlen(dato)>TDATO)){
        do{
            if (!(*dato++ >= 'A' && *dato++ <= 'Z' || *dato++ >= 'a' && *dato++ <= 'z')){
                dato=NULL;
                break;
            }
        }while(*dato++!='\0' && i++<TDATO-1);
    }else{
        dato=NULL;
    }

    return dato;
}

char *leerInt(char *dato){
    int i=0;

    fflush(stdin);
    gets(dato);
    if(!(strlen(dato)>TDATO)){
        do{
            if (!(*dato++ >= '0' && *dato++ <= '9')){
                dato=NULL;
                break;
            }
        }while(*dato++!='\0' && i++<TDATO-1);
    }else{
        dato=NULL;
    }

    return dato;
}

char *leerDouble(char *dato){
    int i=0;

    fflush(stdin);
    gets(dato);
    if(!(strlen(dato)>TDATO)){
        do{
            if (!(*dato >= '0' && *dato <= '9') && *dato!='.'){
                dato=NULL;
                break;
            }
        }while(*dato++!='\0' && i++<TDATO-1);
    }else{
        dato=NULL;
    }
    return dato;

}
