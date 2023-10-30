#ifndef STATS_COUNT_H
#define STATS_COUNT_H

class StatsCount {
private:
    float count;	
public:
    StatsCount();  // Constructor declaration
    void handleValue(float &val);
    float computeCount();
};

#endif
