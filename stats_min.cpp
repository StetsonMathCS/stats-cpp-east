#include "stats_min.h"
#include <limits>
using namespace std;

stats_min::stats_min() {
    min = numeric_limits<double>::max();
}

void stats_min::add(double val) {
    if (val < min) {
        min = val;
    }
}

double stats_min::result() {
    return min;
}

void stats_min::reset() {
    min = numeric_limits<double>::max();
}

