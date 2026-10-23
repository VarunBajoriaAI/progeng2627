#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string temp=s1;
    s1=s2;
    s2=temp;
    cout<<s1<<endl<<s2<<endl;
}