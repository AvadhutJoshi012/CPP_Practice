#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Array Size: ";
    cin >> size;

    int arr[size];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Elements are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Greatest Element is: " << max;
}