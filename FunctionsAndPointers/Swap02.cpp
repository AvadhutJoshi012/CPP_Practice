#include <iostream>
using namespace std;

int main()
{
    cout << "SWAP TWO NUMBERS WITHOUT USING TEMP(THIRD VARIABLE)." << endl;

    int a = 5;
    int b = 10;
    cout << a << " " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b << endl;
}