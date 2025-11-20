#include <iostream>
using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int n1;
    int n2;
    cout << "Enter Fist Number: " << endl;
    cin >> n1;
    cout << "Enter Second Number: " << endl;
    cin >> n2;

    int res = add(n1, n2);
    cout << "The Addition is: " << res;
}