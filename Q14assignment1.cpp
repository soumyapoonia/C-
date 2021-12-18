#include <iostream>
using namespace std;

class Sample
{
public:
    string name;
    int rollno;
    string sec;
    void display()
    {
        cout << "Name : " << name << endl
             << "Roll number : " << rollno << endl
             << "Section : " << sec << endl;
    }
};
int main()
{
    Sample *s = new Sample;
    cout << "Enter rollno: ";
    cin >> s->rollno;
    cout << "Enter name: ";
    cin >> s->name;
    cout << "Enter sec: ";
    cin >> s->sec;
    s->display();
    cout << endl;
    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    return 0;
}