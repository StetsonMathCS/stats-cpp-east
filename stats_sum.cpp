//this provide code for functions in the class
#include "stats_sum.h"

double stats_sum::compute_sum(vector<double>data)
{
    double s = 0.0;
    for (int i = 0; i < data.size(); i++)
    {
	s += data[i];
    }
    return s;
}