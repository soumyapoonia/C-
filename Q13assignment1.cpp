#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    static int count;
    Student()
    {

        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        count++;
    }
    void display()
    {
        cout << "Name : " << name << endl
             << "Age : " << age << endl;
    }
};
int Student::count = 0;

int main()
{
    Student x;
    Student y;
    Student z;
    cout << "Object Count is : " << Student::count << endl;
    cout << endl;
    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    return 0;
}