#include <iostream>
#include <GenericClass.h>
using namespace std;
bool testGenericClass()
{
	string fullName;
	int accountId;
	int totalMonthlyAmtOfDeposits = 0;
	double depositAmt;

	//Delete this this stuff. This is just to test to make sure the class works!
	cout << "Working Class -- Generic Information" << endl;
	cout << "Bank account information required"<< endl;

	cout << "Enter full name of account holder: ";
	cin >> fullName;

	cout << "Enter account ID: ";
	cin >> accountId;

	cout << "Please enter the total amount of monthly deposits: ";
	cin >> totalMonthlyAmtOfDeposits;

	GenericInformation InitialStateOfAccount;
	InitialStateOfAccount.getInitialBalance();
	GenericInformation InitDepositAmt;

	for(int i = 0; i < totalMonthlyAmtOfDeposits; i++)
	{
		do{
			cout << "Please enter amount to deposit: ";
			cin >> depositAmt;
			InitDepositAmt.getUpdatedBalanceWithDeposits();
		}
		while(i < InitDepositAmt.getUpdatedBalanceWithDeposits());
	}

	return false;
}
