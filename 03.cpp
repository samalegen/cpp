#include <iostream>

using namespace std;

int main(void)
{
    int x, y;
    cout << "Enter two num: ";
    cin >> x >> y;
    if(x >y)
        cout << x << " is more" << endl;
    else if(y>x)
        cout << y << " is more" << endl;
    else
        cout << "x = y" << endl;

    return 0;

}
