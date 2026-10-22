#include <iostream>
int main()
{
    int x;
    std::cin>> x;
    std::cout << x << " ";
    while(x!=1)
    {
        if(x%2==0)
        {
            x=x/2;
            std::cout << x << " ";
        }
        else
        {
            x=3*x+1;
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;
}