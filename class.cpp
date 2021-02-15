#include <iostream>

using namespace std;

class GradeBook
{
    public:
        void displayMessage()
        {
            cout << "Welcome\n";
        }
};

int main()
{
    GradeBook myGradeBook;

    myGradeBook.displayMessage();
    GradeBook alexey;

    alexey.displayMessage();

    return 0;
}
