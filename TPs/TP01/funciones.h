#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

float leerNumero(void);
void funcionSuma(char x,char y,float num1,float num2);
void funcionResta(char x,char y,float num1,float num2);
void funcionMultiplicacion(char x,char y,float num1,float num2);
void funcionDivision(char x,char y,float num1,float num2);
void funcionFactorial(char x,float num);
float factorial(float num);
int numerosCargados(char x,char y);
int esEntero(float num);
void imprimirResultado(float result);
void imprimirErrores(int codigo);

#endif // FUNCIONES_H_INCLUDED
