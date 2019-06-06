#ifndef __DECK_HPP__
#define __DECK_HPP__

#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

vector<string> deck;
vector<int*> valAndSuit; 

void createDeck(){

  //Spades
  for (int i = 2; i < 15; i++){
    if(i < 11) {
      string tempStr;
      std::stringstream ss;
      ss << i;
      tempStr = ss.str();
      tempStr += " spades";
      deck.push_back(tempStr);
      int tmpVal = i;
      int tmpSuit = 0;
      valAndSuit.push_back(new int[2]);
      valAndSuit[i-2][0] = tmpVal;
      valAndSuit[i-2][1] = tmpSuit;
    }
    else if(i == 11){
      deck.push_back("Jack spades");
      int tmpVal = i;
      int tmpSuit = 0;
      valAndSuit.push_back(new int[2]);
      valAndSuit[i-2][0] = tmpVal;
      valAndSuit[i-2][1] = tmpSuit;
    }
    else if(i == 12){
      deck.push_back("Queen spades");
      int tmpVal = i;
      int tmpSuit = 0;
      valAndSuit.push_back(new int[2]);
      valAndSuit[i-2][0] = tmpVal;
      valAndSuit[i-2][1] = tmpSuit;
    }
    else if(i == 13){
      deck.push_back("King spades");
      int tmpVal = i;
      int tmpSuit = 0;
      valAndSuit.push_back(new int[2]);
      valAndSuit[i-2][0] = tmpVal;
      valAndSuit[i-2][1] = tmpSuit;
    }
    else if(i == 14){
      deck.push_back("Ace spades");
      int tmpVal = i;
      int tmpSuit = 0;
      valAndSuit.push_back(new int[2]);
      valAndSuit[i-2][0] = tmpVal;
      valAndSuit[i-2][1] = tmpSuit;
    }
  }
  
  //Clubs
  for (int i = 2; i < 15; i++){
    if(i < 11) {
      string tempStr;
      std::stringstream ss;
      ss << i;
      tempStr = ss.str();
      tempStr += " clubs";
      deck.push_back(tempStr);
      int tmpVal = i;
      int tmpSuit = 1;
      valAndSuit.push_back(new int[2]);
      valAndSuit[13+(i-2)][0] = tmpVal;
      valAndSuit[13+(i-2)][1] = tmpSuit;
    }
    else if(i == 11){
      deck.push_back("Jack clubs");
      int tmpVal = i;
      int tmpSuit = 1;
      valAndSuit.push_back(new int[2]);
      valAndSuit[13+(i-2)][0] = tmpVal;
      valAndSuit[13+(i-2)][1] = tmpSuit;
    }
    else if(i == 12){
      deck.push_back("Queen clubs");
      int tmpVal = i;
      int tmpSuit = 1;
      valAndSuit.push_back(new int[2]);
      valAndSuit[13+(i-2)][0] = tmpVal;
      valAndSuit[13+(i-2)][1] = tmpSuit;
    }
    else if(i == 13){
      deck.push_back("King clubs");
      int tmpVal = i;
      int tmpSuit = 1;
      valAndSuit.push_back(new int[2]);
      valAndSuit[13+(i-2)][0] = tmpVal;
      valAndSuit[13+(i-2)][1] = tmpSuit;
    }
    else if(i == 14){
      deck.push_back("Ace clubs");
      int tmpVal = i;
      int tmpSuit = 1;
      valAndSuit.push_back(new int[2]);
      valAndSuit[13+(i-2)][0] = tmpVal;
      valAndSuit[13+(i-2)][1] = tmpSuit;
    }
  }
  
  //Hearts
  for (int i = 2; i < 15; i++){
    if(i < 11) {
      string tempStr;
      std::stringstream ss;
      ss << i;
      tempStr = ss.str();
      tempStr += " hearts";
      deck.push_back(tempStr);
      int tmpVal = i;
      int tmpSuit = 2;
      valAndSuit.push_back(new int[2]);
      valAndSuit[26 + (i-2)][0] = tmpVal;
      valAndSuit[26 + (i-2)][1] = tmpSuit;
    }
    else if(i == 11){
      deck.push_back("Jack hearts");
      int tmpVal = i;
      int tmpSuit = 2;
      valAndSuit.push_back(new int[2]);
      valAndSuit[26 + (i-2)][0] = tmpVal;
      valAndSuit[26 + (i-2)][1] = tmpSuit;
    }
    else if(i == 12){
      deck.push_back("Queen hearts");
      int tmpVal = i;
      int tmpSuit = 2;
      valAndSuit.push_back(new int[2]);
      valAndSuit[26 + (i-2)][0] = tmpVal;
      valAndSuit[26 + (i-2)][1] = tmpSuit;
    }
    else if(i == 13){
      deck.push_back("King hearts");
      int tmpVal = i;
      int tmpSuit = 2;
      valAndSuit.push_back(new int[2]);
      valAndSuit[26 + (i-2)][0] = tmpVal;
      valAndSuit[26 + (i-2)][1] = tmpSuit;
    }
    else if(i == 14){
      deck.push_back("Ace hearts");
      int tmpVal = i;
      int tmpSuit = 2;
      valAndSuit.push_back(new int[2]);
      valAndSuit[26 + (i-2)][0] = tmpVal;
      valAndSuit[26 + (i-2)][1] = tmpSuit;
    }
  }
  
  //Diamonds
  for (int i = 2; i < 15; i++){
    if(i < 11) {
      string tempStr;
      std::stringstream ss;
      ss << i;
      tempStr = ss.str();
      tempStr += " diamonds";
      deck.push_back(tempStr);
      int tmpVal = i;
      int tmpSuit = 3;
      valAndSuit.push_back(new int[2]);
      valAndSuit[39 +(i-2)][0] = tmpVal;
      valAndSuit[39 +(i-2)][1] = tmpSuit;
    }
    else if(i == 11){
      deck.push_back("Jack diamonds");
      int tmpVal = i;
      int tmpSuit = 3;
      valAndSuit.push_back(new int[2]);
      valAndSuit[39 +(i-2)][0] = tmpVal;
      valAndSuit[39 +(i-2)][1] = tmpSuit;
    }
    else if(i == 12){
      deck.push_back("Queen diamonds");
      int tmpVal = i;
      int tmpSuit = 3;
      valAndSuit.push_back(new int[2]);
      valAndSuit[39 +(i-2)][0] = tmpVal;
      valAndSuit[39 +(i-2)][1] = tmpSuit;
    }
    else if(i == 13){
      deck.push_back("King diamonds");
      int tmpVal = i;
      int tmpSuit = 3;
      valAndSuit.push_back(new int[2]);
      valAndSuit[39 +(i-2)][0] = tmpVal;
      valAndSuit[39 +(i-2)][1] = tmpSuit;
    }
    else if(i == 14){
      deck.push_back("Ace diamonds");
      int tmpVal = i;
      int tmpSuit = 3;
      valAndSuit.push_back(new int[2]);
      valAndSuit[39 +(i-2)][0] = tmpVal;
      valAndSuit[39 +(i-2)][1] = tmpSuit;
    }
  }
  
  for (int i = 0; i < valAndSuit.size(); i++) {
    cout << "Value: " << valAndSuit[i][0] << endl;
    cout << "Suit: " << valAndSuit[i][1] << endl;
  }
}


#endif
