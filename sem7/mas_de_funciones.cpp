#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> mtr_nombres = {"Pepe", "Pepa", "Carlos", "Carolina", "Pepo"};

// Declaramos una función llamada mostrar_vector
// El tipo de dato de esta función es void, ya que no necesita retornar ningún valor
// titulo es una variable de tipo string, un argumento que recibirá la función para utilizar internamente.
// Al momento de llamarla, se le deberá pasar ese argumento.
void mostrar_vector(string titulo) {
    printf("%s", titulo.c_str());
    
    for (int x = 0; x < mtr_nombres.size(); x++) {
        printf("%s,", mtr_nombres[x].c_str());
    }
    
    printf("\n");
}

int main() {
    mostrar_vector("Vector original: ");
    sort(mtr_nombres.begin(), mtr_nombres.end());
    mostrar_vector("Vector ordenado: ");

    return 0;
}
