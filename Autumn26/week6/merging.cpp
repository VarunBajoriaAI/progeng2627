#include <iostream>
#include <vector>
#include <fstream>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged)
{
    int i1=0,i2=0;
    for(;i1<v1.size()||i2<v2.size();)
    {
        if(i1>=v1.size())
        {
            merged.push_back(v2[i2]);
            i2++;
        }
        else if(i2>=v2.size())
        {    
            merged.push_back(v1[i1]);
            i1++;
        }
        else if(v1[i1]>v2[i2])
        {   
            merged.push_back(v2[i2]);
            i2++;
        }
        else
        {
            merged.push_back(v1[i1]);
            i1++;
        }
    }
}
int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    for(int i=0;i<out.size();i++)
        std::cout<<out[i]<<" ";
}