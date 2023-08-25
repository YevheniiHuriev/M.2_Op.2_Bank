#include "Deposit.h"

Deposit::Deposit()
{
    name = "empty";
    depAm = 0;
}

Deposit::Deposit(string name, float depAm)
{
    this->name = "empty";
    setName(name);
    this->depAm = 0;
    setDepAm(depAm);
}

string Deposit::getName() const
{
    return name;
}

float Deposit::getDepAm() const
{
    return depAm;
}

void Deposit::setName(string name)
{
    if (name.length()>0)
    {
        this->name = name;
    }
}

void Deposit::setDepAm(float depAm)
{
    if (depAm > 0)
    {
        this->depAm = depAm;
    }
}

