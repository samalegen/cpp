#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;

    cout << "Сумма равна " << a + b + c << endl;

    cout << "Среднее значение " << (a + b + c)/3 << endl;

    cout << "Произведение равно " << a * b * c << endl;

    if(a > b and a > c)
        cout << "Наибольшее " << a << endl;
    else if(b > a and b > c)
        cout << "Наибольшее " << b << endl;
    else
        cout << "Наибольшее " << c << endl;

    if(a < b and a < c)
        cout << "Меньшее число " << a << endl;
    else if(b < a and b < c)
        cout << "Меньшее число " << b << endl;
    else
        cout << "Меньшее число " << c << endl;

    return 0;

}
