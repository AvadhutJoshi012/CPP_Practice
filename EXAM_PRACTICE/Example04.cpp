#include <iostream>
using namespace std;

int main()
{
    char ch;
    int a;

    cout << "Enter Character to know the ASCII value: " << endl;
    cin >> ch;
    int x = (int)ch;
    cout << "ASCII value is: " << x << endl;

    cout << "Enter ASCII value to know the Character: " << endl;
    cin >> a;
    char y = (char)a;
    cout << "Character is: " << y << endl;
}