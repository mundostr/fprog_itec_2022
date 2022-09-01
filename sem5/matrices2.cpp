/*
Primer ejemplo con colecciones de datos.
En este caso, utilizaremos una matriz estática sin inicializar elementos, y los iremos cargando luego.
*/

#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main() {
    // Un auxiliar simplemente para utilizar acentos, eñes y demás en la consola (Windows.h)
    SetConsoleOutputCP(CP_UTF8);

    const int CTD_LECTURAS = 5;

    float valor_ingresado = 0.0;
    float sumatoria = 0.0;
    // Definimos una matriz tipo float, pero en este caso no inicializamos sus items
    float mtr_lecturas[CTD_LECTURAS] = {};

    for (int x = 0; x < CTD_LECTURAS; x++) {
        printf("Ingresar número %i: ", x + 1);
        scanf("%f", &valor_ingresado);
        sumatoria = sumatoria + valor_ingresado;
        // Dentro de un ciclo, vamos solicitando números y asignándolos a las distintas "casillas" de la matriz.
        // Esto lo hacemos mediante el subíndice, aprovechando la variable auxiliar x del ciclo.
        mtr_lecturas[x] = valor_ingresado;
    }

    // Uso tradicional del for() para recorrer una matriz
    for (int x = 0; x < CTD_LECTURAS; x++) {
        printf("%.1f\t", mtr_lecturas[x]);
    }
    printf("\n");

    // Uso alternativo: la variable elemento en este caso no guarda el índice del ciclo,
    // sino directamente el valor del item en cada iteración, por eso se la indica con el tipo de dato float,
    // el mismo tipo de la matriz.
    for (float elemento: mtr_lecturas) {
        printf("%.1f\t", elemento);
    }
    printf("\n");

    return 0;
}
