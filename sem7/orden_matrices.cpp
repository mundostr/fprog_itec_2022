/*
Práctica de ordenamiento manual y automático de matriz
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int mtr_lecturas[] = {22, 23, 18, 15, 18, 21};
    
    int indice = 0;
    int indice_menor = 0;
    bool intercambiar = false;

    sort(begin(mtr_lecturas), end(mtr_lecturas));

    // while(indice < size(mtr_lecturas)) {
    //     int menor = mtr_lecturas[indice];
        
    //     for (int x = indice; x < size(mtr_lecturas); x++) {
    //         if (mtr_lecturas[x] < menor) {
    //             menor = mtr_lecturas[x];
    //             indice_menor = x;
    //             intercambiar = true;
    //         }
    //     }

    //     if (intercambiar == true) {
    //         swap(mtr_lecturas[indice], mtr_lecturas[indice_menor]);
    //         intercambiar = false;
    //     }

    //     indice++;
    // }

    // Muestro como quedó ordenada la matriz
    for (int x = 0; x < size(mtr_lecturas); x++) {
        printf("%i\t", mtr_lecturas[x]);
    }
    printf("\n");

    return 0;
}
