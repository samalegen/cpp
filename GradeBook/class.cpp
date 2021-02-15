#include <iostream>
#include "GradeBook.h"

using namespace std;

int main(void)
{
    GradeBook alexey ( "Cool cours", "Alexey" );
    alexey.getCourseName();
    alexey.message();
    alexey.setCourseName( "Best course" );
    alexey.setAutor( "Alexey Samsonov" );
    alexey.message();
    alexey.setCourseName("Xyunya");
    alexey.setAutor( "Pizdec" );
    alexey.message();
    return 0;
}
