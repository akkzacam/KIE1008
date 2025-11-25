#include <iostream>
#include "../header/tictactoe.h"
using namespace std;

int main (void)
{
    TicTacToe game1;
    game1.printBoard();
    game1.turn();
    return 0;
}