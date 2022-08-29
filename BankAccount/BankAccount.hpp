#pragma once
class BankAccount
{
private:
	double _saldo;
public:
	BankAccount() : _saldo(0) {};
	bool withdraw(double amount);
	void deposit(double amount);
	double getAvailableFunds() const;
};

