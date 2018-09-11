#pragma once
#include<iostream>
class BankAccount
{
private:
	double balance;
	std::string accountNumber;

public:
	BankAccount();
	BankAccount(double, std::string);
	~BankAccount();
	void display();



};

