#include <iostream>
using namespace std;

void print(int start, int end)
{
    for (int i = start + 1; i < end; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int a;
    int b;
    cout << "Enter Starting Number: " << endl;
    cin >> a;
    cout << "Enter Ending Number: " << endl;
    cin >> b;

    print(a, b);
}