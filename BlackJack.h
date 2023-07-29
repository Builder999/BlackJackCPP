#include <iostream>
#include <vector>
namespace BlackJack{
    class Card {
        char suit;
        int value;
        public:
            Card(char suit, int value){
                this->suit = suit;
                this->value = value;
                if (value > 13 || value < 1){
                    throw std::invalid_argument("Value not valid"); 
                }
                char suits[4] = {'s','d','c','h'};
                bool pass = false;
                for (int i = 0; i < 4; i++){
                    if (suit == suits[i]){
                        pass = true;
                    }
                }
                if (!pass){
                    throw std::invalid_argument("Invalid Suit");
                }
            }
            char getSuit(){
                return suit;
            }
            int getValue(){
                return value;
            }
            void setSuit(char suit){
                this->suit = suit;
                char suits[4] = {'s','d','c','h'};
                bool pass = false;
                for (int i = 0; i < 4; i++){
                    if (suit == suits[i]){
                        pass = true;
                    }
                }
                if (!pass){
                    throw std::invalid_argument("Invalid Suit");
                }
            }

    };



    class Hand {
        std::vector<Card> cards;
        public:
        Hand(){
            
        }

        void addCard(Card card){
            cards.push_back(card);
        }

        std::vector<Card>& getHand(){
            return cards;
        }


    };
}