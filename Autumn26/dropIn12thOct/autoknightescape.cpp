#include <iostream>
using namespace std;
int xmoves[8],ymoves[8];
int close_target(int row, int col, int x, int y, int c)
{
    int dx,dy, drow, dcol;
    int mini=1,minj=1;
    xmoves[c]=x;ymoves[c]=y;
    drow=abs(row-x);
    dcol=abs(col-y);//distance from knight
    if(((drow+dcol)==3)&&(drow==1||dcol==1))
    {
        return c;
    }
    else if(c>5)
        return 1000;
    for(int i=1;i<9;i++)
    {
        for(int j=1;j<9;j++)
        {
            dx=abs(x-i);//distance from current square
            dy=abs(y-j);
            if((dx+dy)==3&&(dx==1||dy==1))
            {
                //cout<< "Checking distance from "<< x<< ","<<y << " to " << i<< ","<<j << " currently "<<c<<endl;
                if(close_target(row,col,i,j,c+1)<=close_target(row,col,mini,minj,c+1))
                {
                    mini=i;minj=j;
                    //cout<<"min updated"<<endl;
                    
                }
            }
        }
    }
    //cout<< "distance:" <<close_target(row,col,mini,minj,c+1)<< endl;
    return close_target(row,col,mini,minj,c+1);
}
int main()//creating program to automatically find the most optimal path for a knight to go
// from a random square that isnt a corner to go to a corner
{
    srand(time(NULL));
    int row=1;int col=1;
    while((row==1||row==8)&&(col==1||col==8))
    {
        row = rand() % 8 + 1;
        col = rand() % 8 + 1;
    }
        int a,b, ca=1, cb=1;int c=close_target(row,col,1,1,1);
        for(a=1;a<=8;a=a+7)
        {
            for(b=1;b<=8;b=b+7)
            {
                if(close_target(row,col,ca,cb,1)>close_target(row,col,a,b,1))
                {
                    ca=a;
                    cb=b;
                    c=close_target(row,col,a,b,1);
                }
            }
        }
        close_target(row,col,ca,cb,1);
        cout<<"Knight's position: "<< row<<","<<col<<endl;
        cout<<"Closest corner is "<< ca<< ","<<cb<<endl<<"Number of moves: "<<c<<endl;
        cout<<"Moves: ";
        for(int i=c;i>0;i--)
        {
            cout<<xmoves[i]<<","<<ymoves[i]<<"  ";
        }
        cout<<endl;
    //rol and col is position of knight
    //x and y are the current squares whose distance from knight is being checked
    //dx and dy are the distance
    //a and b coordinates of corner being checked
}
