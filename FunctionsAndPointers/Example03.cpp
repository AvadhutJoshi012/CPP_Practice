#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a;
    cout << "Enter First Value: ";
    cin >> a;
    int b;
    cout << "Enter Second Value: ";
    cin >> b;

    cout << "The Addition is: " << sum(a, b);
}