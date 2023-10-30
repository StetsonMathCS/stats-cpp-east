#ifndef STATS_RANGE_H
#define STATS_RANGE_H

#include "stats_base.h"
#include <vector>

using namespace std;

class stats_range
{
    public:
        stats_range();
        void add(double val);
        double result();
        void reset();

    private:

        vector<double>numbers;
        
};

#endif
