#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Funciones.h"
#include "Typedef.h"

int main()
{
    //testingEj1();
    //testingEj14();
    testingEj15();
}


// TESTING
void testingEj1 () {
    // Por limitacion de bits solo se puede calcular el factorial de hasta 20
    // Verificar que al enviar valores negativos la funcion los recibe sin problemas
    unsigned long long factoria101 = factorial(-10);
    printf("Resultado: %llu, Valor Esperado: 1\n", factoria101);

    unsigned long long factoria102 = factorial(13);
    printf("Resultado: %llu, Valor Esperado: 3628800\n", factoria102);

    unsigned long long factoria103 = factorial(14);
    printf("Resultado: %llu, Valor Esperado: 87178291200\n", factoria103);

    unsigned long long factoria104 = factorial(20);
    printf("Resultado: %llu, Valor Esperado: 2432902008176640000\n", factoria104);
}

void testingEj2 (){
    // Como definir la condicion de que el primer parametro tiene que ser mayor o igual que el segundo
    // Dominio de la funcion es todos los reales positivos ( no puedo hacer factorial > 20 )
    // Imagen es todos los reales positivos
    unsigned int combionatia01 = combinatoria( 3, 2 );
    printf("Resultado: %u, resultado esperado: 3\n", combionatia01 );

    unsigned int combionatia02 = combinatoria( 7, 5 );
    printf("Resultado: %u, resultado esperado: 21\n", combionatia02 );

    unsigned int combionatia03 = combinatoria( 2, 3 );
    printf("Resultado: %u, resultado esperado: Error\n", combionatia03 );

    unsigned int combionatia04 = combinatoria( 20, 15 );
    printf("Resultado: %u, resultado esperado: 15504\n", combionatia04 );
}

void testingEj3() {
    // Dominio del menos infinito al más infinito
    // Imagen es del 0 al mas infinito
    // Limitacion en la cantidad de decimales por usar tipo float
    float exponencial01 = calcularExponencial( 2, 0.01 );
    printf("Resultado: %f, resultado esperado: 7.38xxxx\n", exponencial01 );

    float exponencial02 = calcularExponencial( 0.01, 0.000001 );
    printf("Resultado: %f, resultado esperado: 1.01005xxx\n", exponencial02 );

    float exponencial03 = calcularExponencial( 0, 0.001 );
    printf("Resultado: %f, resultado esperado: 1\n", exponencial03 );

    float exponencial04 = calcularExponencial( -2, 0.001 );
    printf("Resultado: %f, resultado esperado: 0.135xxx\n", exponencial04 );
}

void testingEj4() {
    // Dominio del 0 al más infinito
    // Imagen del 0 al más infinito
    // Como limitar recibir solo numeros con decimales positivos
    float raiz01 = calcularRaiz( 2, 0.001 );
    printf("Resultado: %f, resultado esperado: 1,414xxx\n", raiz01 );

    float raiz02 = calcularRaiz( 5.2, 0.001 );
    printf("Resultado: %f, resultado esperado: 2.280xxxx\n", raiz02 );

    float raiz03 = calcularRaiz( 0, 0.001 );
    printf("Resultado: %f, resultado esperado: 0\n", raiz03 );
}

void testingEj5() {
    // No puede recibir numero con decimales ni numeros negativos
    // Si envio un negativo igual lo toma.
    bool pertenece01 = perteneceFibonacci( 2 );
    if( pertenece01 ) printf( "Resultado: pertenece, " );
    else printf("Resultado: no pertence, ");
    printf("resultado esperado: pertenece\n");

    bool pertenece02 = perteneceFibonacci( 10 );
    if( pertenece02 ) printf( "Resultado: pertenece, " );
    else printf("Resultado: no pertence, ");
    printf("resultado esperado: no pertenece\n");

    bool pertenece03 = perteneceFibonacci( 35 );
    if( pertenece03 ) printf( "Resultado: pertenece, " );
    else printf("Resultado: no pertence, ");
    printf("resultado esperado: no pertenece\n");

    bool pertenece04 = perteneceFibonacci( 0 );
    if( pertenece04 ) printf( "Resultado: pertenece, " );
    else printf("Resultado: no pertence, ");
    printf("resultado esperado: no pertenece\n");
}

void testingEj6() {
    // Dominio del menos infinito al más infinito
    // Imagen del menos uno al más uno
    // Tolerancio flotante positivo

    float seno01 = calcularSeno( 2, 0.0001 );
    printf("Resultado: %f, resultado esperado: 0.9092xxx\n", seno01 );

    float seno02 = calcularSeno( 0, 0.0001 );
    printf("Resultado: %f, resultado esperado: 0\n", seno02 );

    float seno03 = calcularSeno( 5, 0.0001 );
    printf("Resultado: %f, resultado esperado: -0.9589xxx\n", seno03 );
}

