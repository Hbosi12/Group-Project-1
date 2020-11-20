#include <iostream>
#include <GenericClass.h>
using namespace std;
bool testGenericClass()
{
	string fullName;
	int accountId;
	int totalMonthlyAmtOfDeposits;

	GenericInformation InitialStateOfAccount;

	//Delete this this stuff. This is just to test to make sure the class works!
	cout << "Working Class -- Generic Information" << endl;
	cout << "Bank account information required"<< endl;

	cout << "Enter full name of account holder: ";
	cin >> fullName;

	cout << "Enter account ID: ";
	cin >> accountId;

	cout << "Please enter the total amount of monthly deposits: ";
	cin >> totalMonthlyAmtOfDeposits;

	InitialStateOfAccount.setDepositInAccount(totalMonthlyAmtOfDeposits);



	return false;
}
