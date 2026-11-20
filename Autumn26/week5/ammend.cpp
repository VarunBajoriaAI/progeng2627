#include <iostream>
#include <vector>
void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout)
{
    for(int k=0;k<2;k++)
    {
        int length=(k==0)?vin1.size():vin2.size();
        for(int i=0;i<length;i++)
        {
            if(k==0)
                vout.push_back(vin1[i]);
            else
                vout.push_back(vin2[i]);
        }
    }
}
int main()
{
    std::cout<<"Enter number of elements for array 1: ";
    int n,x;
    std::cin>>n;
    std::vector<int> v1;
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter a number: ";
        std::cin>>x;
        v1.push_back(x);
    }
    std::cout<<"Enter number of elements for second vector: ";
    std::cin>>n;
    std::vector<int> v2;
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter a number: ";
        std::cin>>x;
        v2.push_back(x);
    }
    std::vector<int> v3;
    append_vectors(v1,v2,v3);
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" "<<std::endl;
    }
}