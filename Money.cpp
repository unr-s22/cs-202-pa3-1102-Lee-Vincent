#include "Money.h"

Money::Money():cents(0) {}

Money::Money(int dollars, int cents):cents(dollars*100+cents) {}

Money Money::operator+ (const Money& m) {
    Money sum;
    sum.cents = cents + m.cents;
    return sum;
}

Money Money::operator- (const Money& m) {
    Money diff;
    diff.cents = cents - m.cents;
    return diff;
}

bool Money::operator== (const Money& m) {
    return cents == m.cents;
}

bool Money::operator!= (const Money& m) {
    return cents != m.cents;
}

bool Money::operator>= (const Money& m) {
    return cents >= m.cents;
}

bool Money::operator<= (const Money& m) {
    return cents <= m.cents;
}

bool Money::operator> (const Money& m) {
    return cents > m.cents;
}

bool Money::operator< (const Money& m) {
    return cents < m.cents;
}

std::ostream& operator<< (std::ostream& os, const Money& m) {
    os << "$" << m.cents/100 << '.';
    if(m.cents%100 < 10)
        os << '0' << m.cents%100;
    else
        os << m.cents%100;
    return os;
}

Money::~Money() {}