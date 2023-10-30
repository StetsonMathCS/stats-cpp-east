#include <iostream>
// #include "stats_median.h"
#include "stats_range.h"
using namespace std;

int main()
{

//    stats_median median_finder;
    stats_range range_finder;
    double val;
    while (cin >> val)
    {
//        median_finder.add(val);
    range_finder.add(val);

    }
 //   cout << "median: " << median_finder.result() << endl;

    cout << "range: " << range_finder.result() << endl;
    return 0;
}

