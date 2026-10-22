#include <iostream>
int main()
{
    int c; 
    std::cin >> c;
    int m=c;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            std::cout << m<< "\t";
            m=m+c;
        }
        std::cout << std::endl;
    }
}