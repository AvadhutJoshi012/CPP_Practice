#include <iostream>
using namespace std;
#include <string>

int main()
{
    string name = "Avadhut";
    cout << name << endl;

    string surname;
    cout << name << " Enter Your Surname: ";
    cin >> surname;

    cout << "Hii, " << name << " " << surname << endl;

    cin.ignore();
    string fullname;
    cout << "Enter Your Friend Name: ";
    getline(cin, fullname);

    cout << fullname;
    cout << fullname.length();
}