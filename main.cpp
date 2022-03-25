#include "Account.h"

int main() {
  Money startingBalance(300,23);
  Account account(startingBalance);
  std::cout << account << std::endl;
  account.makeDeposit(Money(200,00));
  account.makeDeposit(Money(300,24));
  account.makeDeposit(Money(501,22));
  std::cout << account << std::endl;
  account.makeWithdrawal(Money(300,10));
  account.makeWithdrawal(Money(201,34));
  std::cout << account << std::endl;


  return 0;
}
