#include <iostream>
using namespace std;
class Employe
{
private:
    string name;
    int age;
    string ecode;

public:
    Employe(string name, int age, string ecode)
    {
        this->name = name;
        this->age = age;
        this->ecode = ecode;
    }
    void Display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Ecode : " << ecode << endl;
    }
    friend int operator-(Employe, Employe);
};
int operator-(Employe e1, Employe e2)
{
    if (e1.age > e2.age)
        return (e1.age - e2.age);
    else
        return (e2.age - e1.age);
}

int main()
{
    Employe e1("akash", 40, "E001");
    Employe e2("rahul", 30, "E002");
    e1.Display();
    e2.Display();
    int diff = e1 - e2;
    cout << "Age difference between employe-1 and employe-2 is " << diff << endl;
    cout << endl;
    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    
    return 0;
}