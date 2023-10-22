#include <iostream>
#include <vector>
#include "stats_sum.h"
#include "stats_range.h"
using namespace std;

int main(){
	double val;
	vector <double> data;
	while(cin >> val) {
		data.push_back(val);
	}
	stats_sum summer;
	stats_range ranger;
	double s = summer.compute_sum(data);
	cout << "sum : " << s << endl;
	double r = ranger.compute_range(data);
	cout << "range: " << r << endl;
}
