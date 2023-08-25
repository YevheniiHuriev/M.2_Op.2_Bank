#pragma once
#include "Deposit.h"
class LongTermDeposit : public Deposit
{
	float tmp = 0;
public:
	LongTermDeposit(string name, float depAm);

	virtual void CalcDep(int month) override;
	virtual void showInfo()const override;
};

