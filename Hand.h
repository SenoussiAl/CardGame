#ifndef HAND_H
#define HAND_H

#include <list>
#include <iostream>
#include "Card.h"

class Hand : public std::list<Card*> {
public:
    Hand(std::istream& in, const CardFactory* factory);
    Hand& operator+=(Card* card);
    Card* play();
    Card* top();
    Card* operator[](int pos);
    friend std::ostream& operator<<(std::ostream& out, const Hand& hand);
};

#endif // HAND_H
