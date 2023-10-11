#include "stats_count.h"
#include <iostream>
#include <sstream>
#include <vector>

double stats_count::compute_count(std::vector<double> data) {
      double count = 0;

    for (double number : data) {
        count++;
    }

    return count;
}

