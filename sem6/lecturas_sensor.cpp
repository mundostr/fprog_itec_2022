#include "lecturas_sensor.h"

int main() {
    const int CTD_LECTURAS_PROM = 6;
    const int CTD_LECTURAS_REGISTRO = 4;
    const float TEMP_MIN = 15.0;
    const float TEMP_MAX = 20.0;
    const int FREC_ACT_MATRIZ = 1000; // en milisegundos

    float lectura = 0.0;
    float lectura_promedio = 0.0;
    vector<float> mtr_lecturas = {};

    srand(time(NULL));

    while(true) {
        for (int c1 = 0; c1 < CTD_LECTURAS_PROM; c1++) {
            lectura = generar_lectura_al_azar(TEMP_MIN, TEMP_MAX);
            lectura_promedio = lectura_promedio + lectura / CTD_LECTURAS_PROM;
            printf("%.1f\n", lectura);
            Sleep(FREC_ACT_MATRIZ);
        }
        
        printf("\nSe agrega a la matriz el promedio %.1f\n\n", lectura_promedio);
        mtr_lecturas.push_back(lectura_promedio);
        lectura_promedio = 0.0;

        if (mtr_lecturas.size() == CTD_LECTURAS_REGISTRO) {
            printf("Se envia el paquete de promedios al servidor\n\n");
            mtr_lecturas.clear();
        }
    }
}
