#include <iostream>
int main()
{
    int n;int p=1;
    std::cin>> n;
    for(int i=2;i<=n; i++)
    {
        p=1;
        for(int j=2;j<i-1;j++)
        {
            if(i%j==0)
                p=0;
        }
        if(p==1)
            std::cout << i << std::endl;
    }
}