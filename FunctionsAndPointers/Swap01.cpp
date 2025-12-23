#include <iostream>
using namespace std;

int main()
{
    cout << "SWAP TWO NUMBERS USING TEMP (THIRD VARIABLE)" << endl;
    int a = 5;
    int b = 10;
    cout << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}