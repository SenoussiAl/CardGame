#ifndef DISCARDPILE_H
#define DISCARDPILE_H

#include <vector>
#include "Card.h"

class DiscardPile : public std::vector<Card*> {
public:
    DiscardPile(std::istream& in, const CardFactory* factory);
    DiscardPile& operator+=(Card* card);
    Card* pickUp();
    Card* top() const;
    void print(std::ostream& out) const;
    friend std::ostream& operator<<(std::ostream& out, const DiscardPile& discardPile);
};

#endif // DISCARDPILE_H
