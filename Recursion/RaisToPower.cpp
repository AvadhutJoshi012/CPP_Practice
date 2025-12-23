#include <iostream>
using namespace std;

int cal(int n, int p)
{
    if (p == 0)
        return 1;
    return n * cal(n, p - 1);
}

int main()
{
    int n;
    cout << "Enter Base value: ";
    cin >> n;
    int p;
    cout << "Enter Power Value: ";
    cin >> p;
    cout << cal(n, p);
}