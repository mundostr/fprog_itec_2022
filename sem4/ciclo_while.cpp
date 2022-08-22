/*
Para repetir instrucciones de forma indefinida, es muy cómodo el comando while().

*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    int valor = -1;

    while(cin.fail() || valor <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ingresar valor: ";
        cin >> valor;
    }

    cout << "El valor ingresado es " << valor << endl;

    return 0;
}
