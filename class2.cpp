#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
    public:
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
            cout << "Welcome to " << getCourseName() << endl;
        }
    private:
        string courseName;
};

int main(void)
{
    string nameOfcourse;
    GradeBook alexey;
    cout << "Initial course name is " << alexey.getCourseName() << endl;

    cout << "Enter course name: " << endl;

    getline(cin, nameOfcourse);

    alexey.setCourseName(nameOfcourse);
    cout << endl;
    alexey.message();

    return 0;
}


