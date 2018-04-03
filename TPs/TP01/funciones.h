/**
 * @file funciones.h
 * @author Juan Ignacio Guglielmone
 * @date 14/04/2018
 * @brief Archivo de funciones del TP01
 *
 * El archivo contiene la definiciond e todas las funciones del TP01.
 *
*/

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


/** @brief Leer numero.
 *
 * Funcion que permite leer un numero desde la entrada estandar y devolverlo.
 * @return Devuelve un numero del tipo float.
 *
 */
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
