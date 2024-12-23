# Card Game

## Description

This project is a card game implemented in C++. The game involves different types of cards, each with unique properties and behaviors. Players can collect, trade, and play cards to earn coins. The player with the most coins at the end of the game wins.

## Card Types

The game includes the following card types:
- **Blue**
- **Chili**
- **Stink**
- **Green**
- **Soy**
- **Black**
- **Red**
- **Garden**

Each card type has a specific number of cards required to earn coins.

## Classes

### Card

The `Card` class is an abstract base class for all card types. It includes methods to get the name of the card, the number of cards required per coin, and to print the card.

### Deck

The `Deck` class represents a collection of cards. It includes methods to draw a card from the deck and to print the deck.

### DiscardPile

The `DiscardPile` class represents a pile of discarded cards. It includes methods to add a card to the pile, pick up the top card, and print the pile.

### Hand

The `Hand` class represents a player's hand of cards. It includes methods to add a card to the hand, play a card, and print the hand.

### Player

The `Player` class represents a player in the game. It includes methods to get the player's name, the number of coins, and the player's hand. It also includes methods to buy a third chain and to print the player's hand.

### Table

The `Table` class represents the game table. It includes methods to check if a player has won, print the hands of both players, and print the state of the table.

### TradeArea

The `TradeArea` class represents the area where players can trade cards. It includes methods to add a card to the trade area, check if a card is legal to trade, and trade a card.

## How to Start the Game

1. **Compile the Code**: Ensure you have a C++ compiler installed. Compile the code using the following command:
   ```sh
   g++ -o cardgame *.cpp
