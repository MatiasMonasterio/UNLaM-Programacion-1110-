#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "Typedef.h"
#include <stdbool.h>

unsigned long long factorial( unsigned int x );
unsigned int combinatoria ( unsigned int m, unsigned int n );
float calcularExponencial ( float x, double tol );
float calcularRaiz ( float x, float tol );
bool perteneceFibonacci ( unsigned int x );
float calcularSeno( float x, float tol );
int definirNumero( unsigned int x );
unsigned int producto( unsigned int a, unsigned int b );
unsigned int sumaNaturales( unsigned int x );
unsigned int sumaNaturalesPares( unsigned int x );
unsigned int sumarNaturalesPares2( unsigned int x );
bool primo( unsigned int x );


int fechaValida( tFecha *fecha );
void obtenerDiaSiguiente( tFecha *fecha );
void sumarDias( tFecha fecha, unsigned int cantidadDias );

#endif // FUNCIONES_H_INCLUDED
