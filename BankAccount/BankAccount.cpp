#include "BankAccount.hpp"

bool BankAccount::withdraw(double amount)
{
    if (_saldo < amount)
        return false;
    _saldo -= amount;
    return true;
}

void BankAccount::deposit(double amount)
{
    _saldo += amount;
}

double BankAccount::getAvailableFunds() const
{
    return _saldo;
}
