#include "DiscardPile.h"
#include "CardFactory.h"

using namespace std;
DiscardPile(std::istream& is, const CardFactory* cardFactory) {
    std::string cardType;
    while (is >> cardType) {
        Card* card = cardFactory->createCard(cardType);
        if (card != nullptr) {
            pile.push_back(card);
        }
    }
}

DiscardPile& DiscardPile::operator+=(Card* card) {
    push_back(card);
    return *this;
}

Card* DiscardPile::pickUp() {
    if (!empty()) {
        Card* pickedCard = back();
        pop_back();
        return pickedCard;
    }
    return nullptr;
}

Card* DiscardPile::top() const {
    return empty() ? nullptr : back();
}

void DiscardPile::print(std::ostream& out) const {
    for (const auto& card : *this) {
        card->print(out);
        out << " ";
    }
}

std::ostream& operator<<(std::ostream& out, const DiscardPile& discardPile) {
    discardPile.print(out);
    return out;
}


~DiscardPile() {
    for (auto card : pile) {
        delete card;
    }
}
};
