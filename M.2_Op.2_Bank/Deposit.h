#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

class Deposit
{
protected:
	string name;
	float depAm;
public:
	Deposit();
	Deposit(string name, float depAm);

	string getName()const;
	float getDepAm()const;

	void setName(string name);
	void setDepAm(float depAm);

	virtual void CalcDep(int month) = 0;
	virtual void showInfo()const = 0;

};

