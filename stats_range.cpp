#include "stats_range.h"
#include <iostream>
#include <algorithm>

using namespace std;

stats_range::stats_range() 
{
    
}

void stats_range::add(double val) {
  
    numbers.push_back(val);

}

double stats_range::result() {

    sort(numbers.begin(), numbers.end(), greater <>());

    double range;

    range = numbers.front() - numbers.back();
    return range;


}

void stats_range::reset() {
    numbers.clear();
}
