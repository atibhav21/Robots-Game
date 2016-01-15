//
//  Game.h
//  Project1
//
//  Created by Atibhav Mittal on 1/6/16.
//  Copyright © 2016 ati. All rights reserved.
//

#ifndef Game_h
#define Game_h




class Arena;
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
