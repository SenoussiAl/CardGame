#ifndef CARDFACTORY_H
#define CARDFACTORY_H

#include "Card.h"
#include "Deck.h"

class CardFactory {
    static CardFactory* instance;

    CardFactory();

public:
    static CardFactory* getFactory();
    Deck getDeck() const;
    ~CardFactory();

    // Add functions to create specific cards if needed
};

#endif // CARDFACTORY_H
