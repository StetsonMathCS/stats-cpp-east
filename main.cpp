#include <iostream>
#include <vector>
#include "stats_count.h"
using namespace std;

int main(){
    double val;
   vector <double> data;
  
   while (cin >> val) {
       data.push_back(val);
   }
   //stats_sum summer;
   //double s = summer.compute_sum(data);
  // cout << "Sum: " << s :<< endl;
stats_count counter;
    // Call the compute_count function to count the elements in the vector
    double count = counter.compute_count(data);

    cout << "Count: " << count << endl;

    return 0;
    }
