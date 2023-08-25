#include "LongTermDeposit.h"
#include "BankException.h"

LongTermDeposit::LongTermDeposit(string name, float depAm)
	:Deposit(name, depAm){}

void LongTermDeposit::CalcDep(int month)
{
	if (month < 0)
	{
		throw new MonthException;
	}
	else
	{
		float buf = depAm;
		if (month == 0)
		{
			tmp = depAm;
		}
		else if (month >= 1 and month <= 2)
		{
			for (int i = 0; i < month; i++)
			{
				tmp += (buf * 0.08);
				buf += tmp;
				tmp = 0;
			}
			tmp = buf;
		}
		else if (month >= 3 and month <= 5)
		{
			for (int i = 0; i < month; i++)
			{
				tmp += (buf * 0.1475);
				buf += tmp;
				tmp = 0;
			}
			tmp = buf;
		}
		else if (month >= 6 and month <= 8)
		{
			for (int i = 0; i < month; i++)
			{
				tmp += (buf * 0.15);
				buf += tmp;
				tmp = 0;
			}
			tmp = buf;
		}
		else if (month >= 9 and month <= 11)
		{
			for (int i = 0; i < month; i++)
			{
				tmp += (buf * 0.1550);
				buf += tmp;
				tmp = 0;
			}
			tmp = buf;
		}
		else if (month >= 12)
		{
			for (int i = 0; i < month; i++)
			{
				tmp += (buf * 0.16);
				buf += tmp;
				tmp = 0;
			}
			tmp = buf;
		}
	}
}

void LongTermDeposit::showInfo() const
{
	cout << "Type: Long_Term Deposit" << endl;
	cout << "Name: " << name << endl;
	cout << "Deposite amount: " << depAm << " UAH" << endl;
	cout << "Final amount: " << tmp  << " UAH" << endl;
}