#include "TicTacToe.h"
#include "Champion.h"

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

// Player& TicTacToe::winner() const{
//     if (winnerStr.compare("Nissan and Moshe")==0)
//                 return Champion;


// }
Player& TicTacToe::winner() const{
    //TODO Moshe: chech how to return object if it can't be const
    //and cant be on stack
    Champion* c= new Champion();
    return *c;

}
void TicTacToe::play(Player& p1,Player& p2){

    bool win = false;
    char charOfWinner = '.';
    int i = 0; 

    // // for(i < (int)ceil(table_size*table_size/2.0) && !win; ++i){
    while(i<=table_size*table_size && !win){
        Coordinate coord={0,0};
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
        winnerStr = p1.name();
    if(charOfWinner == p2.getChar())
        winnerStr = p2.name();
    if(charOfWinner == '.')
        winnerStr = p2.name();

    
}
