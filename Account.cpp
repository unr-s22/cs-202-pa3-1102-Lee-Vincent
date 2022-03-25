#include "Account.h"

Account::Account(Money initial):balance(initial) {}

void Account::makeDeposit(Money deposit) {
  depVec.push_back(deposit);
  needUpdate = true;
}

void Account::makeWithdrawal(Money withdrawal) {
  withVec.push_back(withdrawal);
  needUpdate = true;
}

Money Account::getBalance() {
  return balance;
}

std::ostream& operator<< (std::ostream& os, Account &account) {
  os << "================================" << std:: endl;
  os << "Account Details" << std::endl;
  os << "--------------------------------" << std::endl;
  os << "Current Balance: " << account.balance;
    if(account.needUpdate) {
      if(!account.depVec.empty()) {
        int counter = 1;
        os << std:: endl << "---------------------" << std::endl;
        os << "Number of Deposits: " << account.depVec.size() << std::endl;
        os << "---------------------------";
        for(Money i : account.depVec) {
           os << std::endl << '(' << counter++ << ") " << i;
           account.balance = account.balance + i;
        }
        account.depVec.clear();
      }
      if(!account.withVec.empty()) {
        int counter = 1;
        os << std::endl << "---------------------" << std::endl;
        os << "Number of Withdrawals: " << account.withVec.size() << std::endl;
        os << "--------------------------";
        for(Money i : account.withVec) {
          os << std::endl << '(' << counter++ << ") " << i;
          account.balance = account.balance - i;
        }
        account.withVec.clear();
      }
      os << std::endl << "--------------------------" << std::endl;
      os << "Updated Balance: " << account.balance;
      account.needUpdate = false;
    }
    return os;
}
