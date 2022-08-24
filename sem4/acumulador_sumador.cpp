/*
Recordatorio contadores / acumuladores
/ flags (banderas)
*/

#include <iostream>

using namespace std;

int main() {
    // Formato de contador:
    // int contador = 0;
    // contador = contador + 1;
    // contador++;
    // contador += 1;

    // Formato de acumulador:
    const int LIMITE_ACUMULADOR = 1000;

    bool marcador = false;
    int contador = 0;
    int acumulador = 0;
    int numero_ingresado = 0;
    
    while(acumulador < LIMITE_ACUMULADOR) {
        if (marcador == true) {
            cout << "Ingresar nro (falta poco): ";
        } else {
            cout << "Ingresar nro: ";
        }
        cin >> numero_ingresado;
        
        contador = contador + 1;
        acumulador = acumulador + numero_ingresado;
        
        if (acumulador > LIMITE_ACUMULADOR * 0.9) {
            marcador = true;
        }
    }

    cout << contador;

    return 0;
}
