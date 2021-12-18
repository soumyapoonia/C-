/* write a cpp program to find the maximum occurring character in a string */

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s,c;
    int count=0,occ=0;

    cout<<"\n\n to find the maximum occurring character in a string\n";
    cout<<"--------------------------------------------------------\n";

    cout<<"Enter the string to find maximum occuring character:  ";
    getline(cin,s);
    for (int i=0;i<s.length();i++)
        {
         for (int j=0;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
        if(count>occ)
        {
            occ=count;
            c=s[i];
        }
        else if(occ==count)
        {
            occ=count;
            c.push_back(s[i]);
        }
        count = 0;
    }
    for(int i=0;i<c.length();i++)
    {
        for(int j=i+1;j<c.length();j++)
        {
            if(c[i]==c[j]);
        }
    }
    cout <<endl<<"Input: "<<s<<endl<<"Output: "<<c<<" char has the maximum occcurance of "<<occ;
    cout<<"\n--------------------------------------------------------\n";
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
}
