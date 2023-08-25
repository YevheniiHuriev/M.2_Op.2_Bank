#include "Bank.h"
#include "BankException.h"

Bank::Bank()
{
    title = "empty";
    depSum = 0;
    depCount = 0;
}

Bank::Bank(string title)
{
    this->title = "empty";
    setTitle(title);
    this->depSum = 0;
    setDepSum(depSum);
    this->depCount = 0;
    setDepCount(depCount);
}

string Bank::getTitle() const
{
    return title;
}

float Bank::getDepSum() const
{
    return depSum;
}

int Bank::getDepCount() const
{
    return depCount;
}

void Bank::setTitle(string title)
{
    if (title.length()>0)
    {
        this->title = title;
    }
}

void Bank::setDepSum(float depSum)
{
    if (depSum > 0)
    {
        this->depSum = depSum;
    }
}

void Bank::setDepCount(int depCount)
{
    if (depCount > 0)
    {
        this->depCount = depCount;
    }
}

void Bank::addDeposit(Deposit* obj)
{
	if (obj->getDepAm() <= 0)
	{
		throw new DepositException;
	}
    dep.push_back(obj);
    setDepSum(depSum += obj->getDepAm());
    setDepCount(++depCount);
}

void Bank::delDeposit(string name)
{
    for (int i = 0; i < dep.size(); i++)
    {
        if (dep[i]->getName() == name)
        {
            setDepSum(depSum -= dep[i]->getDepAm());
            setDepCount(--depCount);
            dep.erase(dep.begin() + i);
        }
    }
}

void Bank::fineDeposit(string name) const
{
    for (int i = 0; i < dep.size(); i++)
    {
        if (dep[i]->getName() == name)
        {
            dep[i]->showInfo();
        }
    }
}

void Bank::CalcDep(string name, int month)
{
    for (int i = 0; i < dep.size(); i++)
    {
        if (dep[i]->getName() == name)
        {
            dep[i]->CalcDep(month);
        }
    }
}

void Bank::showList() const
{
    cout << "Bank name: " << title << endl;
    cout << "Total amount of deposits: " << depSum << endl;
    cout << "Number of deposits: " << depCount << endl;
    cout << endl;
    for (int i = 0; i < dep.size(); i++)
    {
        dep[i]->showInfo();
        cout << "-----------------------" << endl;
    }
}
