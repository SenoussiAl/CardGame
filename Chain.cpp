#include "Chain.h"
#include "IllegalType.h" 

using namespace std;
template <typename T>
Chain<T>& Chain<T>::operator+=(Card* card) {
    T* typedCard = dynamic_cast<T*>(card);
    if (!typedCard) {
        throw IllegalType("Attempted to add card to the wrong chain.");
    }
    cards.push_back(typedCard);
    return *this;
}

template <typename T>
int Chain<T>::sell() const {
    int numCards = cards.size();
    if (numCards >= 3) {
        return cards.front()->getCardsPerCoin(numCards);
    }
    return 0;
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const Chain<T>& chain) {
    for (const auto& card : chain.cards) {
        out << card->getName() << " ";
    }
    return out;
}
