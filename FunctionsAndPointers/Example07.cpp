#include <iostream>
using namespace std;

int swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << x << " " << y << endl;
}

int main()
{
    int a = 10;
    int b = 15;
    cout << a << " " << b << endl;
    swap(a, b);
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << a << " " << b << endl;
}