#include <iostream>
#include <stdio.h>  
#include <unistd.h>  
#include "stats_min.h"
/*#include "stats_mean.h"
#include "stats_median.h"
#include "stats_max.h"
#include "stats_mode.h"
#include "stats_count.h"*/
using namespace std;

int main(int argc, char *argv[]) {
int opt;
while((opt = getopt(argc, argv,":if:lrx")) != -1)  
    {  
        switch(opt)  
        {  
            case 'a':
                //stats_count; 
            case 'n':
                //stats_max; 
            case 'r':
                stats_min min_finder;
                double val;
                while(cin >> val) {
                    min_finder.add(val);
                }
                cout << "min: " << min_finder.result() << endl;
                break;
            case 'e':
                //stats_mode;  

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