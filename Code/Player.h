//
//  Player.h
//  Project1cs32
//
//  Created by Remas Bashanfar on 6/24/21.
//

#ifndef Player_h
#define Player_h
#include "globals.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
class Arena;
class Player
{
  public:
        // Constructor
    Player(Arena *ap, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    bool isDead() const;

        // Mutators
    std::string takeComputerChosenTurn();
    void   stand();
    void   move(int dir);
    bool   shoot(int dir);
    void   setDead();
    
  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_age;
    bool   m_dead;
    int    computeDanger(int r, int c) const;
};

#endif /* Player_h */
