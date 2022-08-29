#pragma once
#include "BankAccount.hpp"
//* Stwórz klasę DebitBankAccount dziedziczącą po BankAccount, która rozszerza możliwości o przyznawanie debetu(również jego zmniejszanie).
//- setDebitLimit(int)
//- getDebitLimit()
//- payDebit(int)
//Czy będziesz testować wszystkie metody z klasy bazowej w klasie DebitBankAccount ? ?

class DebitBankAccount : public BankAccount
{private:
	double _debit;
public:
	DebitBankAccount() : BankAccount(), _debit(0) {};
	void setDebitLimit(double debit);
	double getDebitLimit() const;
	void payDebit(double debit);
};

