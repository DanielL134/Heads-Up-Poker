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
  comp.setFirstCardValSuit(valAndSuit[deckIndex]);
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);
  
  deckIndex = rand() % deck.size();
  person.setFirstCard(deck[deckIndex]);
  person.setFirstCardValSuit(valAndSuit[deckIndex]);
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);
  
  deckIndex = rand() % deck.size();
  comp.setSecondCard(deck[deckIndex]);
  comp.setSecondCardValSuit(valAndSuit[deckIndex]);
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);
  
  deckIndex = rand() % deck.size();
  person.setSecondCard(deck[deckIndex]);
  person.setSecondCardValSuit(valAndSuit[deckIndex]);
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);
          
}

void theFlop(string& flopCard1, string& flopCard2, string& flopCard3, int flopCard1ValSuit[2], int flopCard2ValSuit[2], int flopCard3ValSuit[2]){

  //Burn card
  int deckIndex = rand() % deck.size();
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);
  
  //deal flop
  deckIndex = rand() % deck.size();
  flopCard1 = deck[deckIndex];
  cout << "First card flop value: " << valAndSuit[deckIndex][0] << endl;
  flopCard1ValSuit[0] = valAndSuit[deckIndex][0];
  flopCard1ValSuit[1] = valAndSuit[deckIndex][1];
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);
  
  deckIndex = rand() % deck.size();
  flopCard2 = deck[deckIndex];
  flopCard2ValSuit[0] = valAndSuit[deckIndex][0];
  flopCard2ValSuit[1] = valAndSuit[deckIndex][1];
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);

  deckIndex = rand() % deck.size();
  flopCard3 = deck[deckIndex];
  flopCard3ValSuit[0] = valAndSuit[deckIndex][0];
  flopCard3ValSuit[1] = valAndSuit[deckIndex][1];
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);
}

void theTurn(string& turnCard, int turnCardValSuit[2]) {

  //Burn card
  int deckIndex = rand() % deck.size();
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);
  
  //The turn
  deckIndex = rand() % deck.size();
  turnCard = deck[deckIndex];
  turnCardValSuit[0] = valAndSuit[deckIndex][0];
  turnCardValSuit[1] = valAndSuit[deckIndex][1];
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);

}

void theRiver(string& riverCard, int riverCardValSuit[2]) {

  //Burn card
  int deckIndex = rand() % deck.size();
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);
  
  //The river
  deckIndex = rand() % deck.size();
  riverCard = deck[deckIndex];
  riverCardValSuit[0] = valAndSuit[deckIndex][0];
  riverCardValSuit[1] = valAndSuit[deckIndex][1];
  deck.erase(deck.begin()+deckIndex);
  valAndSuit.erase(valAndSuit.begin()+deckIndex);

}

#endif
