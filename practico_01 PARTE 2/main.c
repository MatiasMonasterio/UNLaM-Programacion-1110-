#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    //testingEj14();
    //testingEj15();
    //testingEj16();
    //testingEj17();
    //testingEj21();
    //testingEj22();
    //testingEj23();
    //testingEj24();
    //testingEj25();
    testingEj26();

    return 0;
}

// PREGUNTAS!
/*
    01 - ¿Donde puedo definir bien el typedef para llevar un mejor orden y usarlo de forma global?
    02 - ¿Que tan malo es tener muchos return que corten la funcion? EJERCICIO 14
    03 - ¿Si hay codigo que se repite varias veces y no se optimiza ya te bocha?
    04 - ¿Como enviar un puntero a una funcion? Creo que es con el **nombreVariable, pero como hago la referencia del struct para el dato?
    05 - Ejercicio 22, asigne el valor por base y desplazamiento. La catedra dice que no podemos usarlo. Consultar si es un caso excepcional
    06 - Como recorrer un arreglo como puntero en el main, osea sin enviarlo a una funcion. ( No me deja usar el puntero++ )
    07 - Datos explicitos como posicion o elemento de un arreglo tambien hay que mandarlos como puntero o hardcodiado y dejando que ocupe un espacio en memoria dentro de la funcion no hay problema

*/



// TESTING
void testingEj14(){
    tFecha cumpleanio = { 29, 2, 3200 };
    if( fechaValida( &cumpleanio ) ){ printf("La fecha es valida\n"); }
    else{ printf("La fecha no es valida\n"); }

    tFecha fecha02 = { 15, 19, 2022 };
    if( fechaValida( &fecha02 ) ){ printf("La fecha es valida\n"); }
    else{ printf("La fecha no es valida\n"); }
}

void testingEj15(){
    tFecha fecha01 = { 29, 2, 2012 };
    obtenerDiaSiguiente( &fecha01 );
    printf("Maniana: %02d/%02d/%d\n", fecha01.dia, fecha01.mes, fecha01.anio );

    tFecha fecha02 = { 31, 12, 2020 };
    obtenerDiaSiguiente( &fecha02 );
    printf("Maniana: %02d/%02d/%d\n", fecha02.dia, fecha02.mes, fecha02.anio );
}

void testingEj16(){
    tFecha fecha01 = { 01, 12, 2020 };
    sumarDias( &fecha01, 500 );
    printf("Fecha: %02d/%02d/%d, Fecha esperada: 15/04/2022\n", fecha01.dia, fecha01.mes, fecha01.anio );

    tFecha fecha02 = { 01, 01, 2020 };
    sumarDias( &fecha02, 60 );
    printf("Fecha: %02d/%02d/%d, Fecha esperada: 01/03/2020\n", fecha02.dia, fecha02.mes, fecha02.anio );

    tFecha fecha03 = { 01, 01, 2000 };
    sumarDias( &fecha03, 7305 );
    printf("Fecha: %02d/%02d/%d, Fecha esperada: 01/01/2020\n", fecha03.dia, fecha03.mes, fecha03.anio );
}

void testingEj17(){
    tFecha fecha01 = { 01, 12, 2020 };
    restarDias( &fecha01, 200 );
    printf("Fecha: %02d/%02d/%d, Fecha esperada: 15/05/2020\n", fecha01.dia, fecha01.mes, fecha01.anio );

    tFecha fecha02 = { 01, 12, 2020 };
    restarDias( &fecha02, 999 );
    printf("Fecha: %02d/%02d/%d, Fecha esperada: 08/03/2018\n", fecha02.dia, fecha02.mes, fecha02.anio );
}

void testingEj21(){
    float numero01 = 0.1416;
    int resultado01 = parteEntera( &numero01 );
    printf("Resultado %i\n", resultado01 );

    float numero02 = 1.5;
    int resultado02 = parteEntera( &numero02 );
    printf("Resultado %i\n", resultado02 );

    float numero03 = -1000.008;
    int resultado03 = parteEntera( &numero03 );
    printf("Resultado %i\n", resultado03 );
}

void testingEj22(){
    /* La posicion y el indice son diferentes, posicion es indice - 1 */
    /* Que pasa si quiero agregar un elemento en una posicion mayor a la logitud del arreglo */
    int vect[] = { 1, 2, 3, 4, 5, 6 };
    insertarElemento( vect, 10, 2 );

    printf("Valor1: %i\n", vect[0]);
    printf("Valor1: %i\n", vect[1]);
    printf("Valor1: %i\n", vect[2]);
    printf("Valor1: %i\n", vect[3]);
    printf("Valor1: %i\n", vect[4]);
    printf("Valor1: %i\n", vect[5]);
    printf("Valor1: %i\n", vect[6]);
    printf("Valor1: %i\n", vect[7]);
}

void testingEj23(){

    int vec01[] = { 2, 5, 8, 9, 15, 0 };
    insertarElementoOrdenado( vec01, 11 );

    printf("Valor: %i\n", vec01[0] );
    printf("Valor: %i\n", vec01[1] );
    printf("Valor: %i\n", vec01[2] );
    printf("Valor: %i\n", vec01[3] );
    printf("Valor: %i\n", vec01[4] );
    printf("Valor: %i\n", vec01[5] );
    printf("Valor: %i\n", vec01[6] );
}


void testingEj24(){
    int vec01[] = { 2, 5, 0 };
    elimitarPosicion( vec01, 1 );

    printf("Valor: %i\n", vec01[0] );
    printf("Valor: %i\n", vec01[1] );
    printf("Valor: %i\n", vec01[2] );
    printf("Valor: %i\n", vec01[3] );
    printf("Valor: %i\n", vec01[4] );
    printf("Valor: %i\n", vec01[5] );
    printf("Valor: %i\n", vec01[6] );
}

void testingEj25(){
    int vec01[] = { 2, 2, 2, 2, 10, 0 };
    eliminarElementoUnico( vec01, 2 );

    printf("Valor: %i\n", vec01[0] );
    printf("Valor: %i\n", vec01[1] );
    printf("Valor: %i\n", vec01[2] );
    printf("Valor: %i\n", vec01[3] );
    printf("Valor: %i\n", vec01[4] );
    printf("Valor: %i\n", vec01[5] );
    printf("Valor: %i\n", vec01[6] );
}

void testingEj26(){
    // QUE PASA SI TODOS LOS NUMEROS SON EL ELEMENTO A BORRAR
    int vec01[] = { 2, 2, 2, 5, 2, 10, 12, 2, 2, 2, 8, 0 };
    eliminarElementoRepetido( vec01, 2 );

    printf("Valor: %i\n", vec01[0] );
    printf("Valor: %i\n", vec01[1] );
    printf("Valor: %i\n", vec01[2] );
    printf("Valor: %i\n", vec01[3] );
    printf("Valor: %i\n", vec01[4] );
    printf("Valor: %i\n", vec01[5] );
    printf("Valor: %i\n", vec01[6] );
}
