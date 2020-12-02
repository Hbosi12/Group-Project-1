#include <iostream>
#include <GenericClass.h>
using namespace std;
bool testGenericClass()
{
	string fullName;
	int accountId;
	int totalMonthlyAmtOfDeposits;
	int totalMonthlyAmtOfWithdraws;
	double depositAmt;
	double withdrawAmt;

	GenericInformation AccountFinances(0, 0.06);

	cout << "Working Class -- Generic Information" << endl;
	cout << "Bank account information required"<< endl;

	cout << "Enter full name of account holder: ";
	cin >> fullName;

	cout << "Enter account ID: ";
	cin >> accountId;

	cout << "Please enter the total amount of monthly deposits: ";
	cin >> totalMonthlyAmtOfDeposits;

	for(int i = 0; i < totalMonthlyAmtOfDeposits; i++)
	{
		cout << "Please enter deposit amount: ";
		cin >> depositAmt;
		AccountFinances.deposit(depositAmt);
	}

	cout << "Please enter how many withdraws were made this month:  ";
	cin >> totalMonthlyAmtOfWithdraws;

	for(int i = 0; i < totalMonthlyAmtOfWithdraws; i++)
	{
		cout << "Please enter deposit amount: ";
		cin >> withdrawAmt;
		AccountFinances.withdraw(withdrawAmt);
	}

	AccountFinances.calcInt();
	AccountFinances.monthlyProc();


	return false;
}
