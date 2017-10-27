#include <cmath>        // for pow()
using namespace std;    // OK in .cpp file

#include "futval.h"     // connect prototypes

double futureValue(double p)
{
    double balance = 1000.0 * pow(1 + p / 100.0, 20);
    return balance;
}


