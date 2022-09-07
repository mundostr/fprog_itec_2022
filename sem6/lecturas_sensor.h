#pragma once

#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

// random_device rd;
// mt19937 gen(rd());
// uniform_real_distribution<float> distrib(15.0, 20.0);

float generar_lectura_al_azar(float min, float max) {
    return min + static_cast<float>(rand()) * static_cast<float>(max - min) / RAND_MAX;
    // return distrib(gen);
}
