#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include "CardFactory.h"
#include <vector>

class Deck : public std::vector<Card*> {
public:
    Deck(std::istream& in, const CardFactory* factory);
    Card* draw();
    friend std::ostream& operator<<(std::ostream& out, const Deck& deck);
};

#endif // DECK_H
