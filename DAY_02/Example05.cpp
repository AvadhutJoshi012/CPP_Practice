#include <iostream>
using namespace std;

void greet(string name)
{
    cout << "Hello, " << name;
}
int main()
{
    string name;
    cout << "Enter Your Name: " << endl;
    cin >> name;
    greet(name);
}