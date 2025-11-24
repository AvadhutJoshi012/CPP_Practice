#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are Eligible To Vote.";
    }
    else if (age <= 0)
    {
        cout << "Enter Valid Age.";
    }
    else
    {
        cout << "You are Under 18 Cannot Vote.";
    }
}