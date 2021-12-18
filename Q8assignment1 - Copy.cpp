#include <iostream>
#include <iomanip>
using namespace std;
class TelCall
{
private:
    string phn;
    string name;
    int n;
    int amt = 0;

public:
    TelCall(string phn, string name, int n)
    {
        this->phn = phn;
        this->name = name;
        this->n = n;
    }
    void compute()
    {
        if (0 < n && n <= 100)
        {
            amt = 500;
        }
        else if (100 < n && n <= 200)
        {
            amt = (500 + 1 * (n - 100));
        }
        else if (200 < n && n <= 300)
        {
            amt = (500 + 100 * 1 + (n - 200) * 1.2);
        }
        else
        {
            amt = (500 + 100 * 1 + 100 * 1.2 + (n - 300) * 1.5);
        }
    }
    void display()
    {
        cout<<"\n--------------------------------------------------------------------------\n"<<endl;
        cout << setw(20) << "BILL DETAIL" << endl;
        cout<<"\n--------------------------------------------------------------------------\n"<<endl;
        cout << setw(15) << "SUBSCRIBER's NAME :" << setw(15) << name << endl;
        cout << setw(15) << "PHONE NUMBER :" << setw(15) << phn<< endl;
        cout << setw(15) << "CALLS MADE :" << setw(15) << n << endl;
        cout << setw(15) << "DUE AMMOUNT :" << setw(15) << amt << endl;
    }
};
int main()
{
    TelCall p1("8445326329", "soumya poonia", 500);
    p1.compute();
    p1.display();
    cout<<"\n--------------------------------------------------------------------------\n"<<endl;
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
    cout<<"\n--------------------------------------------------------------------------\n"<<endl;
    return 0;
}

