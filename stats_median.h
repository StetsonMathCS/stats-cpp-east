#ifndef STATS_MEDIAN_H
#define STATS_MEDIAN_H

#include "stats_base.h"
#include <vector>
using namespace std;

class stats_median : public stats_base
{
    public:
        stats_median();
        void add(double val);
        double result();
        void reset();
 //       static int const max_inputs = 100;

    private:
 //       double numbers[max_inputs]
        vector<double> numbers;
 //       int input_count;   

};

#endif
