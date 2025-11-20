#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    int sq;

    for (int i = 1; i <= num; i++)
    {
        sq = i * i;
        cout << " " << sq;
    }
}