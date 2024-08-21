/* 
 * File:   Game_Controller.cpp
 * Author: arintaauza
 * 
 * Created on 1 janvier 2015, 00:42
 */

#include "Game_Controller.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Game_Controller::Game_Controller() {
}

Game_Controller::Game_Controller(const Game_Controller& orig) {
}

Game_Controller::~Game_Controller() {
}
void Game_Controller::shuffleCard(Deck* d){
    int numberOfShuffle;
    int j, k;
    numberOfShuffle = (rand() % 100) + 50;
    for (int i=0; i<numberOfShuffle; i++){
        j = rand() % 52;
        do {
            k = rand() % 52 ;
        } while (j==k);

        swap(&(*d),j,k);
       
    }
}
void Game_Controller::swap(Deck* d,int i, int j){
    Card s;
    s = (*d).getList()[i];
    (*d).getList()[i] = (*d).getList()[j];
    (*d).getList()[j] = s;
}
void Game_Controller::distributeCard(Deck *d, Player* p1, Player* p2){
    //cout << "----" <<  endl;

    for (int i=0; i<26; i++){
    //(*d).getList()[i].printCard();        
        //cout << "hop" << endl;
        (*p1).setlistOfCard(i, &(*d).getList()[i]);
    }
    
    for (int j=0; j<26; j++){
        (*p2).setlistOfCard(j, &(*d).getList()[j+26]);
    }
}
void Game_Controller::rule(Player* p1,Player* p2){
    Card c1;
    Card c2;
    Card * list = new Card[52];
    c1 = (*p1).getSingleCard();
    c2 = (*p2).getSingleCard();
    cout << "Player 1 = ";
    c1.printCard();
    cout << "Player 2 = ";
    c2.printCard();
    
    int counter = 2;
    list[0] = c1;
    list[1] = c2;

        
    while (c1.getOrder(c1.getRank()) == c2.getOrder(c2.getRank()) && !(*p1).isEmpty()){
        c1 = (*p1).getSingleCard();
        c2 = (*p2).getSingleCard();        
        list[counter++] = c1;
        list[counter++] = c2;
        cout << "Player 1 = *, Player 2 = *" << endl;
        c1 = (*p1).getSingleCard();
        c2 = (*p2).getSingleCard();        
        list[counter++] = c1;
        list[counter++] = c2;
        cout << "Player 1 = ";
        c1.printCard();
        cout << "Player 2 = ";
        c2.printCard();
    }
    if (c1.getOrder(c1.getRank()) > c2.getOrder(c2.getRank())) {
        (*p1).addlistOfCardWon(list, counter);
        cout << "Player 1 has won " << counter << " cards" << endl;
    } else {
        (*p2).addlistOfCardWon(list, counter);  
        cout << "Player 2 has won " << counter << " cards" << endl;
    }
}