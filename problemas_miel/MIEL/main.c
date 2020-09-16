#include <stdio.h>
#include <stdlib.h>

int main()
{
    //testingPalindromo();
    testingArray();

    return 0;
}

// TESTING

void testingPalindromo(){
    char palabra01[] = "neuquen";
    if( palindromo( palabra01 ) ) { printf("ES PALINDROMO\n"); }
    else { printf("NO ES PALINDROMO\n"); }

    char palabra02[] = "arriba la birra";
    if( palindromo( palabra02 ) ) { printf("ES PALINDROMO\n"); }
    else { printf("NO ES PALINDROMO\n"); }

    char palabra03[] = "anita lava la tina";
    if( palindromo( palabra03 ) ) { printf("ES PALINDROMO\n"); }
    else { printf("NO ES PALINDROMO\n"); }

    char palabra04[] = "cualquier cosa";
    if( palindromo( palabra04 ) ) { printf("ES PALINDROMO\n"); }
    else { printf("NO ES PALINDROMO\n"); }
}

void testingArray(){
    int vector01[] = { 1, 2, 0 };
    int valor01 = 3;
    addElementToArray( vector01, &valor01 );

}
