#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Program to Find Max Number"<<endl;
    
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<"Enter Third Number:  ";
    cin>>c;

    if (a > b && b > c)
    {
        cout << "A is Max.";
    }
    else if (a < b && b > c)
    {
        cout << "B is Max.";
    }
    else
    {
        cout << "C is Max.";
    }

    return 0;
}