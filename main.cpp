#include <iostream>
#include <vector>
#include <cstdlib>
#include "BlackJack.h"
int main(){
    std::vector<BlackJack::Card> deck;
    for(int i = 0; i < 4; i++){
        for(int j = 1; j <=13; j++){
            char suit;
            switch (i)
            {
            case 1:
                suit = 's';   
                break;
            case 2:
                suit = 'd';
                break;
            case 3:
                suit = 'c';
                break;
            default:
                suit = 'h';
                break;
            }
            BlackJack::Card card(suit, j);
            deck.push_back(card);
        }
    }

    BlackJack::Hand playerHand;
    BlackJack::Hand dealerHand;

    int cardNum = std::rand() % 52;
    playerHand.addCard(deck[cardNum]);
    deck.erase(deck.begin()+cardNum);

    cardNum = std::rand() % 52;
    playerHand.addCard(deck[cardNum]);
    deck.erase(deck.begin()+cardNum);

    cardNum = std::rand() % 52;
    dealerHand.addCard(deck[std::rand() % 52]);
    deck.erase(deck.begin()+cardNum);

    cardNum = std::rand() % 52;
    dealerHand.addCard(deck[std::rand() % 52]);
    deck.erase(deck.begin()+cardNum);

    std::vector<BlackJack::Card> &playerCards = playerHand.getHand();
    std::vector<BlackJack::Card> &dealerCards = dealerHand.getHand();

    playerCards[0].setSuit('d');
    std::cout << playerHand.getHand()[0].getSuit() << std::endl;
}