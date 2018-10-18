#include "RandomLib.h"

RandomLib::RandomLib() {

}

int RandomLib::getNumberInt(int maxValue) {
    return random(maxValue);
}

int RandomLib::getNumberInt(int minValue, int maxValue) {
    return random(minValue, maxValue);
}

float RandomLib::getNumberFloat(float minValue, float maxValue) {
    return minValue + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (maxValue - minValue)));
}