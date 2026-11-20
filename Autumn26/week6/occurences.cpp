#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    fstream word;
    word.open("words.txt");
    vector<string> words;
    string w;
    while(word.is_open()&&word>>w)
    {
        words.push_back(w);
    }
    fstream text;

    text.open("text.txt");
    vector<string> para;
    while(text.is_open()&&text>>w)
    {
        para.push_back(w);
    }
    for(int i=0;i<words.size();i++)
    {
        int c=0;
        for(int j=0;j<para.size();j++)
        {
            if(para[j]==words[i])
                c++;
        }
        cout<<words[i]<<": "<<c<<endl;
    }
}