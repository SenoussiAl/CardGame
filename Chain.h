#ifndef CHAIN_H
#define CHAIN_H

#include "Card.h"
#include <vector>

template <typename T>
class Chain {
    std::vector<T*> cards;

public:
    Chain<T>& operator+=(Card* card);
    int sell() const;
    friend std::ostream& operator<<(std::ostream& out, const Chain<T>& chain);
};

#endif // CHAIN_H
