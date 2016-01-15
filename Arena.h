//
//  Arena.hpp
//  Project1
//
//  Created by Atibhav Mittal on 1/6/16.
//  Copyright © 2016 ati. All rights reserved.
//

#ifndef Arena_h
#define Arena_h


#include "globals.h"
#include "History.h"

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
    bool    determineNewPosition(int& r, int& c, int dir) const;
    void    display() const;
    
    
    // Mutators
    bool   addRobot(int r, int c);
    bool   addPlayer(int r, int c);
    bool   attackRobotAt(int r, int c, int dir);
    bool   moveRobots();
    History& history();
    
private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Robot*  m_robots[MAXROBOTS];
    History m_history;
    int     m_nRobots;
};

#endif /* Arena_h */
