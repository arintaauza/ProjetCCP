/* 
 * File:   Player.h
 * Author: arintaauza
 *
 * Created on 1 janvier 2015, 00:39
 */

#ifndef PLAYER_H
#define	PLAYER_H
#include "Card.h"

class Player {
public:
    Player();
    Player(const Player& orig);
    virtual ~Player();
    void getCard(Card*); // Player dapet kartu
    Card& getSingleCard(); // Kartu yg diambil sama player dari deck punya dia
    Card* getlistOfCard();
    void setlistOfCard(int, Card*);
    void printPlayerCard();
    bool isEmpty();
    void addlistOfCardWon(Card*, int);
    int getScore();
    void printCardWon();
private:
    Card* listOfCard; // Kartu yg player pegang
    int pointer; //
    Card* listOfCardWon; // Kartu yg dimenangin sama player, asumsi 
    int plcw; // pointer of list of card won
    int flag; // Penanda humain : 1, robot : 2
};

#endif	/* PLAYER_H */

