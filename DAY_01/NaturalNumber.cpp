#include <iostream>
using namespace std;

int main()
{
    // int i = 0;
    int sum = 0;
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}