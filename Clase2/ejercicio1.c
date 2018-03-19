/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un número tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los máximos y mínimos
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){

	float acum=0;
	float min;
	float max;

	printf("Ingrese un N°: ");
	scanf("%f",&min);
	max = min;
	acum = min;
	for(int i=1;i<5;i++){
		float tmp;
		printf("\nIngrese un N°: ");
		scanf("%f",&tmp);
		acum = acum + tmp;
		if(min > tmp){
			min = tmp;
		}else if(max < tmp) {
			max = tmp;
		}
	}

	printf("\nEl promedio es igual a: %f",(acum/5));
	printf("\nEl N° minimo ingresado es: %f",min);
	printf("\nEl N° maximo ingresado es: %f\n",max);

	return EXIT_SUCCESS;
}
