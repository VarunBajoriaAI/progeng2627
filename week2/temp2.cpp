#include <iostream>
#include <string>
int main()
{
    double mag, mag_out;
    std::string unit_in, unit_out;


    std::cin >> mag >> unit_in;
    if(unit_in=="c"|| unit_in=="C")
    {
        mag_out= (mag*9/5)+32;
        unit_out= "F";
    }



    else if(unit_in=="f"|| unit_in=="F")
    {
        mag_out= (mag-32)*5/9;
        unit_out= "C";
    }
    else{
        mag_out=0; unit_out=" incorrect unit";
    }
    std::cout << mag_out << unit_out << std::endl;
}