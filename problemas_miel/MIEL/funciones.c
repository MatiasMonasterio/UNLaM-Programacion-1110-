#include <stdio.h>

// bibliotecas adicionales
#include <string.h>


// EJERCICIO 1A
int mayor( int v[] ){
    int i = 1;
    int mayor = v[0];

    do{
        if( mayor < v[i] ) mayor = v[i];
        i++;
    }while( v[i] != 0 );

    return mayor;
}

// EJERCICIO 1B
int promedio ( int v[] ){
    int i = 0;
    int suma = 0;

    do{
        suma += v[i];
        i++;
    }while( v[i] != 0 );

    return (suma / i );
}

// EJERCICIO 1C
//int * menor ( int v[] ){
//    int vector[] = { 15, 8 };
//    return *vector;
//}

// EJERCICIO 2
void printASCII(){
    int i;

    for( i = 48; i <= 122; i++ ){
        if( ( i <= 57 ) || ( i >= 65 && i <= 90 ) || ( i >= 97 ) ){
            printf(" %c | %d\n", i, i);
        }
    }
}


// EJERCICIO 3
// MAL, TENE QUE SEGUIR EL MANEJO DE PUNTERO
int palindromo( char palabra[] ){
    int palabraLength = ( strlen( palabra ) - 1 );
    int j = palabraLength;
    int i = 0;

    while( i <= palabraLength || j >= 0 ){
        if( palabra[i] == 32 ) { i++; }
        else if( palabra[j] == 32 ) { j--; }
        else if( palabra[i] != palabra[j] ) { return 0; }
        else{
                i++;
                j--;
        }
    }

    return 1;
}


void addElementToArray( int *vector, int *valor ){

    while( *vector != 0 ){
        printf("Valor: %i\n", *vector );
        vector++;
    }

}


int contarLogitud( const char *p ){
    int sum = 0;

    while( *p != 0 ){
        p++;
        sum++;
    }

    return sum;
}
