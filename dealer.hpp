#ifndef __DEALER_HPP__
#define __DEALER_HPP__

#include "deck.hpp"
#include "player_class.hpp"

#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;


void dealCards(Player& comp, Player& person){

  srand(time(NULL));
  int deckIndex = rand() % deck.size();
  comp.setFirstCard(deck[deckIndex]);
  deck.erase(deck.begin()+deckIndex);
  
  deckIndex = rand() % deck.size();
  person.setFirstCard(deck[deckIndex]);
  deck.erase(deck.begin()+deckIndex);
  
  deckIndex = rand() % deck.size();
  comp.setSecondCard(deck[deckIndex]);
  deck.erase(deck.begin()+deckIndex);
  
  deckIndex = rand() % deck.size();
  person.setSecondCard(deck[deckIndex]);
  deck.erase(deck.begin()+deckIndex);
          
}

void theFlop(string& flopCard1, string& flopCard2, string& flopCard3){

  //Burn card
  int deckIndex = rand() % deck.size();
  deck.erase(deck.begin()+deckIndex);
  
  //deal flop
  deckIndex = rand() % deck.size();
  flopCard1 = deck[deckIndex];
  deck.erase(deck.begin()+deckIndex);
  
  deckIndex = rand() % deck.size();
  flopCard2 = deck[deckIndex];
  deck.erase(deck.begin()+deckIndex);

  deckIndex = rand() % deck.size();
  flopCard3 = deck[deckIndex];
  deck.erase(deck.begin()+deckIndex);
  
}

void theTurn(string& turnCard) {

  int deckIndex = rand() % deck.size();
  turnCard = deck[deckIndex];
  deck.erase(deck.begin()+deckIndex);

}

void theRiver(string& riverCard) {

  int deckIndex = rand() % deck.size();
  riverCard = deck[deckIndex];
  deck.erase(deck.begin()+deckIndex);

}

#endif
