#include <iostream>
int mypow(int x, int j)
{
    
    for(int i=1;i<j;i++)
    {
        x=x*x;
    }
    return x;
}
int main()
{
    int x,n,sum=0;
    std::cin>>x>>n;
    for(int j=1;j<=n;j++)
    {
        sum+=mypow(x,j);
    }
    std::cout<<sum<<std::endl;
}