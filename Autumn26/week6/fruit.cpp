#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>

int search_vector(std::string s, const std::vector<std::string>& vin)
{
    for(int i=0;i<vin.size();i++)
    {
        if(vin[i]==s)
            return 1;
    }
    return 0;
}
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0;i<vin1.size();i++)
    {   
        if(search_vector(vin1[i],vin2)==1)
            vout.push_back(vin1[i]);
    }
}
void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout)
{
    for(int i=0;i<vin1.size();i++)
    {
        vout.push_back(vin1[i]);
    }
    for(int i=0;i<vin2.size();i++)
    {
        vout.push_back(vin2[i]);
    }
}
int main()
{
    std::cout<<"enter names of files of warehouses: ";
    std::string s1,s2;
    std::cin>>s1;
    std::cin>>s2;
    std::fstream infile1;
    std::fstream infile2;
    std::ofstream outfile1;
    std::ofstream outfile2;
    infile1.open("warehouse1.txt");
    infile2.open("warehouse2.txt");
    outfile1.open("intersection.txt");
    outfile2.open("union.txt");
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::string temp;
    if(infile1.is_open()&&infile2.is_open())
    {
    while(infile1>>temp)
    {v1.push_back(temp);}
    while(infile2>>temp)
    {v2.push_back(temp);}
    std::vector<std::string> v3;
    intersection_vector(v1,v2,v3);
    for(int i=0;i<v3.size();i++)
    {
        outfile1<<v3[i];
    }
    v3.clear();
    union_vector(v1,v2,v3);
    for(int i=0;i<v3.size();i++)
    {
        outfile2<<v3[i];
    }
}
}
