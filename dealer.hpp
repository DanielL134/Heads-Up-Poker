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

#endif
