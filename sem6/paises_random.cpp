#include <iostream>
#include <string> // Manejo de pseudoclase string
#include <stdio.h> // printf
#include <vector>
#include <Windows.h>
#include <ctime>
#include <algorithm>

using namespace std;

const int CTD_PAISES = 10;
const int CTD_PAISES_SEL = 5;

int main() {
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    
    // Matriz estática
    string mtr_paises[CTD_PAISES] = {"Argentina", "Brasil", "Uruguay", "Paraguay", "Chile", "Bolivia", "Ecuador", "Colombia", "Peru", "Venezuela"};
    vector<string> mtr_paises_sel = {};

    // mtr_paises_sel.clear();
    // for (int c1 = 0; c1 < CTD_PAISES_SEL; c1++) {
    while(mtr_paises_sel.size() < CTD_PAISES_SEL) {
        string pais_al_azar = mtr_paises[rand() % CTD_PAISES];

        if (count(mtr_paises_sel.begin(), mtr_paises_sel.end(), pais_al_azar) == 0) {
            mtr_paises_sel.push_back(pais_al_azar);
        }
    }

    for (int c1 = 0; c1 < CTD_PAISES_SEL; c1++) {
        printf("%s\n", mtr_paises_sel[c1].c_str());
    }

    return 0;
}
