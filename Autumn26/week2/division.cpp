#include <iostream>
int main()
{
    double x;
    double y;
    int i=0;
    std::cin >> x >> y;
    while(x-y>=0)
    {
        x=x-y;
        i=i+1;
    }
    std::cout << "Quotient: " << i << " Remainder: "<< x<< std::endl;
}