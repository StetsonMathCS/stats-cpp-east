#include "stats_min.h"
#include <limits>
stats_min::stats_min()
{
    min = numeric_limits<double>::max();

void stats_min::add(double num)
{
    if (val < min){
	min = val;
}
}
double stats_min::get_min(){

    return min;
}
void stast_min::reset(){
    min = numeric_limits<double>::max();
}
