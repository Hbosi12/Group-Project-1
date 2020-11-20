#ifndef GenericClass_h
#define GenericClass_h
using namespace std;
bool testGenericClass();

class GenericInformation
{
private:
	int initialBalance;
	float annualInterestRate;
	int totalAmtOfMonthlyDeposit;

public:
	GenericInformation()
	{
		this->initialBalance = 0;
		this->annualInterestRate = 0.061f;
		this->totalAmtOfMonthlyDeposit = 0;
	}

	GenericInformation(int initialBalance, double annualInterestRate)
	{
		this->initialBalance = 0;
		this->annualInterestRate = 0.061f;
		this->totalAmtOfMonthlyDeposit = 0;
	}

	double setDepositInAccount(int totalMonthlyAmtOfDeposits)
	{
		double deposit = 0;
		double newBalance = 0.0;
		this->totalAmtOfMonthlyDeposit = totalMonthlyAmtOfDeposits;
		for(int i = 0; i < this->totalAmtOfMonthlyDeposit; i++)
		{
				cout << "Please enter amount to deposit: ";
				cin >> deposit;

				newBalance = newBalance + deposit;
		}
		return newBalance;
	}

	double setWithdrawFromAccount()
	{

		return 0;
	}


};
#endif
