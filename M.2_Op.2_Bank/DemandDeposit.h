#pragma once
#include "Deposit.h"

class DemandDeposit : public Deposit
{
	float tmp = 0;
public:
	DemandDeposit(string name, float depAm);

	virtual void CalcDep(int month) override;
	virtual void showInfo()const override;
};

