#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(double val, string str)
    : balance(val), name(str) {}

Account::~Account() {}

bool Account::Withdraw(double amount) {
    if (balance - amount < 0)
        return false;
    balance -= amount;
    return true;
}
bool Account::Deposit(double amount) {
    balance += amount;
    return true;
}