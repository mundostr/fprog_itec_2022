/*
Ejemplo básico de flags

En programación general, un flag es una variable (normalmente booleana o entera 0 / 1), que permite indicar
un cambio de estado o situación acontecida durante la ejecución de código.

Supongamos que solicitamos el ingreso de un paquete de números para calcular su suma, y deseamos notificar si se
ingresa algún número mayor a determinado límite (sin importar si es uno o más de uno).
*/

#include <iostream>

using namespace std;

const int LIMITE = 50;
const int CTD_NUMEROS = 5;

int nro = 0;
int sumatoria = 0;

bool nros_altos = false;

int main() {
    for (int c = 1; c <= CTD_NUMEROS; c++) {
        cout << "Ingresar nro: ";
        cin >> nro;
        
        if (nro > LIMITE) {
            nros_altos = true;
        } else {
            sumatoria = sumatoria + nro;
        }
    }

    cout << "Sumatoria: " << sumatoria << "\n";

    if (nros_altos == true) {
        cout << "CUIDADO!: se ingresaron nros por encima del limite\n";
    }

    return 0;
}