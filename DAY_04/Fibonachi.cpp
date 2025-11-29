#include <iostream>
using namespace std;

int fibonachi(int);

int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    int fib = fibonachi(n);
}

int fibonachi(int n)
{
    int res;

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    res = n + fibonachi(n - 1);
    cout << res << endl;
    return res;
}
