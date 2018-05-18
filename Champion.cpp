#include "Champion.h"

const Coordinate Champion::play(const Board& board){
    for (uint x=0; x<board.size(); ++x) {
		for (uint y=0; y<board.size(); ++y) {
            if(board[Coordinate{0,0}] == '.')
                return Coordinate{board.size()-1,board.size()-1};
            else{
                if(board[Coordinate{1,0}] != '.'){
                    for(uint i = 0; i < board.size(); ++i){
                        if(board[Coordinate{board.size()-1,i}] == '.')
                            return Coordinate{board.size()-1,i};
                    }
                }
            }
		}
	}
	return {0,0};  // did not find an empty square - play on the top-left
}

