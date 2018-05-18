#pragma once

#include <math.h>       /* ceil */
#include "DummyPlayers.h"


class TicTacToe{
    int table_size;
    Board play_board;
    string winnerStr;

    bool checkPoint(const Coordinate&) const;
    bool checkWinner(const Coordinate&,const char) const;


    public:
        TicTacToe(int);
        void play(Player&,Player&);//1st-'X' , 2nd- 'O'
        Board& board() const;//final board of game
        Player& winner() const;
            
            
            // switch(winner){
            //     case :
                    
            //         break;
            //     case "XYPlayer":
            //         return XYPlayer{};
            //         break;
            //     case "YXPlayer":
            //         return YXPlayer{};
            //         break;
            //     case "Nissan and Moshe":
            //         return Champion{};
            //         break;
            //     case "Nissan and Moshe":
            //         return Champion{};
            //         break;
                    
            // }
        // }


};