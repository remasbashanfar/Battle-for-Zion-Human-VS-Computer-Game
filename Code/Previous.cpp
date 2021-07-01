//
//  Previous.cpp
//  Project1cs32
//
//  Created by Remas Bashanfar on 6/30/21.
//
#include "Previous.h"
#include "Player.h"
#include "Arena.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

Previous::Previous(int nRows, int nCols){
    m_rows = nRows;
    m_cols = nCols;
    //m_player = nullptr;
}

bool Previous::dropACrumb(int r, int c){
    if (r <= 0  ||  c <= 0  ||  r > MAXROWS  ||  c > MAXCOLS)
    {
        return false;
    }
    
    //initially, there are 0 moves in each position and its incremented by each move the player makes
    for (int R = 0; R < m_rows; R++)
    {
        for (int C = 0; C < m_cols; C++)
        {
           board[R][C] = 0;
        }
    }
    board[r-1][c-1]++;
    
    
    return true;
}
void Previous::showPreviousMoves() const{
    clearScreen();
    char display[MAXROWS][MAXCOLS];
    
        // Fill the grid with dots
//    for (int r = 0; r < m_arena->rows(); r++)
//    {
//        for (int c = 0; c < m_arena->cols(); c++)
//        {
//            display[r][c] = '.';
//        }
//    }
    for (int r = 0; r < m_rows; r++)
    {
        for (int c = 0; c < m_cols; c++)
        {
            display[r][c] = '.';
        }
    }
    
    int m_moves = board[m_rows-1][m_cols-1];//NOT SURE
    if ( m_player != nullptr)
    {
        //char gridChar = display[m_player->row()-1][m_player->col()-1];
        char gridChar = display[m_rows-1][m_cols-1];

                if (m_moves == 0)
                gridChar = '.';
            else if (m_moves == 1)
                gridChar = 'A';
            else if (m_moves == 2)
                gridChar = 'B';
            else if (m_moves == 3)
                gridChar = 'C';
            else if (m_moves == 4)
                gridChar = 'D';
            else if (m_moves == 5)
                gridChar = 'E';
            else if (m_moves == 6)
                gridChar = 'F';
            else if (m_moves == 7)
                gridChar = 'G';
            else if (m_moves == 8)
                gridChar = 'H';
            else if (m_moves == 9)
                gridChar = 'I';
            else if (m_moves == 10)
                gridChar = 'J';
            else if (m_moves == 11)
                gridChar = 'K';
            else if (m_moves == 12)
                gridChar = 'L';
            else if (m_moves == 13)
                gridChar = 'M';
            else if (m_moves == 14)
                gridChar = 'N';
            else if (m_moves == 15)
                gridChar = 'O';
            else if (m_moves == 16)
                gridChar = 'P';
            else if (m_moves == 17)
                gridChar = 'Q';
            else if (m_moves == 18)
                gridChar = 'R';
            else if (m_moves == 19)
                gridChar = 'S';
            else if (m_moves == 20)
                gridChar = 'T';
            else if (m_moves == 21)
                gridChar = 'U';
            else if (m_moves == 22)
                gridChar = 'V';
            else if (m_moves == 23)
                gridChar = 'W';
            else if (m_moves == 24)
                gridChar = 'X';
            else if (m_moves == 25)
                gridChar = 'Y';
            else if (m_moves >= 26)
                gridChar = 'Z';
        }
//    for (int r = 0; r < m_arena->rows(); r++)
//    {
//        for (int c = 0; c < m_arena->cols(); c++)
//        {
//            cout << display[r][c];
//        }
//        cout << endl;
//    }
    for (int r = 0; r < m_rows; r++)
    {
        for (int c = 0; c < m_cols; c++)
        {
            cout << display[r][c];
        }
        cout << endl;
    }
    
}
