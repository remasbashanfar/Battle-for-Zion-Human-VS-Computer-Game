//
//  Previous.h
//  Project1cs32
//
//  Created by Remas Bashanfar on 6/30/21.
//

#ifndef Previous_h
#define Previous_h
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "globals.h"

class Player;
class Arena;
class Previous
{
    public:
        Previous(int nRows, int nCols);
        bool dropACrumb(int r, int c);
        void showPreviousMoves() const;
    private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Arena* m_arena;
    //int m_moves;
    int board[MAXROWS][MAXCOLS];
};


#endif /* Previous_h */
