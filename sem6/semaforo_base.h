#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>

using namespace std;

const int CTD_LUCES = 3;
const string MTR_LUCES[CTD_LUCES] = {"Color C0", "Color A0", "Color E0"}; // Rojo, verde, amarillo 
// const char* MTR_LUCES[CTD_LUCES] = {"Color C0", "Color A0", "Color E0"}; // Rojo, verde, amarillo
const int MTR_TIEMPOS[CTD_LUCES] = {3000, 6000, 1000};
        
const int CTD_LUCES_INT = 2;
const string MTR_LUCES_INT[CTD_LUCES_INT] = {"Color E0", "Color 07"}; // Amarillo, apagado
// const char* MTR_LUCES_INT[CTD_LUCES_INT] = {"Color E0", "Color 07"}; // Amarillo, apagado
const int MTR_TIEMPOS_INT[CTD_LUCES_INT] = {2000, 2000};
