#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v;

    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    std::cin>>v[0];
    std::cin>>v[1];
    std::cin>>v[2];
    std::cout<<v[0]<<std::endl;
    std::cout<<v[1]<<std::endl;
    std::cout<<v[2]<<std::endl;
}