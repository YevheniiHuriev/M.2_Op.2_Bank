#pragma once
#include <iostream>

using std::string;

class BankException
{
public:
	virtual string showMessage() = 0;
};

class MonthException : public BankException
{
public:
	virtual string showMessage() override;
};

class DepositException : public BankException
{
public:
	virtual string showMessage() override;
};