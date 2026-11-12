#include <iostream>
using namespace std;

int main()
{
    cout << "Enter year: " << endl;
    int year;
    cin >> year;
    bool m4= year%4==0;
    bool m100= year%100==0;
    bool m400= year%400==0;
    if (m4 && !m100 || m400)
        cout << "leap year" << endl;
    else
        cout << "not leap year" << endl;
}