#include <iostream>
using namespace std;

int add(int a, int b)
{
    int sum = 0;
    return sum = a + b;
}

int main()
{
    int a, b;
    cout << "Enter 1st Num: " << endl;
    cin >> a;
    cout << "Enter 2nd Num: " << endl;
    cin >> b;

    int res = add(a, b);
    cout << "Addition is: " << res;
}