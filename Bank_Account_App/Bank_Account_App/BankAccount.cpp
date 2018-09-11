#include "pch.h"
#include<string>
#include "BankAccount.h"

BankAccount::BankAccount()
{
	balance = 0.0;
	accountNumber = "";
}

BankAccount::BankAccount(double bal, std::string accNum)
{
	balance = bal;
	accountNumber = accNum;
}

BankAccount::~BankAccount()
{

}

void BankAccount::display()
{
	std::cout << "balance for account number #" << accountNumber << " is $" << balance << std::endl;
}
