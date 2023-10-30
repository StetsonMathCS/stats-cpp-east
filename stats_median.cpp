#include "stats_median.h"
#include <iostream>
#include <algorithm>
using namespace std;

stats_median::stats_median()
{
    reset();
}

void stats_median::add(double val)
{
    numbers.push_back(val);
}

double stats_median::result()
{

    // Sort the numbers in ascending order
    sort(numbers.begin(), numbers.end());

    // Calculate the median
    double median;

    if (numbers.size() % 2 == 0)
    {
        median = (numbers[numbers.size() / 2 - 1] + numbers[numbers.size() / 2]) / 2.0;
    }
    else
    {
        median = numbers[numbers.size() / 2];
    }

    return median;
}

void stats_median::reset()
{
    numbers.clear();
}

