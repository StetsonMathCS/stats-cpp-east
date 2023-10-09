#ifndef STATS_MIN_H
#define STATS_MIN_H

#include "stats_base.h"

class stats_min : public stats_base
{
    public:
        stats_min();
        void add(double val);
        double result();
        void reset();

    private:
        double min;
};

#endif

