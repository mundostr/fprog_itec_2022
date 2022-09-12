/*
Diferentes opciones para recorrer matrices
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    const int CTD_LECTURAS = 10;
    
    int mtr_lecturas[CTD_LECTURAS] = {22, 21, 21, 20, 19, 20, 23, 24, 25, 24};

    // Opción 1: utilizar una constante auxiliar definida manualmente (ej CTD_LECTURAS).
    for (int x = 0; x < CTD_LECTURAS; x++) {
        printf("%i\t", mtr_lecturas[x]);
    }
    printf("\n");

    // Opción 2: calcular la cantidad de items obteniendo el tamaño total
    // del array, y dividiendo por el tamaño del tipo de dato (ej int)
    // mediante la función integrada sizeof().
    // Esta es la alternativa más antigua, que sigue estando disponible.
    for (int x = 0; x < sizeof(mtr_lecturas) / sizeof(int); x++) {
        printf("%i\t", mtr_lecturas[x]);
    }
    printf("\n");

    // Opción 3: utilizar la función size(), pero ATENCION,
    // esta es una alternativa disponible solo desde C++ 17.
    for (int x = 0; x < size(mtr_lecturas); x++) {
        printf("%i\t", mtr_lecturas[x]);
    }
    printf("\n");
    
    return 0;
}