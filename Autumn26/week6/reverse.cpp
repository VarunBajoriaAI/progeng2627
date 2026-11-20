#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cout<<"1 for Words, 2 for Numbers";
    int x;
    cin>>x;
    if(x==1)
    {
        string read;
        fstream infile;
        ofstream outfile;
        infile.open("input.txt");
        outfile.open("output.txt");
        vector<string> v;
        while(infile>>read)
        {
            v.push_back(read);
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            outfile<<v[i]<<",";
        }
    }
    else
    {
        int read;
        fstream infile;        
        ofstream outfile;
        infile.open("input.txt");
        outfile.open("output.txt");
        vector<int> v;
        while(infile>>read)
        {
            v.push_back(read);
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            outfile<<v[i]<<",";
        }
    }
    
    
}