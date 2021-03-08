#include <iostream>
#include "GradeBook.h"

using std::string, std::cout, std::cin, std::endl;

GradeBook::GradeBook( string name, string autor )
{
    setCourseName( name );
    setAutor( autor );
}


void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 10 )
        courseName = name;

    if ( name.length() > 10 )
    {
        courseName = name.substr(0, 10);
        cout << "More then 10 chars" << endl;
    }
}


string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::setAutor( string autor )
{
    autorCourse = autor;
} 

string GradeBook::getAutor()
{
    return autorCourse;
}


void GradeBook::message()
{
    cout << "Course name is " << getCourseName() << endl;
    cout << "Autor name is " << getAutor() << endl;
}

void GradeBook::determineClassAverage() {
    int total;
    int gradeCounter;
    int grade;
    int average;

    total = 0;
    gradeCounter = 1;

    while (gradeCounter < 10) {
        cout << "Enter Grade: ";
        cin >> grade;
        total += grade;
        gradeCounter += 1;
    }
    average = total / 10;
    cout << "Total = " <<  total << endl;
    cout << "Average = " << average << endl;
}   
