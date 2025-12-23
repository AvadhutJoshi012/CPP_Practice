#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void insertPerson()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    string course;
    int rollNo;

public:
    void insertStudent()
    {
        insertPerson();
        cout << "Enter Course: ";
        cin >> course;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Course: " << course << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Faculty : public Person
{
private:
    string department;
    float salary;

public:
    void insertFaculty()
    {
        insertPerson();
        cout << "Enter Department Name: ";
        cin >> department;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayFaculty()
    {
        displayPerson();
        cout << "Department is: " << department << endl;
        cout << "Salary is: " << salary << endl;
    }
};

int main()
{
    int choice;

    cout << "1.Enter Student Info." << endl;
    cout << "2.Enter Faculty Info." << endl;
    cout << "Enter Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        Student s;
        cout << "<---Enter Student Info--->" << endl;
        s.insertStudent();
        cout << "<---Student Details--->" << endl;
        s.displayStudent();
    }
    else if (choice == 2)
    {
        Faculty f;
        cout << "<---Enter Faculty Info--->" << endl;
        f.insertFaculty();
        cout << "<---Faculty Details--->" << endl;
        f.displayFaculty();
    }
    else
    {
        cout << "Enter Valid Choice." << endl;
    }

    return 0;
}