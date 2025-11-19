#include <iostream>
using namespace std;

int main()
{

    long long fact = 1;
    int num;
    cout << "CALCULATE FACTORIAL OF NUMBER" << endl;
    cout << "Enter Number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Enter Positive Number";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
    }
    cout << fact;
    return 0;
}