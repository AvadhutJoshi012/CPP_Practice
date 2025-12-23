#include <iostream>
using namespace std;

void fun2()
{
    cout << "Inside Function 2" << endl;
}
void fun1()
{
    cout << "Inside Function 1" << endl;
    fun2();
}

int main()
{
    cout << "Inside Main" << endl;
    fun1();
}