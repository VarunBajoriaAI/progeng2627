#include <iostream>
#include <fstream>
#include <cstdlib>
int main()
{
    std::ofstream outfile;
    outfile.open("input.txt");
    if(!outfile.is_open())
    {
        std::cout<<"File could not open";
        return EXIT_FAILURE;
    }
    outfile<<"hello";
    outfile.close();
}