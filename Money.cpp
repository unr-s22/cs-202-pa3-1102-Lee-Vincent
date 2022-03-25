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
    std::ostringstream aggregate;
    aggregate << "$" << m.cents/100 << '.';
    if(m.cents%100 < 10)
        aggregate << '0' << m.cents%100;
    else
        aggregate << m.cents%100;
    os << aggregate.str();
    return os;
}

Money::~Money() {}