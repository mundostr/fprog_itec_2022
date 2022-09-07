/*
https://www.delftstack.com/howto/cpp/how-to-generate-random-float-number-in-cpp/
*/

#pragma once

#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

float generar_lectura_al_azar(float min, float max) {
    return min + static_cast<float>(rand()) * static_cast<float>(max - min) / RAND_MAX;
}
