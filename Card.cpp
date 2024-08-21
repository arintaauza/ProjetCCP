/* 
 * File:   Card.cpp
 * Author: arintaauza
 * 
 * Created on 1 janvier 2015, 00:45
 */

#include "Card.h"
#include <iostream>



Card::Card(const string suit, const string rank) : m_suit(suit),m_rank(rank){ 
    bool found = false;
    int i = 0;
    while (!found){
        if (RANK[i] == rank) {
            found = true;
        }
        i++;
    }
    o_rank = i;
}
Card::Card(const string suit, const string rank,int oSuit, int oRank) : o_suit(oSuit), o_rank(oRank){
}

Card::Card(const Card& orig){
}

Card::Card(){
}

Card::~Card() {
}

void Card::printCard(){
    cout << m_suit << ", " << m_rank<< endl;    
}

string Card::getSuit(){
    return m_suit;
}
string Card::getRank(){
    return m_rank;
}

int Card::getOrder(string rank){
    bool found = false;
    int i = 0;
    while (!found){
        if (RANK[i] == rank) {
            found = true;
        }
        i++;
    }
    return i;
}

int Card::getOrderSuit(){
    return o_suit;
}

int Card::getOrderRank(){
    return o_rank;
}
