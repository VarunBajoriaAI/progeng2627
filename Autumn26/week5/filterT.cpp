#include <iostream>
#include <vector>
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout)
{
    for(int i=0;i<vin.size();i++)
    {
        if(vin[i]-t<0)
            vout.push_back(vin[i]);
    }
}
int main()
{
    std::cout<<"Enter number of elements for array: ";
    double n,x;
    std::cin>>n;
    std::vector<double> v1;
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter a number: ";
        std::cin>>x;
        v1.push_back(x);
    }
    std::vector<double> v3;
    std::cout<<"Enter t: ";
    double t;
    std::cin>>t;
    filter_v(v1,t,v3);
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" "<<std::endl;
    }
}