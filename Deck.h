/* 
 * File:   Deck.h
 * Author: arintaauza
 *
 * Created on 1 janvier 2015, 01:12
 */

#ifndef DECK_H
#define	DECK_H
#include "Card.h"
#include <string>
using namespace std;
class Deck {
public:
    Deck();
    Deck(int*, int*);
    Deck(const Deck& orig);
    virtual ~Deck();
    void printDeck();
    Card* getList();
    int getNbList();
private:
    Card* list; // 52 kartu yg mau dibikin
    int nbList;
};

#endif	/* DECK_H */

