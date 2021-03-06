/*
 * validaciones.h
 *
 *  Created on: 5 abr. 2022
 *      Author: Agostin
 */

#ifndef VALIDACIONES_H_
#define VALIDACIONES_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int validacionDosCaracteres (char* mensaje, char caracterUno, char caracterDos);
int validacionCaracter (char *mensaje, char caracter);

int compararCadenas (char* cadenaUno, char* cadenaDos, int len);
void toLowerCadena (char* cadena);
void toUpperCadena (char* cadena);

int utn_getString(char* charIngresado, char* mensaje, char* mensajeError, int len, int reintentos);
int utn_getNombre(char* charIngresado, char* mensaje, char* mensajeError, int len, int reintentos);
int utn_getDescripcion (char* charIngresado, char* mensaje, char* mensajeError, int len, int reintentos);
int utn_getDNI(int* pNumeroIngresado, char* mensaje, char* mensajeError, int len, int reintentos);
int utn_getCodigo(char* charIngresado, char* mensaje, char* mensajeError, int min, int max, int reintentos);

//Para Entero
int utn_getInt(int* pNumeroIngresado, char* mensaje, char* mensajeError, int min, int max, int reintentos);
int utn_getIntRange (int* pNumeroIngresado, char* mensaje, char* mensajeError, int min, int max);
int utn_getIntPositivo (int* pNumeroIngresado, char* mensaje, char* mensajeError);
int utn_getIntNegativo(int* pNumeroIngresado, char* mensaje, char* mensajeError);
int utn_getIntAlone (int* pNumeroIngresado, char* mensaje, char* mensajeError);

//Para Float
int utn_getFloat(float* pNumeroIngresado, char* mensaje, char* mensajeError, float min, float max, int reintentos);
int utn_getFloatPositivo (float* pNumeroIngresado, char* mensaje, char* mensajeError);
int utn_getFloatAlone(float* pNumeroIngresado, char* mensaje, char* mensajeError);

//Para double
int utn_getDouble(double* pNumeroIngresado, char* mensaje, char* mensajeError, double min, double max, int reintentos);
int utn_getDoubleAlone(double* pNumeroIngresado, char* mensaje, char* mensajeError);

void saltoDeLinea (void);
void presionarEnter (void);
void menu (void);
void menuInformes (void);

//funciones estaticas
int getInt (int* pNumeroIngresado);
int getFloat (float* pNumeroIngresado);
int getDouble (double* pNumeroIngresado);
int getString (char* pNombreIngresado, int len);
int getNombre (char* pNombreIngresado, int len);
int getDescripcion (char* pCadena, int len);
int getCodigo (char* pCadena, int len);
int getDNI (int* pNumeroIngresado);
int getIntFromStr (char* cadena, int* pNumeroIngresado);
int getFloatFromStr (char* cadena, float* pNumeroIngresado);
int esNumerica ( char * cadenaPosiblesNumeros);
int esFlotante ( char * cadenaPosiblesNumeros);
int esNombre ( char * cadena, int len);
int esCodigo ( char * cadena, int len);
int esDescripcion ( char * cadena, int len);

#endif /* VALIDACIONES_H_ */
