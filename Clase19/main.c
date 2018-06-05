#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include "Parser.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main(){

    Employee* auxEmpleado;
    auxEmpleado=(Employee*)malloc(sizeof(Employee)*10);

    FILE* pArch;

    parserEmployeeNuevo(pArch,auxEmpleado,10);

    /*ArrayList* listaEmpleados=al_newArrayList();
    ArrayList* listaEmpleados1=al_newArrayList();

    printf("Elementos: %d\n\n",al_len(listaEmpleados));

    Employee* miEmpleado;
    Employee* miEmpleado1;
    Employee* miEmpleado2;
    Employee* auxEmpleado;


    miEmpleado=employee_new();
    miEmpleado1=employee_new();
    miEmpleado2=employee_new();

    employee_setId(miEmpleado,7);
    strcpy(miEmpleado->name,"Juan");
    miEmpleado->isEmpty=1;
    strcpy(miEmpleado->lastName,"Yo");

    employee_setId(miEmpleado1,17);
    strcpy(miEmpleado1->name,"Juan1");
    miEmpleado1->isEmpty=1;
    strcpy(miEmpleado1->lastName,"Yo1");

    al_add(listaEmpleados,miEmpleado);
    al_add(listaEmpleados,miEmpleado1);

    int tam=al_len(listaEmpleados);

    printf("Elementos: %d\n\n",tam);

    for(int i=0;i<tam;i++){
        auxEmpleado=(Employee*) al_get(listaEmpleados,i);
        employee_print(auxEmpleado);
    }

    /*al_deleteArrayList(listaEmpleados);
    listaEmpleados=NULL;*/

    /*printf("\n\n");
    printf("Direccion: %p\n\n",listaEmpleados);
    al_deleteArrayList(listaEmpleados);
    printf("Direccion: %p\n\n",listaEmpleados);*/

    /*for(int i=0;i<tam;i++){
        auxEmpleado=(Employee*) al_get(listaEmpleados,i);
        employee_print(auxEmpleado);
    }*/

   /*



    listaEmpleados=al_newArrayList();



    printf("Elementos: %d\n\n",al_len(listaEmpleados));

    int tam=al_len(listaEmpleados);

    */

    return 0;
}

