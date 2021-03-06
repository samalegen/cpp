#include <iostream>
#include "HeartRates.h"
using namespace std;

int main()
{
    HeartRates alexey("Alexey", "Samsonov", 7, 2, 1986);
    cout << alexey.getAge();
    cout << endl;
    cout << alexey.getMaxHeartRate();
    cout << endl;
    alexey.getTargetHeartRate();

    return 0;
}
