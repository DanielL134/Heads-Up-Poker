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
  int pot = 0;
  int pingPongBuf = 0;
  
  //test purposes 
  player1.setPlayerName("Daniel");
  cout << "Player1: " << player1.playerName << endl;
  player1.buyIn();
  cout << "Chip Count: " << player1.chipCount << endl;
  string quitOrPlay;
  while(quitOrPlay != "q") {
    
    //set up deck and big blind and small blind
    pot = 0;
    createDeck();  
    if(pingPongBuf) {
      computerPlayer.chipCount = computerPlayer.chipCount - BIG_BLIND;
      player1.chipCount = player1.chipCount - SMALL_BLIND;
      pot = 30;
    }
    else {
      computerPlayer.chipCount = computerPlayer.chipCount - SMALL_BLIND;
      player1.chipCount = player1.chipCount - BIG_BLIND;
      pot = 30;
    }
    
    cout << player1.playerName << "'s Chip Count: " << player1.chipCount << endl;
    cout << computerPlayer.playerName << "'s Chip Count: " << computerPlayer.chipCount << endl;
    //Preflop
    //while(decision) {
    
    
    //}
    //Deal cards to computer and player objects
    dealCards(computerPlayer, player1);
    //cout << "Computer's first and second card: " << computerPlayer.firstCard << " and " << computerPlayer.secondCard << endl;
    cout << player1.playerName << "'s first and second card: " << player1.firstCard << " and " << player1.secondCard << endl;
    
    //Get the flop from dealer and display it
    string flopCard1, flopCard2, flopCard3;
    theFlop(flopCard1, flopCard2, flopCard3);
    cout << "Flop: " << flopCard1 << " | " << flopCard2 << " | " << flopCard3 << " | " << endl;
    
    //Get the turn card and display along with flop
    string turnCard;
    theTurn(turnCard);
    cout << "Flop: " << flopCard1 << " | " << flopCard2 << " | " << flopCard3 << " | Turn: " << turnCard << endl; 
    
    //Get the river card and display it along with the turn and flop
    string riverCard;
    theRiver(riverCard);
    cout << "Flop: " << flopCard1 << " | " << flopCard2 << " | " << flopCard3 << " | Turn: " << turnCard << " | River: " << riverCard << endl;
    
    //ask to quit or play
    cout << "quitOrPlay = " << quitOrPlay << endl;
    cout << "Type q to quit or p to redeal: " << endl;
    cin >> quitOrPlay;
    
    //ping pong buffer switch
    if(pingPongBuf) {
      pingPongBuf = 0;
    }
    else {
      pingPongBuf = 1;
    }
    
  }
  //Prints entire deck
  /*for (auto i=deck.begin(); i != deck.end(); i++) {
    cout << *i << endl;
  }*/


  return 0;
}
