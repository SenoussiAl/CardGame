#ifndef TABLE_H
#define TABLE_H

#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"

class Table {
    Player players[2];
    Deck deck;
    DiscardPile discardPile;
    TradeArea tradeArea;

public:
    Table(std::istream& in, const CardFactory* factory);
    bool win(std::string& winner) const;
    void printHand(bool showAll) const;
    friend std::ostream& operator<<(std::ostream& out, const Table& table);
};

#endif // TABLE_H
