#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

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

    ArrayList* listaEmpleados;
    Employee* miEmpleado;
    Employee* miEmpleado1;
    Employee* auxEmpleado;

    miEmpleado=employee_new();
    miEmpleado1=employee_new();

    employee_setId(miEmpleado,7);
    strcpy(miEmpleado->name,"Juan");
    miEmpleado->isEmpty=1;
    strcpy(miEmpleado->lastName,"Yo");

    employee_setId(miEmpleado1,17);
    strcpy(miEmpleado1->name,"Juan1");
    miEmpleado1->isEmpty=1;
    strcpy(miEmpleado1->lastName,"Yo1");

    listaEmpleados=al_newArrayList();

    printf("Elementos: %d\n\n",al_len(listaEmpleados));

    al_add(listaEmpleados,miEmpleado);
    al_add(listaEmpleados,miEmpleado1);

    printf("Elementos: %d\n\n",al_len(listaEmpleados));

    int tam=al_len(listaEmpleados);

    for(int i=0;i<tam;i++){

        auxEmpleado=(Employee*) al_get(listaEmpleados,i);
        employee_print(auxEmpleado);
    }

    return 0;
}