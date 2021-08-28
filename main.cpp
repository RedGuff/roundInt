#include <iostream>
#include <math.h>
using namespace std;

int roundInt( int a = 0, int step = 0) {
    if (abs(a%step)<=abs(step/2)) {
        return a - (a%step);
        }
    else if (a>0) {
        return (a - a%step) + step;
        }
    else if (a<0) {
        return (a - a%step) - step;
        }
    }

int main() {
    int step = 10;
    for (int i=-42; i<42+ 1; ++i) { 
        cout << i << " rounded to the " << step << " the closest: " << roundInt(i,step) << endl;
        }
    cout << "Ok!" << endl;
    return 0;
    }