void testingEj7 (){
    // DOMINIO TODOS LOS NATURALES POSITIVOS
    int definir01 = definirNumero( 6 );
    printf("Resultado: ");
    if( definir01 == 1 ) { printf("PERFECTO"); }
    if( definir01 == 2 ) { printf("DEFICIENTE"); }
    if( definir01 == 3 ) { printf("ABUNDANTE"); }
    printf(", resultado esperado: PERFECTO\n");

    int definir02 = definirNumero( 10 );
    printf("Resultado: ");
    if( definir02 == 1 ) { printf("PERFECTO"); }
    if( definir02 == 2 ) { printf("DEFICIENTE"); }
    if( definir02 == 3 ) { printf("ABUNDANTE"); }
    printf(", resultado esperado: DEFICIENTE\n");

    int definir03 = definirNumero( 12 );
    printf("Resultado: ");
    if( definir03 == 1 ) { printf("PERFECTO"); }
    if( definir03 == 2 ) { printf("DEFICIENTE"); }
    if( definir03 == 3 ) { printf("ABUNDANTE"); }
    printf(", resultado esperado: ABUNDANTE\n");
}

void testingEj8() {

    int producto01 = producto( 2, 3 );
    printf("Resultado: %i, resultado esperado: 6\n", producto01 );

    int producto02 = producto( 0, 3 );
    printf("Resultado: %i, resultado esperado: 0\n", producto02 );

    int producto03 = producto( 50, 3 );
    printf("Resultado: %i, resultado esperado: 150\n", producto03 );
}

void testingEj9() {
    // primer parametro tiene dominio todos los naturales
    // Segundo parametro numeros naturales menos el 0
    // Como valida para que si envio un cero me retorne un error y no explote
    // NO ME ACUERDO COMO TRABAJAR CON PUNTEROS, BUSCAR EN LA DEEP WEB

    //float *resultado = division( 2, 3 );
    //printf("Cociente: %i, Resto: %f, resultado esperado: 0,666\n", *( resultado + 0 ), *( resultado + 1 ) );
}

void testingEj10() {
    int sumaNumeros01 = sumaNaturales( 5 );
    printf("Resultado: %i, resultado esperado: 15\n", sumaNumeros01);

    int sumaNumeros02 = sumaNaturales( 0 );
    printf("Resultado: %i, resultado esperado: 0\n", sumaNumeros02);

    int sumaNumeros03 = sumaNaturales( 20 );
    printf("Resultado: %i, resultado esperado: 210\n", sumaNumeros03);
}


void testingEj11() {
    int sumaPares01 = sumaNaturalesPares( 5 );
    printf("Resultado: %i, resultado esperado: 6\n", sumaPares01 );

    int sumaPares02 = sumaNaturalesPares( 10 );
    printf("Resultado: %i, resultado esperado: 30\n", sumaPares02 );
}

void testingEj12() {
    int sumaPares01 = sumarNaturalesPares2( 10 );
    printf("Resultado: %i, resultado esperado: 20", sumaPares01 );
}

void testingEj13(){
    bool primo01 = primo( 8 );
    printf("Resultado: ");
    if( primo01 ) { printf("ES PRIMO"); }
    else { printf("NO ES PRIMO"); };
    printf(" , resultado esperado: NO ES PRIMO\n");

    bool primo02 = primo( 5 );
    printf("Resultado: ");
    if( primo02 ) { printf("ES PRIMO"); }
    else { printf("NO ES PRIMO"); };
    printf(" , resultado esperado: ES PRIMO\n");

    bool primo03 = primo( 19 );
    printf("Resultado: ");
    if( primo03 ) { printf("ES PRIMO"); }
    else { printf("NO ES PRIMO"); };
    printf(" , resultado esperado: ES PRIMO\n");
}


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
}













//// TESTING EJERCICIOS DE MIEL
//void testingEj01a(){
//    int v1[] = { 10, 100, 50, 30, 20 };
//    int mayorValor = mayor( v1 );
//    printf("El mayor es: %i, valor esperado: 100\n", mayorValor );
//
//    int v2[] = { 10, 20, 30, 40, 50 };
//    int mayorValor2 = mayor( v2 );
//    printf("El mayor es: %i, valor esperado: 50\n", mayorValor2 );
//}
//
//void testingEj01b(){
//    int v1[] = { 10, 100, 50, 30, 20 };
//    int promedio01 = promedio( v1 );
//    printf("Resultado: %i, valor esperado: 42\n", promedio01 );
//
//    int v2[] = { 10, 20, 30, 40, 50 };
//    int promedio02 = promedio( v2 );
//    printf("Resultado: %i, valor esperado: 30\n", promedio02 );
//}
//
//void testingEj01c(){
//    int v[] = { 1, 2, 3, 4 };
//    int *vector = menor( v );
//    printf("El menor es: %i, esta en la posicion: %i", (vector + 0), ( vector + 1 ) );
//}
