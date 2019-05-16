#ifndef __DECK_HPP__
#define __DECK_HPP__

#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

vector<string> deck;

void createDeck(){

  //Spades
  for (int i = 2; i <= 15; i++){
    if(i < 11) {
      string tempStr;
      std::stringstream ss;
      ss << i;
      tempStr = ss.str();
      tempStr += " spades";
      deck.push_back(tempStr);
    }
    else if(i == 12){
      deck.push_back("Jack spades");
    }
    else if(i == 13){
      deck.push_back("Queen spades");
    }
    else if(i == 14){
      deck.push_back("King spades");
    }
    else if(i == 15){
      deck.push_back("Ace spades");
    }
  }
  
  //Clubs
  for (int i = 2; i <= 15; i++){
    if(i < 11) {
      string tempStr;
      std::stringstream ss;
      ss << i;
      tempStr = ss.str();
      tempStr += " clubs";
      deck.push_back(tempStr);
    }
    else if(i == 12){
      deck.push_back("Jack clubs");
    }
    else if(i == 13){
      deck.push_back("Queen clubs");
    }
    else if(i == 14){
      deck.push_back("King clubs");
    }
    else if(i == 15){
      deck.push_back("Ace clubs");
    }
  }
  
  //Hearts
  for (int i = 2; i <= 15; i++){
    if(i < 11) {
      string tempStr;
      std::stringstream ss;
      ss << i;
      tempStr = ss.str();
      tempStr += " hearts";
      deck.push_back(tempStr);
    }
    else if(i == 12){
      deck.push_back("Jack hearts");
    }
    else if(i == 13){
      deck.push_back("Queen hearts");
    }
    else if(i == 14){
      deck.push_back("King hearts");
    }
    else if(i == 15){
      deck.push_back("Ace hearts");
    }
  }
  
  //Diamonds
  for (int i = 2; i <= 15; i++){
    if(i < 11) {
      string tempStr;
      std::stringstream ss;
      ss << i;
      tempStr = ss.str();
      tempStr += " diamonds";
      deck.push_back(tempStr);
    }
    else if(i == 12){
      deck.push_back("Jack diamonds");
    }
    else if(i == 13){
      deck.push_back("Queen diamonds");
    }
    else if(i == 14){
      deck.push_back("King diamonds");
    }
    else if(i == 15){
      deck.push_back("Ace diamonds");
    }
  }
}


#endif
