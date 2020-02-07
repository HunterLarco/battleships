#include "battleship.h"
#include <string>

// Contructor
Ship::Ship ( int health, string name ) {
    
    this->origin = originPoint;
    this->orientation = orientationDirection;
    this->length = lengthValue;
    
    for ( int i = 0; i < lengthValue; i++ ) {
        
        point p;
        
        if( orientationDirection == HORIZONTAL ) {
            
            p.setX ( originPoint.getX() + i );
            p.setY ( originPoint.getY ( ) );
        }
        else {
            
            p.setX ( originPoint.getX ( ) );
            p.setY ( originPoint.getY ( ) + i );
        }
        
        points << p;
    }
}
