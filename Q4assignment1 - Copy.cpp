/* Q4 TO WRITE A C++ PROGRAM TO PERFORM A SURVEY ON FOUR DIFFERENT MODEL OF MARUTI OWNED BY PERSON LIVING IN 4 METRO CITIES */

#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int i,j,choice;
    int survey[4][4];
    int citycode,carcode;
    cout<<"TO PERFORM A SURVEY ON FOUR DIFFERENT MODEL OF MARUTI OWNED BY PERSON LIVING IN 4 METRO CITIES\n";
    cout<<"----------------------------------------------------------------------------------------------\n";
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            survey[i][j]=0;
        }
    }
    do
    {
        cout<<"*main menu*"<<endl;
        cout<<"press[0] for delhi"<<endl;
        cout<<"press[1] for mumbai"<<endl;
        cout<<"press[2] for kolkata"<<endl;
        cout<<"press[3] for chennai"<<endl;
        cout<<"press[0] for k-10"<<endl;
        cout<<"press[1] for zen-estilo"<<endl;
        cout<<"press[2] for wagonar"<<endl;
        cout<<"press[3] for SX4"<<endl;
        cout<<"enter citycode"<<endl;
        cin>>citycode;
        cout<<"enter carcode"<<endl;
        cin>>carcode;
        survey[carcode][citycode]++;
        cout<<"do you want to continue?1 for  yes  0  for no";
        cin>>choice;
    }
    while(choice==1);
    cout<<setw(10)<<"          k-10\t   zen estilo\t   wagonar\t   SX4"<<endl;
         for(i=0;i<4;i++)
         {
             if(i==0)
                cout<<"delhi     ";
             else if(i==1)
                cout<<"\nmumbai    ";
             else if(i==2)
                cout<<"\nkolkata   ";
             else if(i==3)
                cout<<"\nchennai   ";

           for(j=0;j<4;j++)
            {
              cout<<"          "<<survey[i][j]<<"\t";
            }
         }
    cout<<"\n----------------------------------------------------------------------------------------------\n";
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
}
