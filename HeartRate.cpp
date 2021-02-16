#include <iostream>
#include "HeartRates.h"
using namespace std;

HeartRates::HeartRates(string name, string surname, int day, int month, int year)
{
    setName(name);
    setSurname(surname);
    setDay(day);
    setMonth(month);
    setYear(year);
}
void HeartRates::setName(string nam)
{
    name = nam;
}
string HeartRates::getName()
{
    return name;
}
void HeartRates::setSurname(string surnam)
{
    surname = surnam;
}
string HeartRates::getSurname()
{
    return surname;
}
void HeartRates::setDay(int da)
{
    day = da;
}
int HeartRates::getDay()
{
    return day;
}
void HeartRates::setMonth(int mont)
{
    month = mont;
}
int HeartRates::getMonth()
{
    return month;
}
void HeartRates::setYear(int yea)
{
    year = yea;
}
int HeartRates::getYear()
{
    return year;
}
int HeartRates::getAge()
{
    return 2021-year;
}
int HeartRates::getMaxHeartRate()
{
    return 220 - getAge();
}
void HeartRates::getTargetHeartRate()
{
    int max, min;
    max = getMaxHeartRate() * 0.85;
    min = getMaxHeartRate() * 0.5;
    cout << "Max = " <<max << " Min = " << min << endl;

}
