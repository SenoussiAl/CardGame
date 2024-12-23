#include "Table.h"

Table::Table(istream& in, const CardFactory* cardFactory)
    : player1(in, cardFactory), player2(in, cardFactory), deck(in, cardFactory), discardPile(in, cardFactory), tradeArea(in, cardFactory) {}

bool Table::win(std::string& playerName) const {
    if (deck.size() == 0) {
        if (player1.getNumCoins() > player2.getNumCoins()) {
            playerName = player1.getName();
        }
        else if (player2.getNumCoins() > player1.getNumCoins()) {
            playerName = player2.getName();
        }
        else {
            playerName = "It's a tie!";
        }
        return true;
    }
    return false;
}

void Table::printHand(bool showAll) const {
    std::cout << "Player 1:\n";
    player1.printHand(std::cout, showAll);
    std::cout << "Player 2:\n";
    player2.printHand(std::cout, showAll);
}

std::ostream& operator<<(std::ostream& os, const Table& table) {
    os << "----- Player 1 -----\n" << table.player1 << "\n";
    os << "----- Player 2 -----\n" << table.player2 << "\n";
    os << "----- Deck -----\n" << table.deck << "\n";
    os << "----- Discard Pile -----\n" << table.discardPile << "\n";
    os << "----- Trade Area -----\n" << table.tradeArea << "\n";
    return os;
}
