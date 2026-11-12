#include <iostream>
int main()
{
    int x;
    std::cin >> x;
    int ans=1;
    for(;x>=1;x--)
    {
        ans=ans*x;
    }
    std::cout << ans << std::endl;
}