#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }
}