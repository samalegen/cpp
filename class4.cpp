#include <iostream>
#include "GradeBook.h"

using namespace std;

int main(void)
{
    GradeBook alexey("Alexey course");
    alexey.message();
    alexey.setCourseName("New Alexey course");
    alexey.message();
    cout << alexey.getCourseName();
    alexey.setCourseName("wwwwww");
    cout << alexey.getCourseName();
    alexey.message();
    cout << alexey.getCourseName();
    return 0;

}
