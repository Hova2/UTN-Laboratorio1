#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    char datoS[50];
    int datosI;
    void *dato;
    EPersona listaPersona[TPERSONA];

    inisializarListaPersona(listaPersona);

    while(seguir=='s')
    {
        system("cls");
        fflush(stdin);

        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                if(leerString(datoS)){
                    printf("Es numero valido\n");
                }else{
                    printf("Es numero invalido\n");
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
        system("pause");
    }
    return 0;
}
