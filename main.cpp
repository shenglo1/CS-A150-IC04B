// Calculating a future value.
#include <iostream>
#include <cmath>

using namespace std;

// Declare the function here or add #include

int main()
{
    cout << "Please enter the interest rate in percent: ";
    double rate;
    cin >> rate;

    double balance = futureValue(rate);
    cout << "After 10 years, the balance is "
         << balance << "\n";

    return 0;
}

