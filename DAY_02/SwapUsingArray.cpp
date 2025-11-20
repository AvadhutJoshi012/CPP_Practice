#include <iostream>
using namespace std;

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int n1;
    int n2;

    cout << "Number 1: " << endl;
    cin >> n1;
    cout << "Number 2: " << endl;
    cin >> n2;

    cout << n1 << " " << n2 << endl;
    swap(&n1, &n2);

    cout << n1 << " " << n2 << endl;
}