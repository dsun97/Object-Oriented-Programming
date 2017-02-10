#ifndef SAVINGACCT_H
#define SAVINGACCT_H

class SavingsAcct {
  private:
     static double annualInterestRate;
     double balance;
     
  public:
     SavingsAcct(double b) {balance = b; };
     void calculateMonthlyInterest();
     static void modifyInterestRate(double);
     void printBalance();
     
};




#include "SavingsAccount.cpp"

#endif
