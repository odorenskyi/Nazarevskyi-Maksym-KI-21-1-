#include "ModulesNazarevskyi.h"

double s_calculation(float x, float y, float z)
{
    return z*sin(pow(x,2) * y) + sqrt(abs(z - x*12))/pow(y,3);
}

