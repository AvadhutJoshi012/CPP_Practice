#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number";
    cin >> num;
    int c_even = 0;
    int c_odd = 0;

    while (num != 0)
    {
        int temp = num;
        temp = temp % 10;
        if (temp % 2 == 0)
        {
            c_even++;
        }
        else
        {
            c_odd++;
        }
        num = num / 10;
    }
    cout << "Even Numbers: " << c_even << endl;
    cout << "Odd Numbers: " << c_odd;
}