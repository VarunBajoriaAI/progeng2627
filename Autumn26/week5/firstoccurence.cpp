#include <iostream>
#include <vector>
int index(int x, std::vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        if(x==v[i])
        {
            return(i);
        }
    }
    return -1;
}
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
    std::cout<<"Enter number to be found : ";
    std::cin>>x;
    std::cout<<index(x,v)<<std::endl;
}