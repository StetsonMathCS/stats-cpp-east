#include<iostream>
#include "stats_min.h"
using namespace std;
int main(){
	stats_max max_finder;
	double val;
	while(cin >> val){
		max_finder.add(val);

	}
	cout << "max:" <<max_finder.get_max() << endl;
	return 0;
