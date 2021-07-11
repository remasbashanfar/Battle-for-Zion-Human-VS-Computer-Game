//
//  Arena.h
//  Project1cs32
//
//  Created by Remas Bashanfar on 6/24/21.
//
#include "Previous.h"
#ifndef Arena_h
#define Arena_h
#include "globals.h" 
#include <string>
#include <cstdlib>
#include <ctime>
class Robot;
class Player;
class Arena
{
  public:
        // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();

        // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     robotCount() const;
    int     nRobotsAt(int r, int c) const;
    void    display(std::string msg) const;

        // Mutators
    bool   addRobot(int r, int c);
    bool   addPlayer(int r, int c);
    void   damageRobotAt(int r, int c);
    bool   moveRobots();
    Previous& thePrevious();


  private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Robot*  m_robots[MAXROBOTS];
    int     m_nRobots;
    Previous m_previous;

};

#endif /* Arena_h */
