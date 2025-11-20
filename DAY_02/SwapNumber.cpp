#include <iostream>
using namespace std;

int swap(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
    cout << n1 << " " << n2 << endl;
}

int main()
{
    int n1;
    int n2;

    cout << "Enter 1st Number" << endl;
    cin >> n1;
    cout << "Enter 2nd Number" << endl;
    cin >> n2;
    cout << n1 << " " << n2 << endl;

    int res = swap(n1, n2);
}