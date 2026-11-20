#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    std::ifstream infile;
    infile.open("input.txt");
    std::vector<int> x;
    int y,i=0;
    while(infile>>y)
    {
        x.push_back(y);
    }    
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<",";
    }
    cout<<endl;
}