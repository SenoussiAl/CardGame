#include "Player.h"
#include <iostream>

Player::Player(std::istream& in, const CardFactory* factory) {
    std::getline(in, name);
    in >> numCoins;
    int numChains;
    in >> numChains;
    chains.resize(numChains);
    for (auto& chain : chains) {
        chain = Chain<BaseCardType>(in, factory);
    }
    hand = Hand(in, factory);
}

std::string Player::getName() const {
    return name;
}

int Player::getNumCoins() const {
    return numCoins;
}

Player& Player::operator+=(int coins) {
    numCoins += coins;
    return *this;
}

int Player::getMaxNumChains() const {
    return maxNumChains;
}

int Player::getNumChains() const {
    return chains.size();
}

Chain<Card>& Player::operator[](int i) {
    return chains[i];
}

void Player::buyThirdChain() {
    if (numCoins < 3) {
        cout << "Transaction cannot be completed, you have less than 3 coins!" << endl; 
    }
    else {
        if (getNumChains() == 3) {
            cout << "You cannot buy more chains!" << endl;
        }
        else {
            if (getNumChains() == 2 && numCoins >= 2) {
                numCoins = numCoins - 3;
            }
        }
    }
}

void Player::printHand(std::ostream& n) const {
    for (const auto& card : hand.getCards()) {
        n << *card << " ";
    }
    n << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Player& player) {
    out << "Player's Hand: ";
    player.printHand(out);
    return out;
}
