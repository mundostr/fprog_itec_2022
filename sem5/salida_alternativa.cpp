#include <iostream>
#include <stdio.h> // .h = headers = archivos de cabecera

using namespace std;

int main() {
    int ctd_valores = 1;
    float valor_dec = 16.55;
    string control = "[CONTROL]";
    int ingreso = 0;

    // cout << "Mensaje mostrado a traves de cout" << endl;
    printf("%s Mensaje mostrado a traves de printf, con %i valor igual a %.2f\n", control.c_str(), ctd_valores, valor_dec);

    // cin >> ingreso;
    printf("Ingresar nro: ");
    scanf("%i", &ingreso);
    printf("Se acaba de ingresar %i\n\n", ingreso);

    return 0;
}