#include "Hand.h"
#include "CardFactory.h"

using namespace std;
Hand::Hand(std::istream& in, const CardFactory* factory) {
    int numCards;
    in >> numCards;

    for (int i = 0; i < numCards; ++i) {
        std::string cardType;
        in >> cardType;
        cards.push(factory->createCard(cardType));
    }
}

Hand& Hand::operator+=(Card* card) {
    push_back(card);
    return *this;
}

Card* Hand::play() {
    if (!empty()) {
        Card* playedCard = front();
        pop_front();
        return playedCard;
    }
    return nullptr;
}

Card* Hand::top()
{
    if (m_cards.size() > 0)
    {
        return m_cards[0];
    }
    else
    {
        return nullptr;
    }
}


Card* Hand::operator[](int i)
{
    if (i >= 0 && i < m_cards.size())
    {
        Card* card = m_cards[i];
        m_cards.erase(m_cards.cbegin() + i);
        return card;
    }
    else
    {
        return nullptr;
    }
}

ostream& operator<<(ostream& out, const Hand& hand)
{
    for (Card* card : hand.m_cards)
    {
        out << (*card) << " ";
    }

    out << endl;

    return out;
}
