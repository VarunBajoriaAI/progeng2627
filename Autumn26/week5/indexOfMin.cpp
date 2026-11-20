#include <iostream>
#include <vector>
int main()
{
    std::cout<<"Enter number of elements: ";
    int n,x;
    std::cin>>n;
    std::vector<int> v;
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter a number: ";
        std::cin>>x;
        v.push_back(x);
    }
    int minIndex=0;
    if(n==0)
        minIndex=-1;
    for(int i=0;i<n;i++)
    {
        if(v[minIndex]>v[i])
        {
            minIndex=i;
        }
    }
    std::cout<<minIndex<<std::endl;
}