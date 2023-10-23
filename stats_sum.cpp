#include "stats_sum.h"

double stats_sum::compute_sum(vector<double> data){
	int s = 0;
	for(int i = 0; i < data.size(); i++){
		s += data[i];
	}
	return s;
}
