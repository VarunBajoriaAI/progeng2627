#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream ad;
    ad.open("text.txt");
    vector<string> adv;
    string w;
    while(ad.is_open()&&ad>>w)
    {
        adv.push_back(w);
    }
    fstream tl;
    tl.open("input.txt");
    vector<string> tlv;
    while(tl.is_open()&&tl>>w)
    {
        tlv.push_back(w);
    }
    for(int i=0;i<adv.size();i++)
    {
        for(int j=0;j<tlv.size();j=j+2)
        {
            if(tlv[j]==adv[i])
            {
                adv[i]=tlv[j+1];
            }
        }
    }
    for(int i=0;i<adv.size();i++)
    {
        cout<<adv[i]<<" ";
    }
}