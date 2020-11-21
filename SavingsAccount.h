
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <iostream>
#include <iomanip>
#include "BankAccount.h"

using namespace std;

class SavingsAccount : public BankAccount{
private:
    
    bool status;
    bool Active = true;
    bool Inactive = false;

public:
    
    SavingsAccount(double b, double air) :
        BankAccount(b, air)
    {
        if(balance >= 25){
            status = Active;
        }
        
        else{
            status = Inactive;
        }
    }

    
    bool getStatus() const{
        return status;
    }
    
    virtual void withdraw(double w){   
        if(status == Active){    
            BankAccount::withdraw(w);

            if(balance < 25)
                status = Inactive;
        }
        else{
            cout << fixed << setprecision(2);
            cout << "Withdrawal failed! Savings account ";
            cout << "is inactive (Current balance: $";
            cout << balance << ")" << endl;
        }
    }

    virtual void deposit(double d){
        if(status == Inactive){
            if(d + balance >= 25){
                BankAccount::deposit(d);
            }
            else{
                cout << fixed << setprecision(2);
                cout << "Deposit failed! Savings account will";
                cout << " be inactive after deposit!\n($";
                cout << balance << " + $" << d;
                cout << " = $" << balance + d << ")\n";
                return;
            }

        }
        else{
            BankAccount::deposit(d);
        }
    }

    virtual ServAndOwed monthlyProc(){
        if(numWithdrawal > 4){
            serviceCharges += 1.0 * (numWithdrawal - 4);

            mnCharges += serviceCharges;
        }

        ServAndOwed temp;
        temp.servCharges = serviceCharges;
        temp.totalOwed = 0.0;

        BankAccount::monthlyProc();

        if(balance < 25){
            status = Inactive;
        }

        return temp;
    }
};

#endif
