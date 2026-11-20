#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v;
    int n; int x;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter a number: ";
        std::cin>>x;
        v.push_back(x);
    }
    std::cout<<"Enter number to be found: ";
    std::cin>>x;
    int num=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==x)
            num++;
    }
    std::cout<<num<<" occurences of "<<x;
}