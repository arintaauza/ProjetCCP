/* 
 * File:   Deck.cpp
 * Author: arintaauza
 * 
 * Created on 1 janvier 2015, 01:12
 */

#include "Deck.h"
#include <iostream>

Deck::Deck() {
    list = new Card[SUIT_MAX * RANK_MAX]; // alokasiin jumlah space yg dibutuhin
    int k = 0;
    string a, b;
    for(int i=0; i < SUIT_MAX; i++){
        for(int j=0; j < RANK_MAX; j++) {
            a = SUIT[i];
            b = RANK[j];

            Card cc(a, b); // buat satu kartu
            list[k++] = cc; // kartu yg udah dibuat disimpen di dalem list
           
        }
    }
  //  list = listOfCard; //Semua kartu yg udah dibikin
    nbList = SUIT_MAX * RANK_MAX;  
}
Deck::Deck(int* oSuit, int* oRank){
    list = new Card[SUIT_MAX * RANK_MAX]; // alokasiin jumlah space yg dibutuhin
    int k = 0;
    for(int i=0; i < SUIT_MAX; i++){
        for(int j=0; j < RANK_MAX; j++) {
            if (oRank!=0) {
                Card cc(SUIT[i], RANK[j], oSuit[i], oRank[j]); // buat satu kartu
                list[k++] = cc; // kartu yg udah dibuat disimpen di dalem list
            } 
           
        }
    }
  //  list = listOfCard; //Semua kartu yg udah dibikin
    nbList = SUIT_MAX * RANK_MAX;  
}
Deck::Deck(const Deck& orig) {
}

Deck::~Deck() {
}

void Deck::printDeck(){
    for (int i=0; i<nbList; i++) {
       list[i].printCard();
    }
}

Card* Deck::getList(){
    return list; // 52 kartu, semua kartu
}

int Deck::getNbList(){
    return nbList;
}