#include <iostream>
using namespace std;

class Sample
{
private:
    string name;
    int rank;

public:
    Sample()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Rank: ";
        cin >> rank;
    }
    void Display()
    {
        cout << "Name : " << name << endl;
        cout << "Rank : " << rank << endl;
    }
    friend void compare(Sample, Sample);
};
void compare(Sample obj1, Sample obj2)
{
    if (obj1.rank < obj2.rank)
    {
        cout << obj1.name << " is topper." << endl;
    }
    else if (obj1.rank == obj2.rank)
    {
        cout << obj1.name << " and " << obj2.name << " are topper." << endl;
    }
    else
    {
        cout << obj2.name << " is topper." << endl;
    }
}
int main()
{
    Sample A;
    Sample B;
    compare(A, B);
    cout << endl;
    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    return 0;
}