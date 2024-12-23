#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <iostream>
#include "Chain.h"
#include "Hand.h"

class Player {
    std::string name;
    int numCoins;
    int maxNumChains;
    std::vector<Chain<Card>> chains;
    Hand hand;

public:
    Player(const std::string& playerName, int maxChains);
    std::string getName() const;
    int getNumCoins() const;
    Player& operator+=(int coins);
    int getMaxNumChains() const;
    int getNumChains() const;
    Chain<Card>& operator[](int i);
    void buyThirdChain();
    void printHand(std::ostream& out, bool showAll) const;
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
};

#endif 
