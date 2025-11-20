#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int num;
    cout << "Enter Digit: ";
    cin >> num;

    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    cout << "Number of Digits are: " << count;
    return 0;
}