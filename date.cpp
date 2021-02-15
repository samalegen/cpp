#include <iostream>
#include "date.h"
using namespace std;

Date::Date(int day, int month, int year)
{
    setDay(day);
    setMonth(month);
    setYear(year);
}
void Date::setDay(int da)
{
    day = da;
}
int Date::getDay()
{
    return day;
}
void Date::setMonth(int mont)
{
    if (mont >=1 and mont <=12)
        month = mont;
    else
        month = 1;
}
int Date::getMonth()
{
    return month;
}
void Date::setYear(int yea)
{
    year = yea;
}
int Date::getYear()
{
    return year;
}
void Date::display()
{
    cout << getYear() << " / " << getMonth() << " / " << getDay() << endl;
}
