#define BATTLESHIP_H_
#ifndef BATTLESHIP_H_

#include "block.h"
#include <iostream>
#include <string>

using namespace std;

class BattleShip {

  public:
    int health;
    string name;
    bool isHit();
    bool collision();
    bool isSunk();

  private:
    bool getCoordinates();

};

#endif

/* 
 * Carrier (5)
 * Battleship (4)
 * Cruiser (3)
 * Submarine (3)
 * Destroyer (2)
 * */
