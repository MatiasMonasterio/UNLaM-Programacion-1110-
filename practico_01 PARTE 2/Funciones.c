#include <stdio.h>
#include "Funciones.h"

// FUNCIONES AUXILIARES INTERNAS
void sumarDiaAux( tFecha *f, unsigned int limit );
void sumarDiasAux( tFecha *f, unsigned int *dias, unsigned int limit );
void restarDiasAux( tFecha *f, unsigned int *dias, int reiniciarDia );
void getDiaSemana( tFecha *f1, unsigned int *diaSemana );


// EJERCICIO N14
int fechaValida( tFecha *fecha ){
    if( fecha->mes > 12 ) { return 0; }

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
/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

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
            sumarDiaAux( fecha, 31 );
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            sumarDiaAux( fecha, 30 );
            break;
        case 2:
            if( fecha->anio % 4 == 0 && ( fecha->anio % 100 != 0 || fecha->anio % 400 == 0 ) ){
                sumarDiaAux( fecha, 29 );
            }
            else{
                sumarDiaAux( fecha, 28 );
            }
    }
}

void sumarDiaAux( tFecha *f, unsigned int limit ){
    if( f->dia == limit ){
        if( f->mes == 12 ){
            f->anio++;
            f->mes = 1;
            f->dia = 1;
        }
        else{
            f->mes++;
            f->dia = 1;
        }
    }
    else{ f->dia++; }
}

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

// EJERCICIO N16
void sumarDias( tFecha *f, unsigned int sumDias ){

    while( sumDias ){
        switch( f->mes ){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                sumarDiasAux( f, &sumDias, 31 );
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                sumarDiasAux( f, &sumDias, 30 );
                break;
            case 2:
                if( f->anio % 4 == 0 && ( f->anio % 100 != 0 || f->anio % 400 == 0 ) ){
                    sumarDiasAux( f, &sumDias, 29 );
                }
                else{
                    sumarDiasAux( f, &sumDias, 28 );
                }
                break;
        }

    }
}

void sumarDiasAux( tFecha *f, unsigned int *dias, unsigned int limit ){
    if( f->dia + *dias > limit ){
        if( f->mes == 12 ){
            f->anio++;
            f->mes = 1;
            f->dia = 1;
            *dias = ( f->dia + *dias ) - limit - 1 ;
        }
        else{
            f->mes++;
            f->dia = 1;
            *dias = ( f->dia + *dias ) - limit - 1 ;
        }
    }
    else{
        f->dia += *dias;
        *dias = 0;
    }
}

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

// EJERCICIO 17
void restarDias( tFecha *f, unsigned int cantDias ){
    while( cantDias ){

        switch( f->mes ){
            case 1:
            case 2:
            case 4:
            case 6:
            case 8:
            case 9:
            case 11:
                restarDiasAux( f, &cantDias, 31);
                break;

            case 5:
            case 7:
            case 10:
            case 12:
                restarDiasAux( f, &cantDias, 30);
                break;
            case 3:
                if( f->anio % 4 == 0 && ( f->anio % 100 != 0 || f->anio % 400 == 0 ) ){
                    restarDiasAux( f, &cantDias, 29);
                }
                else{
                    restarDiasAux( f, &cantDias, 28);
                }
                break;
        }
    }
}

void restarDiasAux( tFecha *f, unsigned int *dias, int reiniciarDia ){
    if( (f->dia - *dias) < 1 ){
        if( f->mes == 1){
            *dias -= f->dia;
            f->anio--;
            f->mes = 12;
            f->dia = reiniciarDia;
        }
        else{
            *dias -= f->dia;
            f->mes--;
            f->dia = reiniciarDia;
        }
    }
    else{
        f->dia -= *dias;
        *dias = 0;
        }
}


/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

// EJERCICIO 18
void diferenciaDias ( tFecha *f1, tFecha *f2, int *totalDias ){
    int sumadorDias = 0;
    sumadorDias += f1->anio* 365;
}

/*
    POSIBLE SOLUCION: Calcular la cantidadas de dias transcurridos desde el dia 0 a la fecha ingresa y restasla para obtener la diferencia.
    Para esto necesito determinar cuantos años bisiestos existieron desde el comienzo al año definido - 1 para multiplicar por 135 los que no son y por 136 los que son
    Para los dias de los meses un for que recorra de enero al mes anterior al ingresado. Segun el indice sumar 30 o 31. Saber si el año actual es biciesto para sumar 28 o 29 en febrero
    Dias no hay que hacer nada
    Obtengo el total de dias de las dos fechas, los resto y devuelvo
    PROBLEMA PRINCIPAL, OBTENER CUANTOS AÑOS BISIESTO EXISTIERON DESDE EL INICIO A LA ACTUALIDAD
*/

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

// EJERCICIO 19
void getDiaSemana( tFecha *f1, unsigned int *diaSemana ){

}

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/


// EJERCICIO 21
int parteEntera( float *numero ){
    return *numero;
}

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

// EJERCICIO 22
/* Se puede optimizar mas, todavía no lo pense mucho */
void insertarElemento( int *vector, int elemento, unsigned int posicion ){
    int aux1, aux2;

    do{
        posicion--;

        if( posicion == 0 ){
            aux1 = *vector;
            *vector = elemento;
        }
        else if( aux1 ){
            aux2 = *vector;
            *vector = aux1;
            aux1 = aux2;
        }

        vector++;
    }while( *(vector-1) );
}

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

// EJERCICIO 23
void insertarElementoOrdenado( int *vector, int elemento ){
    int aux1, aux2;

    while( *vector ){

        if( *vector > elemento && !aux1 ){
            aux1 = *vector;
            *vector = elemento;
        }
        else if( aux1 ){
            aux2 = *vector;
            *vector = aux1;
            aux1 = aux2;
        }

        vector++;
    }

    *vector = aux1;
    *(vector + 1) = 0;
}

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

// EJERCICIO 24
void elimitarPosicion( int *vec, unsigned int posicion ){
    int iteracion = 1;

    while( *vec ){
        if( posicion <= iteracion ){ *vec = *(vec+1); }

        iteracion++;
        vec++;
    }
}

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

// EJERCICIO 25
void eliminarElementoUnico( int *vec, int elemento ){
    int flag = 0;

    while( *vec ){
        if( *vec == elemento || flag ){
            *vec = *(vec+1);
            flag = 1;
        }

        vec++;
    }
}

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

// EJERCICIO 26
void eliminarElementoRepetido( int *vec, int elemento ){
    int index = 1;
    int organizar = 0;

    while( *vec && *(vec + index) ){

        if( organizar ){
            *vec = *(vec + index );
        }

        if( *vec == elemento ){

            while( *vec == elemento ){
            *vec = *(vec + index );
            printf("Valor vector: %i\n", *vec );
            index++;
            organizar = 1;
            }

            index--;
        }

        vec++;
    }

    *vec = 0;
}

/*====================================================================================================================================================*/
/*====================================================================================================================================================*/

void devolverValorNumericoASCII( char *vec ){
    /*
    Problema de interpretacion, si uso punteros el vector originalmente es un char por lo que solo puedo asignarle valores char
     En el caso que quier devolver el numero en char necesito dos varibles  porque solo tengo del 0 al 9 y los char de letras tiene dos digitos
    */
}
