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
    if (input_count == max_inputs)
    {
        cout << "You have exceeded the max input limit of " << max_inputs << " numbers";
        return;
    }

    numbers[input_count++] = val;
}

double stats_median::result()
{
    if (input_count == 0)
    {
        cout << "Cannot calculate median without any numbers";
        exit(1);
    }

    // Sort the numbers in ascending order
    sort(numbers, numbers + input_count);

    // Calculate the median
    double median;

    if (input_count % 2 == 0)
    {
        median = (numbers[input_count / 2 - 1] + numbers[input_count / 2]) / 2.0;
    }
    else
    {
        median = numbers[input_count / 2];
    }

    return median;
}

void stats_median::reset()
{
    input_count = 0;
    for (int i = 0; i < max_inputs; i++)
    {
        numbers[i] = 0.0;
    }
}

