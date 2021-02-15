#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int num1;
    int num2;

    cout << "Enter two numbers to compare: ";
    cin >> num1 >> num2;

    if (num1 == num2)
        cout << num1 << "==" << num2 << endl;

    if (num1 < num2)
        cout << num1 << "<" << num2 << endl;

    if (num1 > num2)
        cout << num1 << ">" << num2 << endl;

    if (num1 != num2)
        cout << num1 << "!=" << num2 << endl;

    if (num1 <= num2)
        cout << num1 << "<=" << num2 << endl;

    if (num1 >= num2)
        cout << num1 << ">=" << num2 << endl;


    return 0;


}
