/*
Primer ejemplo con colecciones de datos.
Recordemos que una colección, es esencialmente un paquete de datos identificados bajo el mismo nombre.
Genéricamente vamos a utilizar el término matriz (o array en inglés).
*/

#include <iostream>

using namespace std;

int main() {
    const int CTD_LECTURAS = 5;

    // Variable común de tipo float
    float lectura = 19.2;
    
    // Matriz de elementos de tipo float (en este caso 5)
    float mtr_lecturas[CTD_LECTURAS] = {19.7, 19.5, 20.4, 19.8, 20.4};

    // Como una matriz identifica un paquete de elementos bajo un mismo nombre,
    // cada item puede ser accedido mediante un subíndice numérico, que siempre inicia en 0.
    printf("Primer item de la matriz: %.1f\n", mtr_lecturas[0]);
    printf("Ultimo item de la matriz: %.1f\n", mtr_lecturas[CTD_LECTURAS - 1]);

    return 0;
}