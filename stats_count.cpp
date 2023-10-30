#include "stats_count.h"
#include <iostream>

StatsCount::StatsCount() {
    count = 0;
}

void StatsCount::handleValue(float &val) {
    count++;
}

float StatsCount::computeCount() {
    return count;
}



