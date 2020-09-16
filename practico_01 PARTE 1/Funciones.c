#include "Funciones.h"
#include "math.h"
#include <stdio.h>
#include <stdbool.h>
#include "Typedef.h"

// EJERCICIO N1
unsigned long long factorial( unsigned int x ){
    unsigned long long resultado = 1;
    int i;

    for( i = x ; i > 1 ; i-- ){ resultado *= i; }
    return resultado;
}


// EJERCICIO N2
unsigned int combinatoria ( unsigned int m, unsigned int n ){
    unsigned long long divisor, dividendo;

    divisor = factorial( m );
    dividendo = ( factorial( n )*factorial( m - n ) );

    return divisor / dividendo;
}


// EJERCIOCIO N3
float calcularExponencial ( float x, double tol ){
    float valorExponencial, valorComparar, diferencia;
    int i;

    valorExponencial = 1;
    i = 1;

    do{
        valorComparar = valorExponencial;
        valorExponencial += ( (pow( x, i ) / factorial( i )) );
        i++;

        diferencia = valorExponencial - valorComparar;
        if( diferencia < 0 ) diferencia *= -1;

    }while( diferencia > tol );

    return valorExponencial;
}

//EJERCIOCIO N4
float calcularRaiz ( float a, float tol ){
    float raiz, raizAnterior, diferencia;
    raiz = 1;

    if( a == 0 ) return 0;

    do{
        raizAnterior = raiz;
        raiz = ( 0.5 ) * ( raizAnterior + ( a / raizAnterior ) );
        diferencia = raiz - raizAnterior;

        if( diferencia < 0 ) diferencia *= (-1);
    }while( diferencia > tol );

    return raiz;
}

//EJERCICIO N5
bool perteneceFibonacci ( unsigned int x ){
    int valor1, valor2, cambio;
    valor1 = 1;
    valor2 = 1;

    while( !( x <= valor2 ) ){
        cambio = valor2;
        valor2 = valor1 + valor2;
        valor1 = cambio;
    }

    if( x < valor2 ) { return false; }

    return true;
}


// EJERCICIO N6
float calcularSeno( float x, float tol ) {
    float seno, valorAnterior, diferencia;
    int i = 2, exp;

    exp = 3;
    seno = x - ( pow( x, exp )/ factorial( exp ) );

    do{
        exp += 2;
        valorAnterior = seno;

        if( (i % 2) == 0 ) {seno +=  ( pow( x, exp )/ factorial( exp ) );}
        else { seno -= ( pow( x, exp )/ factorial( exp ) ); }

        i++;

        diferencia = seno - valorAnterior;
        if( diferencia < 0 ) diferencia *= -1;

    }while( diferencia > tol );

    return seno;
}


// EJERCICIO N7
int definirNumero( unsigned int x ) {
    int sumaDivisores, i;
    sumaDivisores = 0;
    i = 1;

    for( i ; i<= ( x/2 ); i++ ){
        if( x%i == 0 ) sumaDivisores += i;
    }

    if ( sumaDivisores == x ) return 1;
    if ( sumaDivisores < x ) return 2;
    if ( sumaDivisores > x ) return 3;
}


// EJERCICIO N8
unsigned int producto( unsigned int a, unsigned int b ){
    int mayor, menor, producto, i;
    producto = 0;

    if( a >= b ) {
            mayor = a;
            menor = b;
    }
    if( b > a ) {
        mayor = b;
        menor = a;
    }

    for( i = 1; i <= menor; i++  ){
        producto += mayor;
    }

    return producto;
}


// EJERCICIO N9
int * division( int a, int b ){
    float respuesta[2];
    int cociente;
    float resto;

    cociente = a / b;
    resto = cociente - ( a / b );

    respuesta[0] = cociente;
    respuesta[1] = resto;

    return respuesta;
}


// EJERCICIO N10
unsigned int sumaNaturales( unsigned int x ) {
    int resultado, i;
    resultado = 0;

    for( i = 1; i <= x; i++ ){
        resultado += i;
    }

    return resultado;
}


//EJERCICIO N11
unsigned int sumaNaturalesPares( unsigned int x ){
    int resultado, i;
    resultado = 0;

    for( i = 0; i <= x; i += 2 ){
        resultado += i;
    }

    return resultado;
}

// EJERCIOCIO N12
unsigned int sumarNaturalesPares2( unsigned int x ){
    int resultado, i;
    resultado = 0;

    for( i = 0; i < x; i += 2 ){
        resultado += i;
    }

    return resultado;
}

// EJERCICIO N13
bool primo( unsigned int x ){
    int i = 2;
    bool respuesta = true;

    do{
        if( x%i == 0 ) { respuesta = false; }
        i++;
    }while( respuesta == true && i < x );

    return respuesta;
}

//=======================================================================================================================================================//

// EJERCICIO N14
int fechaValida( tFecha *fecha ){
    if( fecha->mes > 12 ) {return 0;}

    switch( fecha->mes ){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if( fecha->dia > 31 ) return 0;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if( fecha->dia > 30 ) return 0;
            break;
        case 2:
            if( fecha->anio % 4 == 0 && ( fecha->anio % 100 != 0 || fecha->anio % 400 == 0 ) ){
                if( fecha->dia > 29 ) { return 0; }
            }
            else{
                if( fecha->dia > 28 ) { return 0; }
            }
    }

    return 1;
}

// EJERCICIO N15
void obtenerDiaSiguiente( tFecha *fecha ){

    switch( fecha->mes ){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if( fecha->dia + 1 > 31 ){
                if( fecha->mes + 1 > 12 ){
                        fecha->anio++;
                        fecha->mes = 1;
                        fecha->dia = 1;
                }
                else{
                        fecha->mes++;
                        fecha->dia = 1;
                }
            }
            else{ fecha->dia++; }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if( fecha->dia + 1 > 30 ){
                        fecha->mes++;
                        fecha->dia = 1;
            }
            else{ fecha->dia++; }
            break;
        case 2:
            if( fecha->anio % 4 == 0 && ( fecha->anio % 100 != 0 || fecha->anio % 400 == 0 ) ){
                if( fecha->dia + 1 > 29 ){
                        fecha->mes++;
                        fecha->dia = 1;
                }
                else{ fecha->dia ++; }
            }
            else{
                if( fecha->dia + 1 > 28 ){
                        fecha->mes++;
                        fecha->dia = 1;
                }
                else{ fecha->dia++; }
            }
    }
}


// EJERCICIO N16

