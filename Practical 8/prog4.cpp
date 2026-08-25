#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    float percentage;

public:
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rollno;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void display()
    {
        if(percentage > 75)
        {
            cout << "\nName: " << name;
            cout << "\nRoll No: " << rollno;
            cout << "\nPercentage: " << percentage << endl;
        }
    }
};

int main()
{
    Student s[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\nStudents having percentage greater than 75:\n";

    for(i = 0; i < 10; i++)
    {
        s[i].display();
    }

    return 0;
}
