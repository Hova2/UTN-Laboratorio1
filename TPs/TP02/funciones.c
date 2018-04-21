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

char *leerValidarDato(char *dato,char tipo){

    fflush(stdin);
    gets(dato);
    if(!(strlen(dato)>TDATO)){
        do{
            switch(tipo){

            case 1:
                if (!(*dato >= 'A' && *dato <= 'Z' || *dato >= 'a' && *dato <= 'z')){
                    dato=NULL;
                }
                break;
            case 2:
                if (!(*dato >= '0' && *dato <= '9')){
                    dato=NULL;
                }
                break;
            case 3:
                if (!(*dato >= '0' && *dato <= '9') && *dato!='.'){
                    dato=NULL;
                }
                break;
            }
            if(dato==NULL){
                break;
            }
        }while(*++dato!='\0');
    }else{
        dato=NULL;
    }

    return dato;
}
