#include <iostream>
#include <stdexcept>

using namespace std;

class Card {
protected:
    string name;

public:
    Card() = default;
    virtual ~Card() = default;

    virtual int getCardsPerCoin(int coins) const = 0;
    virtual string getName() const = 0;
    virtual void print(ostream& out) const = 0;

    friend ostream& operator<<(ostream& out, const Card& c);
};

ostream& operator<<(ostream& out, const Card& c) {
    c.print(out);
    return out;
}

class Blue : public Card {
public:
    Blue() {
        name = "Blue";
    }

    int getCardsPerCoin(int coins) const override {
        if (coins < 1 || coins > 4) {
            throw invalid_argument("Exception: coins cannot be less than one or greater than 4!");
        }
        else if (coins == 1) {
            return 4;
        }
        else if (coins == 2) {
            return 6;
        }
        else if (coins == 3) {
            return 8;
        }
        else { // coins == 4
            return 10;
        }
    }

    string getName() const override {
        return name;
    }

    void print(ostream& out) const override {
        out << "B";
    }
};

class Chili : public Card {
public:
    Chili() {
        name = "Chili";
    }

    int getCardsPerCoin(int coins) const override {
        if (coins < 1 || coins > 4) {
            throw invalid_argument("Exception: coins cannot be less than one or greater than 4!");
        }
        else if (coins == 1) {
            return 3;
        }
        else if (coins == 2) {
            return 6;
        }
        else if (coins == 3) {
            return 8;
        }
        else { // coins == 4
            return 9;
        }
    }

    string getName() const override {
        return name;
    }

    void print(ostream& out) const override {
        out << "C";
    }
};

class Stink : public Card {
public:
    Stink() {
        name = "Stink";
    }

    int getCardsPerCoin(int coins) const override {
        if (coins < 1 || coins > 4) {
            throw invalid_argument("Exception: coins cannot be less than one or greater than 4!");
        }
        else if (coins == 1) {
            return 3;
        }
        else if (coins == 2) {
            return 5;
        }
        else if (coins == 3) {
            return 7;
        }
        else { // coins == 4
            return 8;
        }
    }

    string getName() const override {
        return name;
    }

    void print(ostream& out) const override {
        out << "S";
    }
};

class Green : public Card {
public:
    Green() {
        name = "Green";
    }

    int getCardsPerCoin(int coins) const override {
        if (coins < 1 || coins > 4) {
            throw invalid_argument("Exception: coins cannot be less than one or greater than 4!");
        }
        else if (coins == 1) {
            return 3;
        }
        else if (coins == 2) {
            return 5;
        }
        else if (coins == 3) {
            return 6;
        }
        else { // coins == 4
            return 7;
        }
    }

    string getName() const override {
        return name;
    }

    void print(ostream& out) const override {
        out << "G";
    }
};

class Soy : public Card {
public:
    Soy() {
        name = "Soy";
    }

    int getCardsPerCoin(int coins) const override {
        if (coins < 1 || coins > 4) {
            throw invalid_argument("Exception: coins cannot be less than one or greater than 4!");
        }
        else if (coins == 1) {
            return 2;
        }
        else if (coins == 2) {
            return 4;
        }
        else if (coins == 3) {
            return 6;
        }
        else { // coins == 4
            return 7;
        }
    }

    string getName() const override {
        return name;
    }

    void print(ostream& out) const override {
        out << "s";
    }
};

class Black : public Card {
public:
    Black() {
        name = "Black";
    }

    int getCardsPerCoin(int coins) const override {
        if (coins < 1 || coins > 4) {
            throw invalid_argument("Exception: coins cannot be less than one or greater than 4!");
        }
        else if (coins == 1) {
            return 2;
        }
        else if (coins == 2) {
            return 4;
        }
        else if (coins == 3) {
            return 5;
        }
        else { // coins == 4
            return 6;
        }
    }

    string getName() const override {
        return name;
    }

    void print(ostream& out) const override {
        out << "b";
    }
};

class Red : public Card {
public:
    Red() {
        name = "Red";
    }

    int getCardsPerCoin(int coins) const override {
        if (coins < 1 || coins > 4) {
            throw invalid_argument("Exception: coins cannot be less than one or greater than 4!");
        }
        else if (coins == 1) {
            return 2;
        }
        else if (coins == 2) {
            return 4;
        }
        else if (coins == 3) {
            return 5;
        }
        else { // coins == 4
            return 6;
        }
    }

    string getName() const override {
        return name;
    }

    void print(ostream& out) const override {
        out << "R";
    }
};

class Garden : public Card {
public:
    Garden() {
        name = "Garden";
    }

    int getCardsPerCoin(int coins) const override {
        if (coins < 1 || coins > 4) {
            throw invalid_argument("Exception: coins cannot be less than one or greater than 4!");
        }
        else if (coins == 1) {
            return 0;
        }
        else if (coins == 2) {
            return 0;
        }
        else if (coins == 3) {
            return 0;
        }
        else { // coins == 4
            return 2;
        }
    }

    string getName() const override {
        return name;
    }

    void print(ostream& out) const override {
        out << "g";
    }
};