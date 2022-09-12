#include "semaforo_base.h"

int main() {
    string modo = "intermitente";

    while(true) {
        if (modo == "normal") {
            for (int x = 0; x < CTD_LUCES; x++) {
                system(MTR_LUCES[x].c_str());
                Sleep(MTR_TIEMPOS[x]);
            }
        }

        if (modo == "intermitente") {
            for (int x = 0; x < CTD_LUCES_INT; x++) {
                system(MTR_LUCES_INT[x].c_str());
                Sleep(MTR_TIEMPOS_INT[x]);
            }
        }
    }
    
}