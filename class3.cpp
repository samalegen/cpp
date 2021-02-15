#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    public:
        GradeBook(string name) // Конструктор
        {
            setCourseName(name);
        }
        void setCourseName(string name)
        {
            courseName = name;
        }
        string getCourseName()
        {
            return courseName;
        }
        void message()
        {
            cout << "Welcome to " << getCourseName() << '!' << endl;
        }
    private:
        string courseName;
};

int main()
{
    string nameCourse;
    GradeBook myGradeBook ("Alexey course");
    cout << "Initial course name is " << myGradeBook.getCourseName() << endl;
    getline(cin, nameCourse);
    myGradeBook.setCourseName(nameCourse);
    cout << endl;
    cout << "Now course name is " << myGradeBook.getCourseName() << endl;
    myGradeBook.message();
    return 0;

    
}
