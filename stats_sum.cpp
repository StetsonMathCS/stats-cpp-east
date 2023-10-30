//this provide code for functions in the class
#include "stats_sum.h"

float stats_sum::compute_sum(float* data, int size)
{
    float s = 0.0;
    for (int i = 0; i < size; i++)
    {
        s += data[i];
    }
    return s;
}

