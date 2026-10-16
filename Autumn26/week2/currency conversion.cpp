#include <iostream>
using namespace std;
int main()
{
    double amtGBP;
    double rate;
    cout << "Enter amount in GBP and rate" << endl;
    cin >> amtGBP;
    cin >> rate;
    double amtEuro= amtGBP*rate;
    cout << "Euros: " << amtEuro << endl;
}