#include "Soldier.hpp"
#include "Board.hpp"
#include "Sniper.hpp"
#include "doctest.h"

TEST_CASE("soldiers"){
    WarGame::Board board(10,10);
    board[{0,1}]=new Sniper(1);
    for(int i=0;i<100;i++){
        CHECK(!board.has_soldiers(1));
    }
}