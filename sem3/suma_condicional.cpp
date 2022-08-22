#include <iostream>

using namespace std;

int main() {
	int nro1 = 0, nro2 = 0, calculo = 0;
	
	cout << "Ingresar n1: ";
	cin >> nro1;
	cout << "Ingresar n2: ";
	cin >> nro2;

	if (nro1 < nro2) {
		calculo = nro1 + nro2;
	} else { // sino
		calculo = nro1 - nro2;
	}

	cout << "El valor del calculo: " << calculo << endl;
	
	return 0; // todo anduvo ok
}
