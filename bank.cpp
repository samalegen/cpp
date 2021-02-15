#include <iostream>
#include "accaunt.h"

using namespace std;

int main(void)
{
    Accaunt alexey(0);
    alexey.setBalans(50);
    cout << alexey.getBalans();
    return 0;
}
