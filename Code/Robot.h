//
//  Robot.h
//  Project1cs32
//
//  Created by Remas Bashanfar on 6/24/21.
//
#include "globals.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#ifndef Robot_h
#define Robot_h
class Arena;  

class Robot
{
  public:
        // Constructor
    Robot(Arena* ap, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;

        // Mutators
    void move();
    bool takeDamageAndLive();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
};

#endif /* Robot_h */
