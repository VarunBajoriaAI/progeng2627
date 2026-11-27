#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

vector<double> line_to_vector(string s)
{
    stringstream ss;
    ss<<s;
    string tmp;
    vector<double> v;
    while(ss>>tmp)
    {
        v.push_back(stod(tmp));
    }
    return v;
}
vector<vector<double>> read_matrix_from_file(string file)
{
    fstream infile;
    infile.open(file);
    if(!infile.is_open())
    {
        cout<<"unable to open file";
        exit(EXIT_FAILURE);
    }
    string line;
    vector<vector<double>> m;
    while(getline(infile,line))
    {
        m.push_back(line_to_vector(line));
    }
    return m;
}
vector<vector<double>> matrix_addition(
    vector<vector<double>> m1,
    vector<vector<double>> m2
)
{
    vector<vector<double>> m3;
    for(int i=0;i<m1.size();i++)
    {
        vector<double> row;
        for(int j=0;j<m1[0].size();j++)
        {
            row.push_back(m1[i][j]+m2[i][j]);
        }
        m3.push_back(row);
    }
    return m3;
}
string matrix_to_file(vector<vector<double>> m)
{
    stringstream ss;
    ss<<fixed<<setprecision(2);
    for(int i=0;i<m.size();i++)
    {
        for(int j=0;j<m[0].size();j++)
        {
            ss<<m[i][j]<<"\t";
        }
        ss<<"\n";
    }
    return ss.str();
}
int main(int argc, char* argv[])
{
    if(argc!=3)
    {
        cout<<"two arguments needed";
        exit(EXIT_FAILURE);
    }
    string input1=argv[1];
    string input2=argv[2];
    vector<vector<double>> m1;
    m1=read_matrix_from_file(input1);
    vector<vector<double>> m2;
    m2=read_matrix_from_file(input2);
    vector<vector<double>> m3;
    m3=matrix_addition(m1,m2);
    cout<<matrix_to_file(m1)<<endl<<"+"<<endl<<matrix_to_file(m2)<<endl<<"="<<endl<<matrix_to_file(m3)<<endl;

}
