#include <iostream>
int fact(int x)
{
    if(x>1)
    {
        return x*fact(x-1);
    }
    return 1;
}
int main()
{
    int x;
    std::cin>>x;
    std::cout<<fact(x)<<std::endl;
}
