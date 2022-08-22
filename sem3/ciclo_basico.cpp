#include <iostream>

using namespace std;

int nro = 0;
int sumatoria = 0;
int limite_numeros = 0;

int main() {
    cout << "Ctd nros a ingresar: ";
    cin >> limite_numeros;

    for (int i = 1; i <= limite_numeros; i = i + 1) {
        cout << "Ingresar nro: ";
        cin >> nro;

        if (nro < 0) {
            nro = 1;
        }
        sumatoria = sumatoria + nro;
    }

    cout << "Sumatoria final: " << sumatoria;

    return 0;
}