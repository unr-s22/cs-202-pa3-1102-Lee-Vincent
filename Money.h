#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <sstream>
#include <string>

class Money {
    int cents;
public:
    Money();
    Money(int, int);
    Money operator+ (const Money&);
    Money operator- (const Money&);
    bool operator== (const Money&);
    bool operator!= (const Money&);
    bool operator>= (const Money&);
    bool operator<= (const Money&);
    bool operator> (const Money&);
    bool operator< (const Money&);
    friend std::ostream& operator<< (std::ostream& , const Money&);
    ~Money();
};

#endif