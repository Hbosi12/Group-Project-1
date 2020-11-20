#ifndef GenericClass_h
#define GenericClass_h

bool testGenericClass();

class GenericInformation
{
public:
	int initialBalance;
	float annualInterestRate;
	int totalAmtOfMonthlyDeposit;
	double depositAmt;

	GenericInformation()
	{
		this->initialBalance = 0;
		this->annualInterestRate = 0.061f;
		this->totalAmtOfMonthlyDeposit = totalAmtOfMonthlyDeposit;
		this->depositAmt = 0.00;
	}
	GenericInformation(int initialBalance, double annualInterestRate, double depositAmt)
	{
		this->initialBalance = 0;
		this->annualInterestRate = 0.06;
		this->totalAmtOfMonthlyDeposit = totalAmtOfMonthlyDeposit;
		this->depositAmt = depositAmt;
	}

	int getTotalAmtOfMonthlyDeposit(double)
	{
		return this->totalAmtOfMonthlyDeposit;
	}

	int getInitialBalance()
	{
		return this->initialBalance;
	}

	double getAnnualInterestRate()
	{
		return this->annualInterestRate;
	}

	double getUpdatedBalanceWithDeposits()
	{
		double updatedBalance = this->initialBalance + depositAmt;
		initialBalance = updatedBalance;
		return updatedBalance;
	}



};

#endif
