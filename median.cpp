#include <iostream>
#include "stats_median.h"
using namespace std;

int main()
{

    stats_median median_finder;
    double val;
    cout << "You can enter upto " << median_finder.max_inputs << " numbers";
    while (cin >> val)
    {
        median_finder.add(val);
    }
    cout << "median: " << median_finder.result() << endl;
    return 0;
}

