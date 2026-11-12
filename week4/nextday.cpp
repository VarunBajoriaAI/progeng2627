#include <iostream>
using namespace std;
bool leap_year(int x)
{
    if(x%4==0&&x%100!=0||x%400==0)
        return true;
    return false;
}
void nextday(int d1, int m1, int y1, int& d2, int& m2, int& y2)
{
    d2=d1;
    m2=m1;
    y2=y1;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(leap_year(y1))
        month[1]=month[1]+1;
        cout<<month[1];
    if(d1<month[m1-1])
    {
        d2=d1+1;
    }
    else if(m1<12)
    {
        d2=1;
        m2=m1+1;
    }
    else
    {
        d2=1;
        m2=1;
        y2=y1+1;
    }
}
int main()
{
    int d1,m1,y1,d2,m2,y2;
    cin>>d1>>m1>>y1;
    nextday(d1,m1,y1,d2,m2,y2);
    cout<<d2<<"/"<<m2<<"/"<<y2<<endl;
}
