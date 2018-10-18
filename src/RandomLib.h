#ifndef RandomLib_h
#define RandomLib_h

#include <Arduino.h>

class RandomLib {
public:

    RandomLib();
    
    int getNumberInt(int maxValue);

    int getNumberInt(int minValue, int maxValue);

    float getNumberFloat(float minValue, float maxValue);
};
#endif