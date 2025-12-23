#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number To Check it is divisible of 5 or not: " << endl;
    cin >> num;

    if (num % 5 == 0)
    {
        cout << "It is Divisible by 5.";
    }
    else
    {
        cout << "It is Not Divisible by 5.";
    }
}