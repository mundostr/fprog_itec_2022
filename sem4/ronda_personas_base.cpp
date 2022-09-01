#include <iostream>

using namespace std;

int main() {
    // Constantes
    const int MIN_PERSONAS = 5;
    const int MAX_PERSONAS = 20;
    const int LIMITE_CUENTA = 30;
    const int DIVISOR_1 = 8;
    const int DIVISOR_2 = 11;

    // Variables
    int cuenta = 0;
    int personas = 0;
    int persona_actual = 1;
    bool giro_horario = true;

    // Flujo principal
    // Solicitar ctd personas en la ronda
    while(personas < MIN_PERSONAS || personas > MAX_PERSONAS) {
        cout << "Ingresar ctd personas: ";
        cin >> personas;
    }

    cout << "Personas en la ronda: " << personas << "\n\n";

    // Contar hasta LIMITE_CUENTA
    for (int ciclo = 1; ciclo <= LIMITE_CUENTA; ciclo = ciclo + 1) {
        cuenta = cuenta + 1; // cuenta++ cuenta += 1
        
        cout << "La persona " << persona_actual << " dice " << cuenta << "\n";

        if (giro_horario == true) {
            persona_actual = persona_actual + 1;
            if (persona_actual > personas) {
                persona_actual = 1;
            }
        } else {
            persona_actual = persona_actual - 1;
            if (persona_actual < 1) {
                persona_actual = personas;
            }
        }

        if (cuenta % DIVISOR_1 == 0) {
            giro_horario = !giro_horario;
        }

        if (cuenta % DIVISOR_2 == 0) {
            // if (giro_horario == true) {
            if (giro_horario) {
                persona_actual = persona_actual + 1;
            } else {
                persona_actual = persona_actual - 1;
            }
        }
    }

    return 0;
}
