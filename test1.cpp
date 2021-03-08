#include <iostream>

using namespace std;


int main() {

    int x = 1234;
    int y = x;
    int z = 1;
    int c = 10;
    while (z <=4) {
        y %=c;
        cout << y;
        ++z;
        c *10;
        y = x;

    }
  //  cout << y;

}
