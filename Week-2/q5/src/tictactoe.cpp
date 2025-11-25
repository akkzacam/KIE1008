#include <iostream>
#include <string>
#include <stdexcept>
#include "../header/tictactoe.h"
using namespace std;

TicTacToe::TicTacToe()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            board[i][j] = "0";
        }
    }
}

void TicTacToe::printBoard()
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void TicTacToe::player1()
{
    while (true)
    {
        printBoard();
        cout << "PLAYER 1'S TURN" << endl;
        cout << "Enter row: ";
        cin >> row_player1;
        cout << "Enter column: ";
        cin >> column_player1;

        if(column_player1 < 0 || column_player1 > 2 || row_player1 < 0 || row_player1 > 2)
        {
            cout << "Invalid move." << endl;
            continue;
        }

        if (board[row_player1][column_player1] == "0")
        {
            board[row_player1][column_player1] = "X";
            break;
        }
        else
        {
            cout << "Space is filled. Fill different space" << endl;
            continue;
        }
    }
}

void TicTacToe::player2()
{

    while (true)
    {
        printBoard();
        cout << "PLAYER 2'S TURN" << endl;
        cout << "Enter row: ";
        cin >> row_player2;
        cout << "Enter column: ";
        cin >> column_player2;
        if(column_player2 < 0 || column_player2 > 2 || row_player2 < 0 || row_player2 > 2)
        {
            cout << "Invalid move." << endl;
            continue;
        }

        if (board[row_player2][column_player2] == "0")
        {
            board[row_player2][column_player2] = "O";
            break;
        }
        else
        {
            cout << "Space is filled. Fill different space" << endl;
            continue;
        }
    }
    
}

void TicTacToe::turn()
{
    bool player1_win = false;
    bool player2_win = false;
    int count_draw = 0;
    while (true)
    {
        player1();
        //CHECK IF X WINS
        if (board[0][0] == "X" && board[0][1] == "X" && board[0][2] == "X")
        {
            player1_win = true;
            break;
        }
        else if (board[1][0] == "X" && board[1][1] == "X" && board[1][2] == "X")
        {
            player1_win = true;
            break;
        }
        else if (board[2][0] == "X" && board[2][1] == "X" && board[2][2] == "X")
        {
            player1_win = true;
            break;
        }
        else if (board[0][0] == "X" && board[1][0] == "X" && board[2][0] == "X")
        {
            player1_win = true;
            break;
        }
        else if (board[0][1] == "X" && board[1][1] == "X" && board[2][1] == "X")
        {
            player1_win = true;
            break;
        }
        else if (board[0][2] == "X" && board[1][2] == "X" && board[2][2] == "X")
        {
            player1_win = true;
            break;
        }
        else if (board[0][0] == "X" && board[1][1] == "X" && board[2][2] == "X")
        {
            player1_win = true;
            break;
        }
        else if (board[2][0] == "X" && board[1][1] == "X" && board[0][2] == "X")
        {
            player1_win = true;
            break;
        }

        player2();
        //CHECK IS O WINS
        if (board[0][0] == "O" && board[0][1] == "O" && board[0][2] == "O")
        {
            player2_win = true;
            break;
        }
        else if (board[1][0] == "O" && board[1][1] == "O" && board[1][2] == "O")
        {
            player2_win = true;
            break;
        }
        else if (board[2][0] == "O" && board[2][1] == "O" && board[2][2] == "O")
        {
            player2_win = true;
            break;
        }
        else if (board[0][0] == "O" && board[1][0] == "O" && board[2][0] == "O")
        {
            player2_win = true;
            break;
        }
        else if (board[0][1] == "O" && board[1][1] == "O" && board[2][1] == "O")
        {
            player2_win = true;
            break;
        }
        else if (board[0][2] == "O" && board[1][2] == "O" && board[2][2] == "O")
        {
            player2_win = true;
            break;
        }
        else if (board[0][0] == "O" && board[1][1] == "O" && board[2][2] == "O")
        {
            player2_win = true;
            break;
        }
        else if (board[2][0] == "O" && board[1][1] == "O" && board[0][2] == "O")
        {
            player2_win = true;
            break;
        }

        count_draw++;
        if (count_draw == 9)
        {
            break;
        }
    }

    cout << "Game ended" << endl;
    printBoard();

    if (player1_win)
    {
        cout << "PLAYER 1 WINS!" << endl;
    }
    else if (player2_win)
    {
        cout << "PLAYER 2 WINS!" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}

