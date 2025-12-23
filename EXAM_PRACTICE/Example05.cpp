#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number to check Even or Odd: " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is EVEN.";
    }
    else
    {
        cout << "Number is ODD.";
    }
}