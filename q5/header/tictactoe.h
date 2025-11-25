#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>
#include <string>
using namespace std;

class TicTacToe
{
    public:
    TicTacToe();
    void printBoard();
    void turn();
    void player1();
    void player2();

    private:
    int size = 3;
    int column_player1, row_player1;
    int column_player2, row_player2;
    string board[3][3];
};

#endif