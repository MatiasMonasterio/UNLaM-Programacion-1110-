#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "Typedef.h"

int fechaValida( tFecha *fecha );
void obtenerDiaSiguiente( tFecha *fecha );
void sumarDias( tFecha *f, unsigned int cantidadDias );
void restarDias( tFecha *f, unsigned int cantidadDias );
void diferenciaDias ( tFecha *f1, tFecha *f2, int *totalDias );

int parteEntera( float *numero );
void insertarElemento( int *vec, int elemento, unsigned int posicion );
void insertarElementoOrdenado( int *vec, int elemento );
void elimitarPosicion( int *vec, unsigned int posicion );
void eliminarElementoUnico( int *vec, int elemento );
void eliminarElementoRepetido( int *vec, int elemento );

void devolverValorNumericoASCII( char *vec );

#endif // FUNCIONES_H_INCLUDED
