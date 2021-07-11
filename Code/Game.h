//
//  Game.h
//  Project1cs32
//
//  Created by Remas Bashanfar on 6/24/21.
//
#include "globals.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#ifndef Game_h
#define Game_h
class Arena;//WOW
class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nRobots);
    ~Game();

        // Mutators
    void play();

  private:
    Arena* m_arena;
};


#endif /* Game_h */
