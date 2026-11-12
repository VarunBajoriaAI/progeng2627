#include <iostream>
int main()
{
    int x,y;
    std::cin>> x >> y;
    int x2,y2;
    std::cin>> x2 >>y2;
    int dx=x2-x;
    int dy=y2-y;
    dx=(dx<0)?-dx:dx;
    dy=(dy<0)?-dy:dy;
    if(dx+dy==3 && x2>0 && y2>0 && x2<9 && y2<9)
    {
        std::cout<< "Valid" << std::endl;
    }
    else
    {
        std::cout<< "Not Valid" << dx << dy << std::endl;
    }
}