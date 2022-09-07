#include "lecturas_sensor.h"

int main() {
    const int CTD_LECTURAS_PROM = 6;
    const int CTD_LECTURAS_REGISTRO = 4;
    const float TEMP_MIN = 15.0;
    const float TEMP_MAX = 20.0;

    float lectura = 0.0;

    srand(time(NULL));

    for (int c1 = 0; c1 < 5; c1++) {
        lectura = generar_lectura_al_azar(TEMP_MIN, TEMP_MAX);
        printf("%.1f\n", lectura);
    }
}
