#include <iostream>
using namespace std;

int rec(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int res = rec(n - 1);
    cout << res << endl;
    return n;
}

int main()
{
    int n = 5;
    int res = rec(n);
    cout << res << endl;
}