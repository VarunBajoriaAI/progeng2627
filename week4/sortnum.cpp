#include <iostream>
using namespace std;
/*int main()
{
    int x,y,z;
    int a,b,c;
    int count=0;
    std::cin>>x>>y>>z;
    for(int i=2;i>=0;i--)
    {
        for(int j=1;j<=3;j++)
        {
            count=0;
            if(j==1)
            {
                a=x;b=y;c=z;
            }
            if(j==2)
            {
                a=y;b=x;c=z;
            }
            if(j==3)
            {
                a=z;b=x;c=y;
            }
            if(a>b)
                count++;
            if(a>c)
                count++;
            
        }
    }
}*/

/*int s[3];
int sort_num(int num[3])
{
    int count=0;
    int temp[3];
    for(int i=2;i>=0;i--)
    {
        for(int j=0;j<=2;j++)
        {
            count=0;
            if(j==1)
            {
                temp[0]=num[j];
                temp[1]=num[j-1];
                temp[2]=num[j+1];
            }
            else if(j==0)
            {
                temp[0]=num[0];
                temp[1]=num[1];
                temp[2]=num[2];
            }
            else if(j==2)
            {
                temp[0]=num[j];
                temp[1]=num[j-1];
                temp[2]=num[j-2];
            }
            for(int k=1;k<3;k++)
            {
                if(temp[0]<temp[k])
                    count++;
            }
            if(count==i)
                s[2-i]=temp[0];
        }
    }
    return (0);
}
int main()
{
    int num[3];
    cin>>num[0]>>num[1]>>num[2];
    int sorted[3];
    sort_num(num);
    int* sptr=s;
    int* destptr=sorted;
    for(int i=0;i<3;i++)
    {
        *destptr=*sptr;
        destptr++;
        sptr++;
    }
    for(int i=0;i<3;i++)
        cout<<sorted[i]<<" ";
    cout<<endl;
}*/
void swap(double& s1, double& s2)
{
    int temp=0;
    temp=s1;
    s1=s2;
    s2=temp;
}
void sort_three_numbers(double& s1, double& s2, double& s3)
{
    double arr[3]= {s1,s2,s3};
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    s1=arr[0];
    s2=arr[1];
    s3=arr[2];
}
int main()
{
    double s1,s2,s3;
    cin>>s1>>s2>>s3;
    sort_three_numbers(s1,s2,s3);
    cout<<s1<<" "<<s2<<" "<<s3<<endl;
}