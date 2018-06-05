#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    return 0;
}

int parserEmployeeNuevo(FILE* pFile , Employee* listEmp, int tam){

    int auxPars=-1;

    pFile=fopen("./data.csv","r");

    if(pFile){
        char* var1=(char *)malloc(sizeof(char)*100);
        char* var2=(char *)malloc(sizeof(char)*100);
        char* var3=(char *)malloc(sizeof(char)*100);
        char* var4=(char *)malloc(sizeof(char)*100);
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);
        for(int i=0;i<tam || feof(pFile);i++){
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);
            puts(var1);
            puts(var2);
            puts(var3);
            puts(var4);
        }
    }
}

