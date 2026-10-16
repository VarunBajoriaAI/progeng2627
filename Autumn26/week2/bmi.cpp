#include <iostream>
using namespace std;
int main()
{
    double weight, height;
    cout << "Enter weight in kg and height in meters: " << endl;
    cin >> weight;
    cin >> height;
    double bmi= weight/(height*height);
    cout << "BMI= " << bmi << endl;
}