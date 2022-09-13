/*
Práctica de ordenamiento de strings con sort(), utilizando vectores
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> mtr_nombres = {"Pepe", "Pepa", "Carlos", "Carolina", "Pepo"};
    
    int indice = 0;
    int indice_menor = 0;
    bool intercambiar = false;

    sort(mtr_nombres.begin(), mtr_nombres.end()); // A-Z predeterminado
    // sort(mtr_nombres.begin(), mtr_nombres.end(), greater<string>()); // Z-A

    for (string nombre: mtr_nombres) {
        printf("%s, ", nombre.c_str());
    }
    printf("\n");

    return 0;
}
