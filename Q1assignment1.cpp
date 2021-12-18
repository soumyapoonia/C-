/*write a program in C++ to display the multiplication table vertically from 1 to n. */

#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int i,j,n;
    cout<<"\n\n Display the multiplication table vertically from 1 to n:\n";
    cout<<"-------------------------------------------------------------\n";
    cout<<"Input the number upto: ";
    cin>>n;
    cout<<"Multiplication table from 1 to "<<n<<endl;
    for(int i=1;i<=10;i++)
     {
        for(int j=1;j<=n;j++)
        {
            cout<<setw(4)<<j<<"X"<<i<<"="<<i*j;
        }
        cout<<endl;
     }
     cout<<"-------------------------------------------------------------\n";
     cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
     
}

