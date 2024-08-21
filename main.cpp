/* 
 * File:   main.cpp
 * Author: arintaauza
 *
 * Created on 14 décembre 2014, 09:10
 */

#include "Deck.h"
#include "Card.h"
#include "Game_Controller.h"
#include "Player.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

/*
 * 
 */
int main() {
//    Deck d;
//    //d.printDeck();
//    Game_Controller g;
//    g.shuffleCard(&d);
//    //d.printDeck();
//    Player p1;
//    Player p2;
//    //d.printDeck();
//    //d.getList()[26].printCard();
//    g.distributeCard(&d,&p1,&p2);
//    cout << "Kartu player 1" << endl;
//    //p1.printPlayerCard();
//    cout << "Kartu player 2" << endl;
//    //p2.printPlayerCard();
//    bool over = false;
//    string ss;
//    while (!over) {
//        cout << "continue? (y/n)";
//        cin >> ss;
//        g.rule(&p1, &p2);
//        if (p1.isEmpty()) {
//            over = true;
//        }
//    }
//    if (p1.getScore() > p2.getScore()){
//        cout << "P1 has won the game with " << p1.getScore() << " cards"<< endl;
//        p1.printCardWon();
//    } else if (p1.getScore() < p2.getScore()) {
//        cout << "P2 has won the game with " << p2.getScore() << " cards" << endl;
//        p2.printCardWon();
//    } else {
//        cout << "Booo.. No one has won" << endl;
//    }
//    
    
   srand (time(NULL));
   int i = rand() % 100 + 10;
   cout << i << endl;
}

