#include <iostream>
#include "GradeBook.h"

using namespace std;

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
