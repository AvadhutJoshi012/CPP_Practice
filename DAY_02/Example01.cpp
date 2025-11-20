#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    int *ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of pointer: " << ptr << endl;
    cout << "value of num using pointer: " << *ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
}