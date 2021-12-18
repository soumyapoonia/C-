#include <iostream>
using namespace std;

namespace A
{
    int x;
} 
namespace B
{
    int x;
} 
int main()
{
    cout << "Enter value to x in scope A: ";
    cin >> A::x;

    cout << "Enter value to x in scope B: ";
    cin >> B::x;
    cout << "value of x in scope A is :" << A::x << endl;
    cout << "value of x in scope B is :" << B::x << endl;
    cout << endl;
    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    return 0;
}