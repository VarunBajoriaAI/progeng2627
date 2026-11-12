#include <iostream>
int main()
{
    int x;
    int n;
    int ans=1;
    std::cin >> x >> n;
    for(int i=0;i<n;i++)
    {
        ans=ans*x;
    }
    std::cout << ans << std::endl;
}