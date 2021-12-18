/*Q6 write a c++ program to reverse each word of string */

#include<iostream>
using namespace std;

int main()
{
        string s;
        int begin,end,i,j=0,len,temp,count=0;
        cout<<"\n\nto reverse each word of string\n";
        cout<<"----------------------------------\n";

        cout<<"ENTER STRING: ";
        getline(cin,s);
        len=s.length();
        for(i=0;i<=len;i++)
        {
                 if(s[i]==' ' || s[i]=='\0')
                {
                         for(begin=j,end=i-1;begin<(i+j)/2;begin++,end--)
                         {
                                   temp=s[begin];
                                   s[begin]=s[end];
                                   s[end]=temp;
                         }
                         j=i+1;
                }
         }

       cout<<s<<" ";
       cout<<"\n----------------------------------\n";
       cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;

       return 0;
}
