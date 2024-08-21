/* 
 * File:   Player.cpp
 * Author: arintaauza
 * 
 * Created on 1 janvier 2015, 00:39
 */

#include "Player.h"
#include "Card.h"
#include <iostream>

using namespace std;
Player::Player() {
    listOfCard = new Card[26];
    pointer = 0;
    listOfCardWon = new Card[52];
    plcw = 0;
}

Player::Player(const Player& orig) {
}

Player::~Player() {
}
Card* Player::getlistOfCard(){
    return listOfCard;
}
void Player::setlistOfCard(int i, Card * c) {
    //(*c).printCard();
    listOfCard[i] = *c;
    //cout << "gwo" << endl;
    //listOfCard[i].printCard();
}

void Player::printPlayerCard(){
    for(int i=0; i<26; i++){
        listOfCard[i].printCard();
    }
}

bool Player::isEmpty(){
    return (pointer == 26); // kalau udah 26 berarti kartunya udah abis, permainan selesai
}

Card& Player::getSingleCard(){
    return listOfCard[pointer++]; //ngeluarin single card
}

void Player::addlistOfCardWon(Card * c, int nb){
    for (int i = 0; i < nb; i++){
        listOfCardWon[plcw++] = c[i];
    }
}
int Player::getScore(){
    return plcw;
}

void Player::printCardWon(){
    cout << "------" << endl;
    for (int i = 0; i < plcw; i++) {
        listOfCardWon[i].printCard();
    }
    cout << "------" << endl;
}
