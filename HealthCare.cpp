#include <iostream>
#include "HealthCare.h"
using namespace std;

HealthCare::HealthCare(string name, string surname, string sex, int day, int month, int year, int weight, int height)
{
    setName(name);
    setSurname(surname);
    setSex(sex);
    setDay(day);
    setMonth(month);
    setYear(year);
    setWeight(weight);
    setHeight(height);
}
void HealthCare::setName(string setname)
{
    name = setname;
}
void HealthCare::setSurname(string setsurname)
{
    surname = setsurname;
}
void HealthCare::setSex(string setsex)
{
    sex = setsex;
}
void HealthCare::setDay(int setday)
{
    day = setday;
}
void HealthCare::setMonth(int setmonth)
{
    month = setmonth;
}
void HealthCare::setYear(int setyear)
{
    year = setyear;
}
void HealthCare::setWeight(int setweight)
{
    weight = setweight;
}
void HealthCare::setHeight(int setheight)
{
    height = setheight;
}
string HealthCare::getName()
{
    return name;
}
string HealthCare::getSurname()
{
    return surname;
}
string HealthCare::getSex()
{
    return sex;
}
int HealthCare::getDay()
{
    return day;
}
int HealthCare::getMonth()
{
    return month;
}
int HealthCare::getYear()
{
    return year;
}
int HealthCare::getWeight()
{
    return weight;
}
int HealthCare::getHeight()
{
    return height;
}

void HealthCare::getInfo()
{
    int BMI = getWeight()/(getHeight()*getHeight());
    cout << "Name:\t" << getName() << endl;
    cout << "Surname:\t" << getSurname() << endl;
    cout << "sex:\t" << getSex() << endl;
    cout << "Date born:\t" << getDay() << "."<< getMonth()<<"."<<getYear()<< endl;
    cout << "Age:\t" << 2021 - getYear() << endl;
    cout << "Height:\t" << getHeight() << endl;
    cout << "Weight:\t" << getWeight() << endl;
    if (BMI >30)
    {
        cout << "BMI:\t" << BMI << "Very Fat" << endl;
    }
    else if (BMI < 30 and BMI > 25)
    {
        cout << "BMI:\t" << BMI << "Fat" << endl;
    }
    else if (BMI < 25 and BMI > 18)
    {
        cout << "BMI:\t" << BMI << "norma" << endl;
    }
    else
    {
        cout << "BMI:\t" << BMI << "less"<< endl;
    }
}
void HealthCare::setInfo()
{
    string name, surname, sex;
    int day, month, year, weight, height;
    cout << "Enter name: " << endl;
    cin >> (name); setName(name);
    cout << "Enter surmane: " << endl;
    cin >> (surname); setSurname(surname);
    cout << "Enter sex: " << endl;
    cin >> (sex); setSex(sex);
    cout << "Enter day: " << endl;
    cin >> (day); setDay(day);
    cout << "Enter month: " << endl;
    cin >> (month); setMonth(month);
    cout << "Enter year: " << endl;
    cin >> (year); setYear(year);
    cout << "Enter weight: " << endl;
    cin >> (weight); setWeight(weight);
    cout << "Enter height: " << endl;
    cin >> (height); setHeight(height);

}
