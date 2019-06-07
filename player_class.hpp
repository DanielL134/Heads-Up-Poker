#ifndef __PLAYER_CLASS_HPP__
#define __PLAYER_CLASS_HPP__

#include <string>

#include "macros.hpp"

using namespace std;

class Player{

  public:
    string playerName;
    string firstCard;
    int firstCardValSuit[2];
    string secondCard;
    int secondCardValSuit[2];
    int handScore;
    int chipCount;
    
    void setPlayerName(string str);
    void setFirstCard(string card);
    void setFirstCardValSuit(int valAndSuit[2]);
    void setSecondCard(string card);
    void setSecondCardValSuit(int valAndSuit[2]);
    void setHandScore(int score);
    void buyIn(void);
};

void Player::setPlayerName(string str) {

  playerName = str;

}

void Player::setFirstCard(string card) {

  firstCard = card;

}

void Player::setFirstCardValSuit(int valAndSuit[2]) {

  firstCardValSuit[0] = valAndSuit[0];
  firstCardValSuit[1] = valAndSuit[1];

}

void Player::setSecondCard(string card) {

  secondCard = card;

}

void Player::setSecondCardValSuit(int valAndSuit[2]) {

  secondCardValSuit[0] = valAndSuit[0];
  secondCardValSuit[1] = valAndSuit[1];

}

void Player::setHandScore(int score) {

  handScore = score;

}

void Player::buyIn(void) {

  chipCount = BUY_IN_AMOUNT;

}

#endif

