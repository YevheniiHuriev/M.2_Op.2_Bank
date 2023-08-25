#include "Bank.h"
#include "BankException.h"

int main()
{
	setlocale(0, "");



	Bank obj("Privat24");

	try { obj.addDeposit(new LongTermDeposit("Vasya", -10)); }
	catch (BankException* err) { cout << err->showMessage() << endl << endl; }

	try { obj.addDeposit(new DemandDeposit("Peter", 120)); }
	catch (BankException* err) { cout << err->showMessage() << endl << endl; }

	try { obj.addDeposit(new LongTermDeposit("Vania", 420)); }
	catch (BankException* err) { cout << err->showMessage() << endl << endl; }


	try { obj.CalcDep("Vasya", (2)); }
	catch (BankException* err) { cout << err->showMessage() << endl << endl; }

	try { obj.CalcDep("Peter", (12)); }
	catch (BankException* err) { cout << err->showMessage() << endl << endl; }

	try { obj.CalcDep("Vania", (-2)); }
	catch (BankException* err) { cout << err->showMessage() << endl << endl; }

	obj.showList();

	/*cout << "==================================" << endl << endl;
	obj.delDeposit("Vania");
	obj.showList();*/






	return 0;
}