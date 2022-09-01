/*
Un simple ejercicio donde simulamos lecturas periódicas de un sensor.

La idea es leer un determinado sensor cada 6 segundos, luego de 10 lecturas (es decir al transcurrir un minuto),
se promedia, y este promedio es almacenado en una matriz de 60 items.

Transcurrida una hora, la matriz es enviada a un servidor externo para almacenamiento.

No hemos incorporado en este caso rutinas de espera, solo simulamos el algoritmo general.
*/

#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    const int CTD_LECTURAS_PROM = 10;
    const int CTD_LECTURAS_MTR = 60;

    float promedio = 0.0;
    int lectura = 0;
    int sumatoria_promedio = 0;
    int mtr_lecturas[CTD_LECTURAS_MTR] = {};

    // El for(;;) permite generar un loop infinito, simulando en este caso un dispositivo
    // que se energiza y queda funcionando.
    for(;;) {
        // Este primer for() (variable b), controla el guardado de las 60 lecturas en la matriz
        for (int b = 0; b < CTD_LECTURAS_MTR; b++) {
            // Este segundo for() (variable c), controla la toma de las 10 lecturas y el promedio
            for (int c = 0; c < CTD_LECTURAS_PROM; c++) {
                printf("Lectura %i: ", c + 1);
                cin >> lectura;
                sumatoria_promedio = sumatoria_promedio + lectura;
                // Espera de 6 segs
            }
            promedio = sumatoria_promedio / CTD_LECTURAS_PROM;

            mtr_lecturas[b] = promedio;
        }

        // Este for() simplemente se coloca como muestra, aquí iría la rutina
        // que conecta al servidor externo, y le envía el "paquete" de datos (mtr_lecturas) de una sola vez.
        for (int e = 0; e < CTD_LECTURAS_MTR; e++) {
            printf("%.1f\n", mtr_lecturas[e]);
        }
    }

    return 0;
}
