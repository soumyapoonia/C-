#include <iostream>
using namespace std;

class BankAccount
{
private:
	string Name_of_Depositor;
	string Account_Number;
	string Account_Type;
	int Account_Balance;

public:
	BankAccount(string name, string num, string type, int bal = 0)
	{
		this->Name_of_Depositor = name;
		this->Account_Number = num;
		this->Account_Type = type;
		this->Account_Balance = bal;
	}
	void Deposit(int add)
	{
		Account_Balance += add;
	}
	void Withdraw()
	{
		int rem = 0;
		cout << "\nenter the ammount to withdraw:\n";
		cin >> rem;
		if (Account_Balance - rem >= 0)
		{
			Account_Balance -= rem;
		}
		else
			cout << "\nYour balance is low\n";
	}
	void Display()
	{
		cout << "\nName: " << Name_of_Depositor << "\t\tBalance: " << Account_Balance << endl;
	}
};

int main()
{
	string type, name, accno;
	int ch;
	cout<<"\n-----------------------BANK ACCOUNT---------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------\n"<<endl;
	cout << "enter Account holder's name: ";
	cin >> name;

	cout << "enter Account number:";
	cin >> accno;

	cout << "enter Account type: ";
	cin >> type;

	BankAccount Acc(name, accno, type);
	do
	{
		cout << "Enter your choice: \n1)deposit\n2)withdraw\n3)display\n4)exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			int add;
			cout << "Enter amount to be added:";
			cin >> add;
			Acc.Deposit(add);
			break;
		case 2:
			Acc.Withdraw();
			break;
		case 3:
			Acc.Display();
			break;
		}

	} while (ch!=4);

    cout<<"\n--------------------------------------------------------------------------"<<endl;
    cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
	return 0;
}
