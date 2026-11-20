#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main(int agrc, char* argv[])
{
    fstream text;
    text.open(argv[1]);
    string w;
    while(text.is_open()&&text>>w)
    {
        cout<<w<< " ";
    }
}