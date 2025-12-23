#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter Number to print Absolute Value: " << endl;
    cin >> num;

    if (num >= 0)
    {
        cout << num;
    }
    else
    {
        cout << -num;
    }
}