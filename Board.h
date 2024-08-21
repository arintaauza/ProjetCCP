/* 
 * File:   Board.h
 * Author: arintaauza
 *
 * Created on 1 janvier 2015, 00:47
 */

#ifndef BOARD_H
#define	BOARD_H
#include "Deck.h"
#include "Player.h"

class Board {
public:
    Board(Deck);
    Board();
    Board(const Board& orig);
    virtual ~Board();
    void printPlayerCard(Player); // Nampilin kartu yg dipegang sama player
private:

};

#endif	/* BOARD_H */

