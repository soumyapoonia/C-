#include <iostream>
using namespace std;
class SampleClass
{
    int a;

public:
    void getdata(int n)
    {
        a = n;
    }
    void display()
    {
        cout<< a <<"\t" <<endl;
    }
};

int main()
{
    int n;
    cout << "enter the size:";
    cin >> n;
    SampleClass obj[n];
    cout << "Enter the values:" <<endl;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        obj[i].getdata(val);
    }

    cout<<"data you entered is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        obj[i].display();
    }

    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    
    return 0;
}