#pragma once
#include "DummyPlayers.h"

class TicTacToe{
    int table_size;
    Board play_board;

    public:
        TicTacToe(int);
        void play(Player&,Player&);//1st-'X' , 2nd- 'O'
        Board& board() const;//final board of game
        Player& winner() const;//winning player 'O' wins in a tie
};