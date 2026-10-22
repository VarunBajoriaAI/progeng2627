#include <iostream>
int main()
{
    int acc=1;
    int counter=0;
    int count;
    int x;
    std::cin >> x;
    std::cin >> count;
    while(counter< count)
    {
        acc=acc*x;
        counter=counter+1;
    }
    std::cout << acc << std::endl;
}