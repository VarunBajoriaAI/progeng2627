#include <iostream>
using namespace std;
bool solve(double a, double b, double c, double& x1, double& x2)
{
    double det= b*b-4*a*c;
    if(det<0)
        return false;
    else
    {
        x1=(-b+det)/(2*a);
        x2=(-b-det)/(2*a);
        return true;
    }
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double x1=1,x2=1;
    if(solve(a,b,c,x1,x2))
    {
        cout<< x1<< " "<< x2<< endl;
    }
    else
    {
        cout<<"no real solutions"<<endl;
    }
}