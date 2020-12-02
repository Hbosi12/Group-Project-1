#ifndef GenericClass_h
#define GenericClass_h
#define MONTHS_IN_YEAR 12
using namespace std;
bool testGenericClass();

class GenericInformation
{
private:
	double balance;
	int numberOfDepositsThisMonth;
	int numberOfWithdrawals;
	double annualInterestRate;
	double monthlyServiceCharges;

public:
	GenericInformation(double balance, double annualInterestRate)
	{
		this->balance = balance;
		this->numberOfDepositsThisMonth = 0;
		this->numberOfWithdrawals = 0;
		this->annualInterestRate = annualInterestRate;
		this->monthlyServiceCharges = 0.01;
	}

	virtual ~GenericInformation()
	{

	}

	virtual void deposit (double depositAmt)
	{
		this->balance = this->balance + depositAmt;
		numberOfDepositsThisMonth++;
	}

	virtual void withdraw (double withdrawAmt)
	{
		this->balance = this->balance - withdrawAmt;
		numberOfWithdrawals++;
	}

	virtual void calcInt ()
	{
		double monthlyInterestRate = this->annualInterestRate / MONTHS_IN_YEAR;
		double monthlyInterest = this->balance * monthlyInterestRate;
		double interestRateBalance = this->balance + monthlyInterest;
	}

	virtual void monthlyProc ()
	{
		this->balance = this->balance - this->monthlyServiceCharges;
		calcInt();
		numberOfWithdrawals = 0;
		numberOfDepositsThisMonth = 0;
		this->monthlyServiceCharges = 0;
	}

};
#endif
