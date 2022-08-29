#include "bankDebitAccount.hpp"

void DebitBankAccount::setDebitLimit(double debit)
{
	_debit = debit;
}

double DebitBankAccount::getDebitLimit() const
{
	return _debit;
}

void DebitBankAccount::payDebit(double debit)
{
	_debit -= debit;
}
