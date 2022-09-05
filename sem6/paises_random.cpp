#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

const int CTD_PAISES = 10;

int main() {
    // Matriz estática
    string mtr_paises[CTD_PAISES] = {"Argentina", "Brasil", "Uruguay", "Paraguay", "Chile", "Bolivia", "Ecuador", "Colombia", "Peru", "Venezuela"};

    for (int c1 = 0; c1 < CTD_PAISES; c1++) {
        printf("%s\n", mtr_paises[c1].c_str());
    }

    return 0;
}
