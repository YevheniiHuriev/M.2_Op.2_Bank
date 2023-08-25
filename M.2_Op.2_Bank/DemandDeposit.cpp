#include "DemandDeposit.h"
#include "BankException.h"

DemandDeposit::DemandDeposit(string name, float depAm)
	:Deposit(name, depAm) {}

void DemandDeposit::CalcDep(int month)
{
	if (month < 0)
	{
		throw new MonthException;
	}
	else
	{
		if (month == 0)
		{
			tmp = depAm;
		}
		else
		{
			float buf = depAm;
			for (int i = 0; i < month; i++)
			{
				tmp += (buf * 0.05);
				buf += tmp;
				tmp = 0;
			}
			tmp = buf;
		}
	}
}

void DemandDeposit::showInfo() const
{
	cout << "Type: Demand Deposit" << endl;
	cout << "Name: " << name << endl;
	cout << "Deposite amount: " << depAm << " UAH" << endl;
	cout << "Final amount: " << tmp << " UAH" << endl;
}