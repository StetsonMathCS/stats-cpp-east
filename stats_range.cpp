#include "stats_range.h"

double stats_range::compute_range(vector<double> data){
	int high;
	int low;
	for(double value : data){
		if(value > high){
			high = value;
		}
		if(value < low){
			low = value;
		}
	}
	return high - low;
}
