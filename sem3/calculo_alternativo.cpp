#include <iostream>

using namespace std;

int main() {
    int n1 = 0, n2 = 0, calculo = 0;
    const int K = 5;

    cout << "Ingresar n1: ";
    cin >> n1;
    if (n1 < 0) {
        n1 = 1;
    }

    cout << "Ingresar n2: ";
    cin >> n2;
    if (n2 < 0) {
        n2 = 1;
    }

    // Calcular
    calculo = n1 * n2 + K;

    cout << "Resultado: " << calculo << "\n";

    return 0;
}