//
//  History.cpp
//  Project1
//
//  Created by Atibhav Mittal on 1/6/16.
//  Copyright © 2016 ati. All rights reserved.
//
#include <iostream>
#include "History.h"
#include "globals.h"
using namespace std;
History::History(int nRows, int nCols)
{
    m_rows = nRows;
    m_cols = nCols;
    for(int i = 0; i<m_rows;i++)
    {
        for(int j = 0; j<m_cols;j++)
        {
            Grid[i][j] = '.';
        }
    }
}

bool History::record(int r, int c)
{
    if(r>=m_rows||c>=m_cols||r<0||c<0)
    {
        return false;
    }
    if(Grid[r][c] == '.')
    {
        Grid[r][c] = 'A';
    }
    else if (Grid[r][c] < 'Z')
    {
        Grid[r][c] += 1;
    }
    else
    {
        Grid[r][c] = 'Z';
    }
    return true;
}

void History::display() const
{
    clearScreen();
    for(int i = 0; i<m_rows; i++)
    {
        for(int j = 0; j<m_cols; j++)
        {
            cout<< Grid[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
