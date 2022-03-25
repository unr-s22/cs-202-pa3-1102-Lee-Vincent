#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Money.h"
#include <vector>

class Account {
  Money balance;
  std::vector<Money> depVec;
  std::vector<Money> withVec;
  bool needUpdate = false;
public:
  Account(Money);
  void makeDeposit(Money);
  void makeWithdrawal(Money);
  Money getBalance();
  friend std::ostream& operator<< (std::ostream&, Account& account);

};

#endif
