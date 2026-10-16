#include <iostream>
int main()
{
    double celsius, fh;
    std::cout << "Enter celsius value" << std::endl;
    std::cin >> celsius;
    fh= celsius*9/5 +32;
    std::cout << "Fahrenheit: " << fh << std::endl;
}