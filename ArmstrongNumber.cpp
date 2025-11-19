#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    int count = 0;
    int reminder = 0;
    int res = 0;
    cout << "Enter Number To Check it is Armstrong or Not: ";
    cin >> num;
    int temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    // cout << count;

    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        res = res + (int)round(pow(reminder, count));
        temp = temp / 10;
    }

    if (res == num)
    {
        cout << "It is an Armstrong Number.";
    }
    else
    {
        cout << "It is NOt Armstrong Number.";
    }

    return 0;
}