#include <iostream>
#include <fstream>
#include "stdio.h"
#include "unistd.h"
#include "stats_count.h"
//#include "stats_min.h"

/*#include "stats_mean.h"
#include "stats_median.h"
#include "stats_max.h"
#include "stats_mode.h"
#include "stats_count.h"*/
using namespace std;

int main(int argc, char **argv) {
int opt;
double val;
ifstream file;
vector<double> data;
string number;
file.open("data.txt");
while(!file.eof()){
    getline(file, number);
    data.push_back(std::stod(number));
}




  
while((opt = getopt(argc, argv, "cr")) != -1)  
    {  
        switch(opt)  
        {  
            case 'c':
                stats_count stats;
                double count;
                count = stats.compute_count(data);
                std::cout << "There are " << count << " elements in the file";
                break;
            //case 'n':
                //stats_max; 
            /*case 'r':
                stats_min min_finder;
                double val;
                while(cin >> val) {
                    min_finder.add(val);
                }
                cout << "min: " << min_finder.result() << endl;
                break;*/
            //case 'e':
                //stats_mode;
            default:
                std::cout << "Options are:\n C count how many elements are in the file";

        }  
    }  
      
    // optind is for the extra arguments 
    // which are not parsed 
    //for(; optind < argc; optind++){      
      //  printf(“extra arguments: %s\n”, argv[optind]);  
    //} 

    
    //stats_mean mean_finder;
    //stats_median median_finder;
    //stats_max max_finder;
    //stats_mode mode_finder;
    //stats_count count_finder;
    return 0;
}

// our code will calculate:
// - min
// - max
// - mean
// - median
// - mode
// - standard deviation
// - variance
// - range
// - sum
// - count

