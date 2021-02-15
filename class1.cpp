#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    public:
        void message(string name)
        {
            cout << "Welcome " << name << endl; 
        }
    public:
        void fuck(string name, int num)
        {
            cout << "Fuck you " << name << " " << num << " times!" << endl;
        }
};

class Welcome
{
    public:
        void mes(string name)
        {
            cout << "Hi " << name << "!" << endl;
        }
};

int main(void)
{
    GradeBook alexey;
    Welcome boss;
    string name;
    int num;
    cout << "Enter you name:\n"; 
    getline(cin, name);
    cout << "Enter count: " << endl;
    cin >> num;

    alexey.message(name);
    alexey.fuck(name, num);
    boss.mes(name);

    return 0;

}
