/* 
 * File:   Card.h
 * Author: arintaauza
 *
 * Created on 1 janvier 2015, 00:45
 */

#ifndef CARD_H
#define	CARD_H
#include <string>

const int SUIT_MAX(4);
const int RANK_MAX(13);

const std::string SUIT[SUIT_MAX] = {"H","D","S","C"};
const std::string RANK[RANK_MAX] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

using namespace std;
class Card {
public:
    Card(string,string);
    Card(string, string, int, int);
    Card(const Card& orig);
    Card();
    virtual ~Card();
    void printCard();
    string getSuit();
    string getRank();
    int getOrder(string);
    int getOrderSuit();
    int getOrderRank();
private:
    string m_suit;
    string m_rank;
    int o_suit;
    int o_rank;
};

#endif	/* CARD_H */