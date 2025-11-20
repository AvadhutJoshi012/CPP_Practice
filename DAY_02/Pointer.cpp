#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int *ptr = &n;

    cout << n << endl;      //value
    cout << &n << endl;     //address of variable(n)
    cout << ptr << endl;    //value (address of n)
    cout << &ptr << endl;   //address of variable(ptr)
    cout<<*ptr<<endl;       //value of n
    
}