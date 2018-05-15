#pragma once
#include "Player.h"

class Champion:public Player{
    private:

    public:

        Champion();
        const string name() const{
            return "Nissan and Moshe"; 
        }
        const Coordinate play(const Board& board);
};
