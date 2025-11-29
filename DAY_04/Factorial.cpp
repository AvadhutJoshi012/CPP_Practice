#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;

    int fact = factorial(n);
    cout << "Factorial of " << n << " is: " << fact << endl;
}
// SEGMENTATION FAULT (CORE DUMPED) ERROR
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fact = n * factorial(n - 1);
    return fact;
}