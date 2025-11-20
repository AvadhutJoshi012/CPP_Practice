#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num;

    cout << num << endl;
    *ptr = 50;
    cout << num;
}