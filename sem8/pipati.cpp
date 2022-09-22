/*
Práctica del clásico Piedra - Papel - Tijera con una escritura
alternativa para la tarea de comparación
*/

#include <iostream>
#include <ctime>

using namespace std;

// Se declaran estas variables de forma global para un manejo más cómodo
// Como práctica alternativa, pueden quitarse y pasarse como argumentos en
// las llamadas a las funciones
int opcion_maq, opcion_jug;
string resultado;

void mostrar_opciones() {
    printf("JUEGO PIEDRA PAPEL TIJERA\n");
    printf("1- Piedra, 2- Papel, 3- Tijera\n");
    printf("Ingresar opcion: ");
}

void hacer_jugar_maquina() {
    // La jugada de la máquina consiste simplemente en elegir un número al azar entre 1 y 3
    srand(time(NULL));
    opcion_maq = rand() % 3 + 1;
}

void hacer_jugar_usuario() {
    // La jugada del usuario consiste en lo mismo, verificamos que el número ingresado esté entre 1 y 3
    while(opcion_jug < 1 || opcion_jug > 3) {
        cin >> opcion_jug;
    }
}

void comparar_jugadas() {
    // Como existen solo 3 posibles resultados (empate, gana máquina, gana jugador),
    // chequeamos inicialmente el empate, y de no darse, en función de lo elegido por
    // la máquina, evaluamos lo ingresado por el jugador, que solo podrá ser 1 de la 2
    // opciones restantes.
    if (opcion_maq == opcion_jug) {
        resultado = "Empate";
    } else {
        switch(opcion_maq) {
            case 1: // Maq Piedra
                resultado = opcion_jug == 2 ? "Gana jugador" : "Gana maquina";
                /*
                Esta es una forma compacta de asignar un valor a una variable, de acuerdo
                a una condición. Es equivalente a:

                opcion_jug == 2 ? resultado = "Gana jugador" : resultado = "Gana maquina";

                o bien la típica:

                if (opcion_jug == 2) {
                    resultado = "Gana jugador";
                } else {
                    resultado = "Gana maquina";
                }
                */
                break;
            
            case 2: // Maq Papel
                resultado = opcion_jug == 1 ? "Gana maquina" : "Gana jugador";
                break;
            
            case 3: // Maq Tijera
                resultado = opcion_jug == 1 ? "Gana jugador" : "Gana maquina";
                break;
            
            default:
                break;
        }
    }
}

void mostrar_ganador() {
    printf("Jugada de la maquina: %i\n", opcion_maq);
    printf("Jugada del usuario: %i\n", opcion_jug);
    printf("Resultado: %s\n", resultado.c_str());
}

// El flujo principal consta simplemente de las llamadas a las distintas funciones
int main() {
    mostrar_opciones();
    hacer_jugar_maquina();
    hacer_jugar_usuario();
    comparar_jugadas();
    mostrar_ganador();

    return 0;
}