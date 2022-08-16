// #include es una directiva de preprocesador
// Nos permite insertar (incluir) una librería o código externo
#include <iostream>


using namespace std;


int main() {
	// Definimos e inicializamos a 0 tres variables llamadas nro1, nro2 y suma, de tipo entero (int)
	int nro1 = 0;
	int nro2 = 0;
	int suma = 0;
	
	// Definimos e inicializamos a 3.14 una constante (const) llamada PI, de tipo flotante (float)
	const float PI = 3.14;
	
	// Las siguientes 4 líneas están comentadas
	// Los comentarios son líneas que inician con doble barra, solo existen en el código fuente
	// NO se tienen en cuenta en la compilación final
	// cout << "Ingresar n1: ";
	// cin >> nro1;
	// cout << "Ingresar n2: ";
	// cin >> nro2;

	// Como hemos comentado las líneas para ingreso por consola, suma quedará en 0, ya que nro1 y nro2
	// fueron inicializadas también en 0.
	// Obviamente si descomentamos las líneas de arriba, suma tomará el valor que corresponda
	// según lo que ingresemos por consola.
	suma = nro1 + nro2;

	// endl inserta un salto de línea
	cout << "El valor de la suma: " << suma << endl;
	
	return 0;
}
