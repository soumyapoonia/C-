/* TO DISPLAY THE SUM OF SERIES[9+99+999+9999...] */

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"\n\nTO DISPLAY THE SUM OF SERIES[9+99+999+9999...]\n\n";
    cout<<"----------------------------------------------------\n";
    cout<<"enter the value of n:\n";
    cin>>n;

    while(n)
    {
        sum=sum*10+9;
        cout<<sum<<" ";
        n--;
    }
    cout<<"\n";
    cout<<"----------------------------------------------------\n";
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;

}
