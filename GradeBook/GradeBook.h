//#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    public:
        GradeBook(string, string);
        void setCourseName(string);
        string getCourseName();
        void setAutor(string);
        string getAutor();
        void message();
    private:
        string courseName;
        string autorCourse;
};
