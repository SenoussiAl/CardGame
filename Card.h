#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card {
public:
    virtual int getCardsPerCoin(int coins) const = 0;
    virtual std::string getName() const = 0;
    virtual void print(std::ostream& out) const = 0;
    virtual ~Card() = default;
};

#endif // CARD_H
