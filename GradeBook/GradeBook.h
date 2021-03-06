//#include <iostream>
#include <string>

using std::string;

class GradeBook
{
    public:
        GradeBook(string, string);
        void setCourseName(string);
        string getCourseName();
        void setAutor(string);
        string getAutor();
        void message();
        void determineClassAverage();
    private:
        string courseName;
        string autorCourse;
};
