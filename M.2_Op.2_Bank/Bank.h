#pragma once
#include "Deposit.h"
#include "LongTermDeposit.h"
#include "DemandDeposit.h"

class Bank
{
protected:
	string title;
	float depSum;
	int depCount;
	vector<Deposit*>dep;
public:
	Bank();
	Bank(string title);
	string getTitle()const;
	float getDepSum()const;
	int getDepCount()const;

	void setTitle(string title);
	void setDepSum(float depSum);
	void setDepCount(int depCount);

	void addDeposit(Deposit* obj);
	void delDeposit(string name);
	void fineDeposit(string name)const;
	void CalcDep(string name, int month);

	void showList()const;
};

