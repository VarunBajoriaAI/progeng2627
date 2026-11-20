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
    std::cout<<"Enter a index: ";
    int t;
    std::cin>>t;  
    std::cout<<v.at(t)<<std::endl;
}