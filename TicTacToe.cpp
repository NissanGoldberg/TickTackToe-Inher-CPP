#include "TicTacToe.h"

TicTacToe::TicTacToe(int size):table_size(size),play_board(size){
}

bool TicTacToe::checkPoint(const Coordinate& coord) const{
    if (coord.x==0 && coord.y==0)
        if (play_board[coord]!='.')
            return false;
        
    return true;
}

bool TicTacToe::checkWinner(const Coordinate& coord,const char c) const{
    //TODO Complete from C
    return true;
}


void TicTacToe::play(Player& p1,Player& p2){

    bool win = false;
    char charOfWinner = '.';

    for(int i = 0; i < table_size*table_size/2 && !win; ++i){
        Coordinate coord = p1.play(play_board);
        if(checkPoint(coord)){
            play_board[coord] = 'X';
        }

        win = checkWinner(coord,'X');
        if(win)
            charOfWinner = 'X';

        coord = p2.play(play_board);
        if(checkPoint(coord)){
            play_board[coord] = 'O';
        }

        win = checkWinner(coord,'O');
        if(win)
            charOfWinner = 'O';
    }

    if(charOfWinner == 'X')
        // winner = p1;
    
}
