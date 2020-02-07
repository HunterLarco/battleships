#include "battleship.h"
#include <string>
#include <tuple>

// Contructor
Battleship::Battleship ( int health, string name, int attackPower) {
    
  this->health = health;
  this->name = name;
  this->attackPower = attackPower;
  // private attribute
  this->blocks::array = make_tuple(block.coordinate_x, block.coordinate_y);
}

// Private Functions
int Battleship::getCoordinates() {
  // return coordinates of the individual blocks
  return Battleship.blocks
}

// Public Functions
bool Battleship::isHit() {
  // bool, true if ship was hit or not
}

bool Battleship::collision() {
  // checks whether ships are colliding or not
}

bool Battleship::isSunk() {
    // checks whether a ship has sunk or not
  if(Battleship.health <= 0) {
    return false
  }

  return true
}
