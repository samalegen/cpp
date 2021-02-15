#include <iostream>

int main(void)
{
    int num1;
    int num2;
    int sum;

    std::cout << "Enter first integer:";
    std::cin >> num1;
    std::cout << "Enter second integer:";
    std::cin >> num2;
    
    sum = num1 + num2;

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
