#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* archivoWrite;
    FILE* archivoRead;

    int numeroWrite=128;
    int numeroRead;
    int numero;
    int listaNumero[5];
    int listaNumero2[5]={2,4,6,8,10};

    /*archivoWrite=fopen("archivo.txt","w");
    fwrite(listaNumero2,sizeof(int),5,archivoWrite);
    fclose(archivoWrite);

    archivoRead=fopen("archivo.txt","r");
    int i=0;
    while(!feof(archivoRead) && i<5){
        printf("Numero: ");
        fread(&listaNumero2[i],sizeof(int),1,archivoRead);
        printf("%d\n",listaNumero2[i]);
        i++;
    }
    fclose(archivoWrite);


    archivoWrite=fopen("archivo.txt","w");
    fwrite(&numeroWrite,sizeof(int),1,archivoWrite);
    fclose(archivoWrite);

    archivoRead=fopen("archivo.txt","r");
    fread(&numeroRead,sizeof(int),1,archivoRead);
    fclose(archivoRead);

    printf("%d\n",numeroRead);

    archivoWrite=fopen("archivo.txt","w");
    for(int i=0;i<5;i++){
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
        printf("\n");
        fwrite(&numero,sizeof(int),1,archivoWrite);
    }
    fclose(archivoWrite);

    archivoRead=fopen("archivo.txt","r");

    int i=0;
    while(!feof(archivoRead)){
        printf("Numero: ");
        fread(&listaNumero[i],sizeof(int),1,archivoRead);
        printf("%d\n",listaNumero[i]);
        i++;
    }
    fclose(archivoRead);*/

    archivoWrite=fopen("archivo.bin","wb");
    fwrite(&numeroWrite,sizeof(int),1,archivoWrite);
    fclose(archivoWrite);


    archivoRead=fopen("archivo.bin","rb");
    fread(&numeroRead,sizeof(int),1,archivoRead);
    printf("%d",numeroRead);
    fclose(archivoRead);



    return 0;
}
