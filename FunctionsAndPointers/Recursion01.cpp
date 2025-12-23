#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        cout << n << endl;
        return;
    }
    print(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    print(n);
}