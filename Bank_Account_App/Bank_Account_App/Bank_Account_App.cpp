// Bank_Account_App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include"BankAccount.h"

using namespace std;

int main()
{
	BankAccount myAccount(4500.00, "DGD5445345");

	myAccount.display();
}


