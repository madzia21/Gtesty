#include "pch.h"
#include "../BankAccount/BankAccount.hpp"
#include "../BankAccount/bankDebitAccount.hpp"
TEST(TestCaseName, TestName1) {
	BankAccount account;
    EXPECT_EQ(account.getAvailableFunds(),0.0);
}
TEST(TestCaseName, TestName2) {
	BankAccount account;
	account.deposit(1000);
	EXPECT_EQ(account.getAvailableFunds(), 1000.0);
}
TEST(TestCaseName, TestName3) {
	BankAccount account;
	account.deposit(1000);
	account.withdraw(500);
	EXPECT_EQ(account.getAvailableFunds(), 500.0);
}
TEST(TestCaseName, TestName4) {
BankAccount account;
account.withdraw(500);
EXPECT_EQ(account.getAvailableFunds(), false);
}
TEST(TestCaseName, TestName5) {
	DebitBankAccount account;
	account.setDebitLimit(500);
	EXPECT_EQ(account.getDebitLimit(), 500.0);
}
TEST(TestCaseName, TestName6) {
	DebitBankAccount account;
	account.setDebitLimit(500);
	account.payDebit(500);
	EXPECT_EQ(account.getDebitLimit(), 0);
}