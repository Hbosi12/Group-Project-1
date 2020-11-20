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
	int totalAmtOfMonthlyWithdraw;
	double newBalance = 0.0;

public:
	GenericInformation()
	{
		this->initialBalance = 0;
		this->annualInterestRate = 0.061f;
		this->totalAmtOfMonthlyDeposit = 0;
		this->totalAmtOfMonthlyWithdraw = 0;
	}

	GenericInformation(int initialBalance, double annualInterestRate)
	{
		this->initialBalance = 0;
		this->annualInterestRate = 0.061f;
		this->totalAmtOfMonthlyDeposit = 0;
		this->totalAmtOfMonthlyWithdraw = 0;
	}

	double setDepositInAccount(int totalMonthlyAmtOfDeposits)
	{
		double deposit = 0;
		this->initialBalance = deposit;
		this->totalAmtOfMonthlyDeposit = totalMonthlyAmtOfDeposits;
		for(int i = 0; i < this->totalAmtOfMonthlyDeposit; i++)
		{
				cout << "Please enter amount to deposit: ";
				cin >> deposit;

				newBalance = newBalance + deposit;
		}
		return newBalance;
	}

	double setWithdrawFromAccount(int totalMonthlyAmtOfWithdraws)
	{
		double withdraw = 0;
		this->totalAmtOfMonthlyWithdraw = totalMonthlyAmtOfWithdraws;
		for(int i = 0; i < this->totalAmtOfMonthlyWithdraw; i++)
		{
				cout << "Please enter amount to deposit: ";
				cin >> withdraw;

				newBalance = newBalance - withdraw;
		}
		return newBalance;
	}


};
#endif
