//Daniel Lingerfelt Heads Up Poker!

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

#include "player_class.hpp"
#include "macros.hpp"
#include "deck.hpp"
#include "dealer.hpp"
#include "hand_value.hpp"

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
//    cout << "First card value: " << player1.firstCardValSuit[0] << " Suit: " << player1.firstCardValSuit[1] << endl;
//    cout << "Second card value: " << player1.secondCardValSuit[0] << " Suit: " << player1.secondCardValSuit[1] << endl;
    
    //Get the flop from dealer and display it
    string flopCard1, flopCard2, flopCard3;
    int flopCard1ValSuit[2], flopCard2ValSuit[2], flopCard3ValSuit[2];
    theFlop(flopCard1, flopCard2, flopCard3, flopCard1ValSuit, flopCard2ValSuit, flopCard3ValSuit);
    cout << "Flop: " << flopCard1 << " | " << flopCard2 << " | " << flopCard3 << " | " << endl;
    cout << "Flop value: " << flopCard1ValSuit[0] << " | " << flopCard2ValSuit[0] << " | " << flopCard3ValSuit[0] << " | " << endl;
    cout << "Flop suit: " << flopCard1ValSuit[1] << " | " << flopCard2ValSuit[1] << " | " << flopCard3ValSuit[1] << " | " << endl;
    
    //Get the turn card and display along with flop
    string turnCard;
    int turnCardValSuit[2];
    theTurn(turnCard, turnCardValSuit);
    cout << "Flop: " << flopCard1 << " | " << flopCard2 << " | " << flopCard3 << " | Turn: " << turnCard << endl; 
    cout << "Flop value: " << flopCard1ValSuit[0] << " | " << flopCard2ValSuit[0] << " | " << flopCard3ValSuit[0] << " | Turn value: " << turnCardValSuit[0] << endl;
    cout << "Flop suit: " << flopCard1ValSuit[1] << " | " << flopCard2ValSuit[1] << " | " << flopCard3ValSuit[1] << " | Turn suit: " << turnCardValSuit[1] << endl;
    
    //Get the river card and display it along with the turn and flop
    string riverCard;
    int riverCardValSuit[2];
    theRiver(riverCard, riverCardValSuit);
    cout << "Flop: " << flopCard1 << " | " << flopCard2 << " | " << flopCard3 << " | Turn: " << turnCard << " | River: " << riverCard << endl;
    cout << "Flop value: " << flopCard1ValSuit[0] << " | " << flopCard2ValSuit[0] << " | " << flopCard3ValSuit[0] << " | Turn value: " << turnCardValSuit[0] << " | River value: " << riverCardValSuit[0] << endl;
    cout << "Flop suit: " << flopCard1ValSuit[1] << " | " << flopCard2ValSuit[1] << " | " << flopCard3ValSuit[1] << " | Turn suit: " << turnCardValSuit[1] << " | River suit: " << riverCardValSuit[1] << endl;
    
    //time to see who wins
    
    
    
    
    //ask to quit or play
    cout << "Type q to quit or p to redeal: " << endl;
    cin >> quitOrPlay;
    
    //ping pong buffer switch
    if(pingPongBuf) {
      pingPongBuf = 0;
    }
    else {
      pingPongBuf = 1;
    }
    
    for (int i = 0; i < valAndSuit.size(); i++) {
      delete[] valAndSuit[i];
    }
    
  }
  //Prints entire deck
  /*for (auto i=deck.begin(); i != deck.end(); i++) {
    cout << *i << endl;
    }*/


  return 0;
}
