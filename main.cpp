#include <iostream>
#include "stats_min.h"
#include "stats_mean.h"
#include "stats_median.h"
#include "stats_max.h"
#include "stats_mode.h"
#include "stats_count.h"
using namespace std;

int main() {

    stats_min min_finder;
    double val;
    while(cin >> val) {
        min_finder.add(val);
    }
    cout << "min: " << min_finder.result() << endl;
    return 0;
}

// our code will calculate:
// - min
// - max
// - mean
// - median
// - mode
// - standard deviation
// - variance
// - range
// - sum
// - count