#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    int num;
    cout << "Enter Element to Find: ";
    cin >> num;

    for (int i = 0; i < 5; i++)
    {
        if (num == arr[i])
        {
            cout << "Found at index: " << i;
        }
    }
}