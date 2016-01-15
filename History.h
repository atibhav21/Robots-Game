//
//  History.hpp
//  Project1
//
//  Created by Atibhav Mittal on 1/6/16.
//  Copyright © 2016 ati. All rights reserved.
//

#ifndef History_h
#define History_h

#include "globals.h"

class History
{
private:
    char Grid[MAXROWS][MAXCOLS];
    int m_rows, m_cols;
    
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
};


#endif /* History_hpp */
