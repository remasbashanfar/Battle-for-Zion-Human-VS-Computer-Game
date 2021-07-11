//
//  Previous.cpp
//  Project1cs32
//
//  Created by Remas Bashanfar on 6/30/21.
//
#include "Previous.h"
#include <iostream>
using namespace std;

Previous::Previous(int nRows, int nCols){
    m_rows = nRows;
    m_cols = nCols;
}

bool Previous::dropACrumb(int r, int c){
    if (r <= 0  ||  c <= 0  ||  r > MAXROWS  ||  c > MAXCOLS || r > m_rows || c> m_cols)
    {
        return false;
    }
    
    if ( board[r-1][c-1] < 65 || board[r-1][c-1] > 90 )
    {
        board[r-1][c-1]=65;
    }
    else { board[r-1][c-1]++;}
    
    return true;
}
void Previous::showPreviousMoves() const{
    clearScreen();

    char convertToChar;
    for (int r = 0; r < m_rows; r++)
    {
        for (int c = 0; c < m_cols; c++)
        {
            if ( board[r][c] <= 90 && board[r][c] >= 65)
            {
                convertToChar= board[r][c];
                cout << convertToChar;
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }
    //based on spec, we need an endl at the end
    cout << endl;

}
