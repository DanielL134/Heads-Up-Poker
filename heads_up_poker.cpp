//Daniel Lingerfelt Heads Up Poker!

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

#include "player_class.hpp"
#include "macros.hpp"
#include "deck.hpp"
#include "dealer.hpp"

//In order to compile then run
//g++ -std=c++11 heads_up_poker.cpp -o heads_up_poker
//./heads_up_poker

using namespace std;

int main() {
  //create computer and player objects
  Player computerPlayer;
  Player player1;
  
  //setup computer object
  computerPlayer.buyIn();
  computerPlayer.setPlayerName("Computer");
  
  //player setup with entering name
  /*
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << endl;
  player1.setPlayerName(name);
  cout << player1.playerName << " has bought in for 500 chips." << endl;
  */
  
  
  //test purposes 
  player1.setPlayerName("Daniel");
  cout << "Player1: " << player1.playerName << endl;
  player1.buyIn();
  cout << "Chip Count: " << player1.chipCount << endl;

  createDeck();  
  
  dealCards(computerPlayer, player1);
  cout << "Computer's first and second card: " << computerPlayer.firstCard << " and " << computerPlayer.secondCard << endl;
  cout << player1.playerName << "'s first and second card: " << player1.firstCard << " and " << player1.secondCard << endl;
  
  string flopCard1, flopCard2, flopCard3;
  theFlop(flopCard1, flopCard2, flopCard3);
  cout << "Flop: " << flopCard1 << " | " << flopCard2 << " | " << flopCard3 << " | " << endl;
  
  //Prints entire deck
  /*for (auto i=deck.begin(); i != deck.end(); i++) {
    cout << *i << endl;
  }*/


  return 0;
}
