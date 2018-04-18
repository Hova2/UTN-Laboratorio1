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

void *leerDato(int tipo){
    char dato[TDATO];
    void *pDato;

    fflush(stdin);
    gets(dato);
    switch (tipo){
        case 1:
                pDato=dato;
                while (*(char *)pDato++){
                    if (!isalpha(*(char *)pDato) && *(char *)pDato!='\0'){
                        pDato=NULL;
                        break;
                    }
                }
                break;
        case 2:
                pDato=malloc(sizeof(int));
                if(!(*(int *)pDato=atoi(dato))){
                    pDato=NULL;
                }
                break;

    }

    return pDato;
}
