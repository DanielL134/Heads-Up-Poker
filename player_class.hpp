#ifndef __PLAYER_CLASS_HPP__
#define __PLAYER_CLASS_HPP__

#include <string>

#include "macros.hpp"

using namespace std;

class Player{

  public:
    string playerName;
    string firstCard;
    string secondCard;
    int chipCount;
    
    void setPlayerName(string str);
    void setFirstCard(string card);
    void setSecondCard(string card);
    void buyIn(void);
};

void Player::setPlayerName(string str) {

  playerName = str;

}

void Player::setFirstCard(string card) {

  firstCard = card;

}

void Player::setSecondCard(string card) {

  secondCard = card;

}

void Player::buyIn(void) {

  chipCount = BUY_IN_AMOUNT;

}

#endif

