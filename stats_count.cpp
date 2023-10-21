#include "stats_count.h"
#include <iostream>
#include <vector>

double stats_count::compute_count(std::vector<double> data) {
    double count = 0;

    for (double i = 0; i < data.size(); i++) {
        count++;
    }

    return count;
}