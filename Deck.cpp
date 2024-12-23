#include "Deck.h"
#include "CardFactory.h"

Deck::Deck(std::istream& in, const CardFactory* factory) {
    int numCards = 0;
    in >> numCards;
    for (int i = 0; i < numCards; ++i)
    {
        string cardType;
        in >> cardType;
        m_cards.push_back(cardFactory->getCard(cardType));
    }
}

Card* Deck::draw() {
    if (!empty()) {
        Card* topCard = back();
        pop_back();
        return topCard;
    }
    return nullptr;
}

std::ostream& operator<<(std::ostream& out, const Deck& deck) {
    for (const auto& card : deck) {
        card->print(out);
        out << " ";
    }
    return out;
}
