/*Q5 write a c++ program to read a table elements into 2D array temprature and to find the city and day corresponding to the highest and lowest temprature */

#include <iostream>
using namespace std;
#include<iomanip>
int main()
{
  float arr[5][5];
  cout<<"\n\n to read a table elements into 2D array temprature and to find the city and day corresponding to the highest and lowest temprature\n";
  cout<<"--------------------------------------------------------------------------------------------------------------------------------------\n";
  string cities[]={"delhi","mumbai","kolkata","chennai","dehradun"};
  int max,min,m1,m2,l1,l2;
  for(int i=0;i<5;i++)
  {
      cout<<"\n\nenter temprature for day"<<i+1<<"::";
      for(int j=0;j<5;j++)
      {
         if(j==0){cout<<"\nDELHI:";}
         else if(j==1)
         {cout<<"\nMUMBAI:";}
         else if(j==2)
         {cout<<"\nKOLKATA:";}
         else if(j==3)
         {cout<<"\nCHENNAI";}
         else if(j==4)
         {cout<<"\nDEHRADUN:";}
         cin>>arr[i][j];
         if(i==0&&j==0)
         {
             max=arr[i][j];
             min=arr[i][j];
         }

         if(arr[i][j]>max)
         {max=arr[i][j];
         m1=i;
         m2=j;}

         else if(arr[j][j]<min)
         {
             min=arr[i][j];
             l1=i;
             l2=j;
         }
      }
  }
  cout<<"\n\n***********************************************recorded table***********************************************************\n\n";
  cout<<"day \tDelhi      \tMumbai     \tKolkata    \tChennai    \tDehradun\n";
  for(int i=0;i<5;i++)
  {
      cout<<""<<i+1<<" \t";
      for(int j=0;j<5;j++)
      {
          cout<<setw(8)<<arr[i][j]<<"\t";
      }
      cout<<endl;
  }
  cout<<"\n\nmaximum temperaure is "<<arr[m1][m2]<<"at day "<<m1+1<<"in city "<<cities[m2]<<"\n";
  cout<<"\n\nminimum temperaure is "<<arr[l1][l2]<<"at day "<<l1+1<<"in city "<<cities[l2]<<"\n";
  cout<<"--------------------------------------------------------------------------------------------------------------------------------------\n";
  cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
 return 0;
}
