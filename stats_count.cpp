#include "stats_count.h"
#include <iostream>
#include <vector>

double stats_count::compute_count(std::vector<double> data) {
    double count = 0;

    for (size_t i = 0; i < data.size(); i++) {
        count++;
    }

    return count;
}



