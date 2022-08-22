/*
Ejercicio simple comparativa operadores relacionales y lógicos
con condición anidada y condición combinada
*/

#include <iostream>

using namespace std;

int main() {
	int nro1 = 0, nro2 = 0, calculo = 0;
	
	cout << "Ingresar n1: ";
	cin >> nro1;
	cout << "Ingresar n2: ";
	cin >> nro2;

	// // Si el 1ero nro debe ser > al 2do y a su vez > a 10,
    // // puedo ANIDAR una condición dentro de la otra
    // if (nro1 > nro2) {
    //     if (nro1 > 10) {
	// 	    calculo = nro1 - nro2;
    //     }
	// } else { // sino
	// 	calculo = nro1 + nro2;
	// }

    // Si el 1ero nro debe ser > al 2do y a su vez > a 10 o igual a 100,
    // puedo COMBINAR condiciones
    if (nro1 > nro2 && (nro1 > 10 || nro1 == 100)) {
        calculo = nro1 - nro2;
	} else { // sino
		calculo = nro1 + nro2;
	}

	cout << "El valor del calculo: " << calculo << endl;
	
	return 0; // todo anduvo ok
}