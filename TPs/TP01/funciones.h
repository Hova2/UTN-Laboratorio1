#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

float leerNumero(void);
float funcionSuma(float,float);
float funcionResta(float,float);
float funcionMultiplicacion(float,float);
float funcionDivision(float,float);
float funcionFactorial(float);
char esEntero(float);
void imprimirResultado(int,float);
void imprimirError(int);
void existenOperandos(char,char,int,float,float);
void existeDivision(float,float);
void existeFactorial(char,float);

#endif // FUNCIONES_H_INCLUDED
