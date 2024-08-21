/* 
 * File:   Game_Controller.h
 * Author: arintaauza
 *
 * Created on 1 janvier 2015, 00:42
 */

#ifndef GAME_CONTROLLER_H
#define	GAME_CONTROLLER_H
#include "Deck.h"
#include "Player.h"

using namespace std;
class Game_Controller {
public:
    Game_Controller();
    Game_Controller(const Game_Controller& orig);
    virtual ~Game_Controller();
    Card** shuffle(int);
    void rule(Player*,Player*);
    bool isEmpty(Player);
    int getScore(Player);
    void shuffleCard(Deck*);
    void distributeCard(Deck*,Player*,Player*);
    void swap(Deck*,int,int);
    
  
private:

};

#endif	/* GAME_CONTROLLER_H */

