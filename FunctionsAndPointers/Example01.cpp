#include <iostream>
using namespace std;

void india()
{
    cout << "This is inside India." << endl;
}

void usa()
{
    cout << "This is inside USA." << endl;
}

int main()
{
    cout << "You are in Main Function." << endl;
    india();
    usa();
}