#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "Typedef.h"

int fechaValida( tFecha *fecha );
void obtenerDiaSiguiente( tFecha *fecha );
void sumarDias( tFecha *f, unsigned int cantidadDias );
void restarDias( tFecha *f, unsigned int cantidadDias );
void diferenciaDias ( tFecha *f1, tFecha *f2, int *totalDias );

int parteEntera( float *numero );
void insertarElemento( int *vect, int elemento, unsigned int posicion );

#endif // FUNCIONES_H_INCLUDED
