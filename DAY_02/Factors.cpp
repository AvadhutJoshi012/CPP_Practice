#include <iostream>
using namespace std;

void calFact(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int num;

    cout << "Enter Number To Print Factors: ";
    cin >> num;

    calFact(num);
}