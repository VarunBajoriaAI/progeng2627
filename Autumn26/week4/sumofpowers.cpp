#include <iostream>
int sum_of_powers(int x, int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=std::pow(x,i);
    }
    return sum;
}
int main()
{
    int x;
    int n;
    std::cout <<"Enter x and n"<< std::endl;
    std::cin>> x>>n;
    std::cout <<sum_of_powers(x,n)<<std::endl;
}