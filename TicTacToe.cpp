#include "TicTacToe.h"

TicTacToe::TicTacToe(int size):table_size(size),play_board(size){
}

bool TicTacToe::checkPoint(const Coordinate& coord) const{
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
    int i = 0; 

    while(i<=table_size*table_size && !win){
        try{
            Coordinate coord = p1.play(play_board);
            if(checkPoint(coord)){
                play_board[coord] = p1.getChar();
                ++i;
            }
            else{
                win = true;
                charOfWinner = p2.getChar();
            }
        }catch(...){
            win = true;
            charOfWinner = p2.getChar();
        }

        win = checkWinner(coord,p1.getChar());
        if(win)
            charOfWinner = p1.getChar();

        if(i != table_size*table_size ){
            try{
                coord = p2.play(play_board);
                if(checkPoint(coord)){
                    play_board[coord] = p2.getChar();
                    ++i;
                }
                else{
                    win = true;
                    charOfWinner = p1.getChar();
                }
            }catch(...){
                win = true;
                charOfWinner = p1.getChar();
            }

            win = checkWinner(coord,p2.getChar());
            if(win)
                charOfWinner = p2.getChar();
        
        }
    }

    if(charOfWinner == p1.getChar())
        winner = p1.name();
    if(charOfWinner == p2.getChar())
        winner = p2.name();
    if(charOfWinner == '.')
        winner = p2.name();

    
}
