#ifndef GenericClass_h
#define GenericClass_h

bool testGenericClass();

class GenericInformation
{
public:
	int initialBalance;
	double annualInterestRate;
	int totalAmtOfMonthlyDeposit;
	double depositAmt;

	GenericInformation()
	{
		this->initialBalance = 0;
		this->annualInterestRate = 0.06;
		this->totalAmtOfMonthlyDeposit = totalAmtOfMonthlyDeposit;
		this->depositAmt = depositAmt;
	}
	GenericInformation(int intialBalance, double annualInterestRate, double depositAmt)
	{
		this->initialBalance = 0;
		this->annualInterestRate = 0.06;
		this->totalAmtOfMonthlyDeposit = totalAmtOfMonthlyDeposit;
		this->depositAmt = depositAmt;
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
		double updatedbalance = this->initialBalance + depositAmt;
		return updatedbalance;
	}



};

#endif
