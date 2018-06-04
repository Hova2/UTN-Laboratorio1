#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB){

    if(strcmp(((Employee *)pEmployeeA)->name,((Employee *)pEmployeeB)->name) && strcmp(((Employee *)pEmployeeA)->lastName,((Employee *)pEmployeeB)->lastName)){
        return 1;
    }
    return 0;
}


void employee_print(Employee* this){

    printf("El ID: %d\n",this->id);
    printf("El nombre: %s\n",this->name);
    printf("El apellido: %s\n",this->lastName);
}


Employee* employee_new(void){

    Employee* returnAux = (Employee*)malloc(sizeof(Employee));

    return returnAux;
}

void employee_delete(Employee* this){

    free(this);
}

int employee_setId(Employee* this, int id){

    this->id=id;

    return 0;
}

int employee_getId(Employee* this){

    return this->id;
}
