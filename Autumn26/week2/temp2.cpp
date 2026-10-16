#include <iostream>
#include <string>
using namespace std;
int main()
{
    double mag, mag_out;
    string unit_in,unit_out;
    cin>> mag >> unit_in;
    if(unit_in=="c"|| unit_in=="C")
    {
        mag_out= (mag*9/5)+32;
        unit_out= "F";
    }
    if(unit_in=="f"|| unit_in=="F")
    {
        mag_out= (mag-32)*5/9;
        unit_out= "C";
    }
    cout << mag_out << unit_out << endl;
    cout << mag << unit_in << endl;
}